// Copyright (c) 2015-2022 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <chain.h>
#include <chainparams.h>
#include <pow.h>
#include <test/util/random.h>
#include <test/util/setup_common.h>

#include <boost/test/unit_test.hpp>

BOOST_FIXTURE_TEST_SUITE(pow_tests, BasicTestingSetup)

/* Off-interval blocks keep previous nBits on mainnet-style params. */
BOOST_AUTO_TEST_CASE(get_next_work)
{
    const auto chainParams = CreateChainParams(*m_node.args, CBaseChainParams::MAIN);
    const auto& consensus = chainParams->GetConsensus();
    CBlockIndex pindexLast;
    pindexLast.nHeight = 100;
    if ((pindexLast.nHeight + 1) % consensus.DifficultyAdjustmentInterval() == 0) {
        pindexLast.nHeight++;
    }
    pindexLast.nTime = 1700000000;
    pindexLast.nBits = 0x1e0ffff0;

    CBlockHeader pblock{};
    pblock.nTime = pindexLast.nTime + consensus.nPowTargetSpacing;

    BOOST_CHECK_EQUAL(GetNextWorkRequired(&pindexLast, &pblock, consensus), pindexLast.nBits);
    BOOST_CHECK(PermittedDifficultyTransition(consensus, pindexLast.nHeight + 1, pindexLast.nBits, pindexLast.nBits));
    BOOST_CHECK(!PermittedDifficultyTransition(consensus, pindexLast.nHeight + 1, pindexLast.nBits, pindexLast.nBits + 1));
}

/* Retargeting result cannot exceed powLimit. */
BOOST_AUTO_TEST_CASE(get_next_work_pow_limit)
{
    const auto chainParams = CreateChainParams(*m_node.args, CBaseChainParams::MAIN);
    const auto& consensus = chainParams->GetConsensus();
    CBlockIndex pindexLast;
    pindexLast.nHeight = consensus.DifficultyAdjustmentInterval() - 1;
    pindexLast.nTime = 1700000000;
    pindexLast.nBits = UintToArith256(consensus.powLimit).GetCompact();

    int64_t very_old_time = pindexLast.nTime - (consensus.nPowTargetTimespan * 100);
    const unsigned int expected_nbits = UintToArith256(consensus.powLimit).GetCompact();
    BOOST_CHECK_EQUAL(CalculateNextWorkRequired(&pindexLast, very_old_time, consensus), expected_nbits);
    BOOST_CHECK(PermittedDifficultyTransition(consensus, pindexLast.nHeight + 1, pindexLast.nBits, expected_nbits));
}

/* Actual timespan lower bound is clamped to targetTimespan/4. */
BOOST_AUTO_TEST_CASE(get_next_work_lower_limit_actual)
{
    const auto chainParams = CreateChainParams(*m_node.args, CBaseChainParams::MAIN);
    const auto& consensus = chainParams->GetConsensus();
    CBlockIndex pindexLast;
    pindexLast.nHeight = consensus.DifficultyAdjustmentInterval() - 1;
    pindexLast.nTime = 1700000000;
    pindexLast.nBits = 0x1e0ffff0;

    const int64_t nFirstTooFast = pindexLast.nTime - (consensus.nPowTargetTimespan / 10);
    const int64_t nFirstAtClamp = pindexLast.nTime - (consensus.nPowTargetTimespan / 4);

    const unsigned int clamped_nbits = CalculateNextWorkRequired(&pindexLast, nFirstTooFast, consensus);
    const unsigned int expected_nbits = CalculateNextWorkRequired(&pindexLast, nFirstAtClamp, consensus);

    BOOST_CHECK_EQUAL(clamped_nbits, expected_nbits);
    BOOST_CHECK(PermittedDifficultyTransition(consensus, pindexLast.nHeight + 1, pindexLast.nBits, expected_nbits));

    arith_uint256 too_hard_target;
    too_hard_target.SetCompact(expected_nbits);
    too_hard_target >>= 1;
    if (too_hard_target == 0) too_hard_target = arith_uint256(1);
    const unsigned int invalid_nbits = too_hard_target.GetCompact();
    BOOST_CHECK(!PermittedDifficultyTransition(consensus, pindexLast.nHeight + 1, pindexLast.nBits, invalid_nbits));
}

/* Actual timespan upper bound is clamped to targetTimespan*4. */
BOOST_AUTO_TEST_CASE(get_next_work_upper_limit_actual)
{
    const auto chainParams = CreateChainParams(*m_node.args, CBaseChainParams::MAIN);
    const auto& consensus = chainParams->GetConsensus();
    CBlockIndex pindexLast;
    pindexLast.nHeight = consensus.DifficultyAdjustmentInterval() - 1;
    pindexLast.nTime = 1700000000;
    pindexLast.nBits = 0x1e0ffff0;

    const int64_t nFirstTooSlow = pindexLast.nTime - (consensus.nPowTargetTimespan * 10);
    const int64_t nFirstAtClamp = pindexLast.nTime - (consensus.nPowTargetTimespan * 4);

    const unsigned int clamped_nbits = CalculateNextWorkRequired(&pindexLast, nFirstTooSlow, consensus);
    const unsigned int expected_nbits = CalculateNextWorkRequired(&pindexLast, nFirstAtClamp, consensus);

    BOOST_CHECK_EQUAL(clamped_nbits, expected_nbits);
    BOOST_CHECK(PermittedDifficultyTransition(consensus, pindexLast.nHeight + 1, pindexLast.nBits, expected_nbits));

    arith_uint256 too_easy_target;
    too_easy_target.SetCompact(expected_nbits);
    too_easy_target <<= 1;
    const unsigned int invalid_nbits = too_easy_target.GetCompact();
    BOOST_CHECK(!PermittedDifficultyTransition(consensus, pindexLast.nHeight + 1, pindexLast.nBits, invalid_nbits));
}

BOOST_AUTO_TEST_CASE(CheckProofOfWork_test_negative_target)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();
    uint256 hash;
    unsigned int nBits;
    nBits = UintToArith256(consensus.powLimit).GetCompact(true);
    hash.SetHex("0x1");
    BOOST_CHECK(!CheckProofOfWork(hash, nBits, consensus));
}

BOOST_AUTO_TEST_CASE(CheckProofOfWork_test_overflow_target)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();
    uint256 hash;
    unsigned int nBits{~0x00800000U};
    hash.SetHex("0x1");
    BOOST_CHECK(!CheckProofOfWork(hash, nBits, consensus));
}

BOOST_AUTO_TEST_CASE(CheckProofOfWork_test_too_easy_target)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();
    uint256 hash;
    unsigned int nBits;
    arith_uint256 nBits_arith = UintToArith256(consensus.powLimit);
    nBits_arith *= 2;
    nBits = nBits_arith.GetCompact();
    hash.SetHex("0x1");
    BOOST_CHECK(!CheckProofOfWork(hash, nBits, consensus));
}

BOOST_AUTO_TEST_CASE(CheckProofOfWork_test_biger_hash_than_target)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();
    uint256 hash;
    unsigned int nBits;
    arith_uint256 hash_arith = UintToArith256(consensus.powLimit);
    nBits = hash_arith.GetCompact();
    hash_arith *= 2; // hash > nBits
    hash = ArithToUint256(hash_arith);
    BOOST_CHECK(!CheckProofOfWork(hash, nBits, consensus));
}

BOOST_AUTO_TEST_CASE(CheckProofOfWork_test_zero_target)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();
    uint256 hash;
    unsigned int nBits;
    arith_uint256 hash_arith{0};
    nBits = hash_arith.GetCompact();
    hash = ArithToUint256(hash_arith);
    BOOST_CHECK(!CheckProofOfWork(hash, nBits, consensus));
}

BOOST_AUTO_TEST_CASE(asert_mainnet_params)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();
    BOOST_CHECK_EQUAL(consensus.nASERTActivationHeight, 4920);
    BOOST_CHECK_EQUAL(consensus.nASERTStartBits, 0x1a44b82fU);
}

BOOST_AUTO_TEST_CASE(asert_transition_rules)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();
    const uint32_t old_nbits = 0x1e0ffff0U;
    const uint32_t asert_start = consensus.nASERTStartBits;

    // Before activation, a non-interval sudden change is invalid.
    BOOST_CHECK(!PermittedDifficultyTransition(consensus, 4919, old_nbits, asert_start));

    // At and after activation, ASERT transitions are permitted if within powLimit.
    BOOST_CHECK(PermittedDifficultyTransition(consensus, 4920, old_nbits, asert_start));

    arith_uint256 too_easy = UintToArith256(consensus.powLimit);
    too_easy *= 2;
    const uint32_t invalid_nbits = too_easy.GetCompact();
    BOOST_CHECK(!PermittedDifficultyTransition(consensus, 4920, old_nbits, invalid_nbits));
}

BOOST_AUTO_TEST_CASE(asert_per_block_boundary_behavior)
{
    const auto consensus = CreateChainParams(*m_node.args, CBaseChainParams::MAIN)->GetConsensus();

    CBlockHeader candidate{};
    candidate.nTime = 1700000000;

    CBlockIndex b4918;
    b4918.nHeight = 4918;
    b4918.nTime = 1700000000;
    b4918.nBits = 0x1e0ffff0;

    CBlockIndex b4919;
    b4919.pprev = &b4918;
    b4919.nHeight = 4919;
    b4919.nTime = b4918.nTime + consensus.nPowTargetSpacing;
    b4919.nBits = b4918.nBits;

    // Activation block uses configured bootstrap nBits.
    BOOST_CHECK_EQUAL(GetNextWorkRequired(&b4919, &candidate, consensus), consensus.nASERTStartBits);

    CBlockIndex b4920_on_time;
    b4920_on_time.pprev = &b4919;
    b4920_on_time.nHeight = 4920;
    b4920_on_time.nTime = b4919.nTime + consensus.nPowTargetSpacing;
    b4920_on_time.nBits = consensus.nASERTStartBits;

    // If schedule is exactly on-time, next block should keep the same ASERT target.
    const uint32_t next_on_time = GetNextWorkRequired(&b4920_on_time, &candidate, consensus);
    BOOST_CHECK_EQUAL(next_on_time, consensus.nASERTStartBits);

    CBlockIndex b4920_slow;
    b4920_slow.pprev = &b4919;
    b4920_slow.nHeight = 4920;
    b4920_slow.nTime = b4919.nTime + (consensus.nPowTargetSpacing * 2);
    b4920_slow.nBits = consensus.nASERTStartBits;

    const uint32_t next_slow = GetNextWorkRequired(&b4920_slow, &candidate, consensus);
    arith_uint256 start_target;
    start_target.SetCompact(consensus.nASERTStartBits);
    arith_uint256 slow_target;
    slow_target.SetCompact(next_slow);

    // Slower-than-target production must ease difficulty (larger target).
    BOOST_CHECK(slow_target >= start_target);
    BOOST_CHECK(PermittedDifficultyTransition(consensus, 4921, consensus.nASERTStartBits, next_slow));
}

BOOST_AUTO_TEST_CASE(GetBlockProofEquivalentTime_test)
{
    const auto chainParams = CreateChainParams(*m_node.args, CBaseChainParams::MAIN);
    std::vector<CBlockIndex> blocks(10000);
    for (int i = 0; i < 10000; i++) {
        blocks[i].pprev = i ? &blocks[i - 1] : nullptr;
        blocks[i].nHeight = i;
        blocks[i].nTime = 1269211443 + i * chainParams->GetConsensus().nPowTargetSpacing;
        blocks[i].nBits = 0x207fffff; /* target 0x7fffff000... */
        blocks[i].nChainWork = i ? blocks[i - 1].nChainWork + GetBlockProof(blocks[i - 1]) : arith_uint256(0);
    }

    for (int j = 0; j < 1000; j++) {
        CBlockIndex *p1 = &blocks[InsecureRandRange(10000)];
        CBlockIndex *p2 = &blocks[InsecureRandRange(10000)];
        CBlockIndex *p3 = &blocks[InsecureRandRange(10000)];

        int64_t tdiff = GetBlockProofEquivalentTime(*p1, *p2, *p3, chainParams->GetConsensus());
        BOOST_CHECK_EQUAL(tdiff, p1->GetBlockTime() - p2->GetBlockTime());
    }
}

void sanity_check_chainparams(const ArgsManager& args, std::string chainName)
{
    const auto chainParams = CreateChainParams(args, chainName);
    const auto consensus = chainParams->GetConsensus();

    // hash genesis is correct
    BOOST_CHECK_EQUAL(consensus.hashGenesisBlock, chainParams->GenesisBlock().GetHash());

    // target timespan is an even multiple of spacing
    BOOST_CHECK_EQUAL(consensus.nPowTargetTimespan % consensus.nPowTargetSpacing, 0);

    // genesis nBits is positive, doesn't overflow and is lower than powLimit
    arith_uint256 pow_compact;
    bool neg, over;
    pow_compact.SetCompact(chainParams->GenesisBlock().nBits, &neg, &over);
    BOOST_CHECK(!neg && pow_compact != 0);
    BOOST_CHECK(!over);
    BOOST_CHECK(UintToArith256(consensus.powLimit) >= pow_compact);

    // check max target * 4*nPowTargetTimespan doesn't overflow -- see pow.cpp:CalculateNextWorkRequired()
    if (!consensus.fPowNoRetargeting) {
        arith_uint256 targ_max("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
        targ_max /= consensus.nPowTargetTimespan*4;
        BOOST_CHECK(UintToArith256(consensus.powLimit) < targ_max);
    }
}

BOOST_AUTO_TEST_CASE(ChainParams_MAIN_sanity)
{
    sanity_check_chainparams(*m_node.args, CBaseChainParams::MAIN);
}

BOOST_AUTO_TEST_CASE(ChainParams_REGTEST_sanity)
{
    sanity_check_chainparams(*m_node.args, CBaseChainParams::REGTEST);
}

BOOST_AUTO_TEST_CASE(ChainParams_TESTNET_sanity)
{
    sanity_check_chainparams(*m_node.args, CBaseChainParams::TESTNET);
}

BOOST_AUTO_TEST_CASE(ChainParams_SIGNET_sanity)
{
    sanity_check_chainparams(*m_node.args, CBaseChainParams::SIGNET);
}

BOOST_AUTO_TEST_SUITE_END()
