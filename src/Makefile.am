# Copyright (c) 2013-2016 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

# Pattern rule to print variables, e.g. make print-top_srcdir
print-%: FORCE
	@echo '$*'='$($*)'

DIST_SUBDIRS = secp256k1

AM_LDFLAGS = $(LIBTOOL_LDFLAGS) $(HARDENED_LDFLAGS) $(GPROF_LDFLAGS) $(SANITIZER_LDFLAGS) $(LTO_LDFLAGS) $(CORE_LDFLAGS)
AM_CXXFLAGS = $(DEBUG_CXXFLAGS) $(HARDENED_CXXFLAGS) $(WARN_CXXFLAGS) $(NOWARN_CXXFLAGS) $(ERROR_CXXFLAGS) $(GPROF_CXXFLAGS) $(SANITIZER_CXXFLAGS) $(LTO_CXXFLAGS) $(CORE_CXXFLAGS)
AM_CPPFLAGS = $(DEBUG_CPPFLAGS) $(HARDENED_CPPFLAGS) $(CORE_CPPFLAGS)
AM_LIBTOOLFLAGS = --preserve-dup-deps
PTHREAD_FLAGS = $(PTHREAD_CFLAGS) $(PTHREAD_LIBS)
EXTRA_LIBRARIES =

lib_LTLIBRARIES =
noinst_LTLIBRARIES =

bin_PROGRAMS =
noinst_PROGRAMS =
check_PROGRAMS =
TESTS =
BENCHMARKS =

XERO_INCLUDES=-I$(builddir) -I$(srcdir)/$(MINISKETCH_INCLUDE_DIR_INT) -I$(srcdir)/secp256k1/include -I$(srcdir)/$(UNIVALUE_INCLUDE_DIR_INT) $(LEVELDB_CPPFLAGS)

LIBXERO_NODE=libxero_node.a
LIBXERO_COMMON=libxero_common.a
LIBXERO_CONSENSUS=libxero_consensus.a
LIBXERO_CLI=libxero_cli.a
LIBXERO_UTIL=libxero_util.a
LIBXERO_CRYPTO_BASE=crypto/libxero_crypto_base.la
LIBXEROQT=qt/libxeroqt.a
LIBSECP256K1=secp256k1/libsecp256k1.la

if ENABLE_ZMQ
LIBXERO_ZMQ=libxero_zmq.a
endif
if BUILD_XERO_LIBS
LIBXEROCONSENSUS=libxeroconsensus.la
endif
if BUILD_XERO_KERNEL_LIB
LIBXEROKERNEL=libxerokernel.la
endif
if ENABLE_WALLET
LIBXERO_WALLET=libxero_wallet.a
LIBXERO_WALLET_TOOL=libxero_wallet_tool.a
endif

LIBXERO_CRYPTO = $(LIBXERO_CRYPTO_BASE)
if ENABLE_SSE41
LIBXERO_CRYPTO_SSE41 = crypto/libxero_crypto_sse41.la
LIBXERO_CRYPTO += $(LIBXERO_CRYPTO_SSE41)
endif
if ENABLE_AVX2
LIBXERO_CRYPTO_AVX2 = crypto/libxero_crypto_avx2.la
LIBXERO_CRYPTO += $(LIBXERO_CRYPTO_AVX2)
endif
if ENABLE_X86_SHANI
LIBXERO_CRYPTO_X86_SHANI = crypto/libxero_crypto_x86_shani.la
LIBXERO_CRYPTO += $(LIBXERO_CRYPTO_X86_SHANI)
endif
if ENABLE_ARM_SHANI
LIBXERO_CRYPTO_ARM_SHANI = crypto/libxero_crypto_arm_shani.la
LIBXERO_CRYPTO += $(LIBXERO_CRYPTO_ARM_SHANI)
endif
noinst_LTLIBRARIES += $(LIBXERO_CRYPTO)

$(LIBSECP256K1): $(wildcard secp256k1/src/*.h) $(wildcard secp256k1/src/*.c) $(wildcard secp256k1/include/*)
	$(AM_V_at)$(MAKE) $(AM_MAKEFLAGS) -C $(@D) $(@F)

# Make is not made aware of per-object dependencies to avoid limiting building parallelization
# But to build the less dependent modules first, we manually select their order here:
EXTRA_LIBRARIES += \
  $(LIBXERO_UTIL) \
  $(LIBXERO_COMMON) \
  $(LIBXERO_CONSENSUS) \
  $(LIBXERO_NODE) \
  $(LIBXERO_CLI) \
  $(LIBXERO_IPC) \
  $(LIBXERO_WALLET) \
  $(LIBXERO_WALLET_TOOL) \
  $(LIBXERO_ZMQ)

if BUILD_XEROD
  bin_PROGRAMS += xerod
endif

if BUILD_XERO_NODE
  bin_PROGRAMS += xero-node
endif

if BUILD_XERO_CLI
  bin_PROGRAMS += xero-cli
endif

if BUILD_XERO_TX
  bin_PROGRAMS += xero-tx
endif

if ENABLE_WALLET
if BUILD_XERO_WALLET
  bin_PROGRAMS += xero-wallet
endif
endif

if BUILD_XERO_UTIL
  bin_PROGRAMS += xero-util
endif

if BUILD_XERO_CHAINSTATE
  bin_PROGRAMS += xero-chainstate
endif

.PHONY: FORCE check-symbols check-security
# xero core #
XERO_CORE_H = \
  addrdb.h \
  addrman.h \
  addrman_impl.h \
  attributes.h \
  banman.h \
  base58.h \
  bech32.h \
  blockencodings.h \
  blockfilter.h \
  chain.h \
  chainparams.h \
  chainparamsbase.h \
  chainparamsseeds.h \
  checkqueue.h \
  clientversion.h \
  coins.h \
  common/bloom.h \
  common/init.h \
  common/run_command.h \
  common/url.h \
  compat/assumptions.h \
  compat/byteswap.h \
  compat/compat.h \
  compat/cpuid.h \
  compat/endian.h \
  compressor.h \
  consensus/consensus.h \
  consensus/tx_check.h \
  consensus/tx_verify.h \
  core_io.h \
  core_memusage.h \
  cuckoocache.h \
  dbwrapper.h \
  deploymentinfo.h \
  deploymentstatus.h \
  external_signer.h \
  flatfile.h \
  headerssync.h \
  httprpc.h \
  httpserver.h \
  i2p.h \
  index/base.h \
  index/blockfilterindex.h \
  index/coinstatsindex.h \
  index/disktxpos.h \
  index/txindex.h \
  indirectmap.h \
  init.h \
  init/common.h \
  interfaces/chain.h \
  interfaces/echo.h \
  interfaces/handler.h \
  interfaces/init.h \
  interfaces/ipc.h \
  interfaces/node.h \
  interfaces/wallet.h \
  kernel/blockmanager_opts.h \
  kernel/chain.h \
  kernel/chainparams.h \
  kernel/chainstatemanager_opts.h \
  kernel/checks.h \
  kernel/coinstats.h \
  kernel/context.h \
  kernel/cs_main.h \
  kernel/mempool_entry.h \
  kernel/mempool_limits.h \
  kernel/mempool_options.h \
  kernel/mempool_persist.h \
  kernel/validation_cache_sizes.h \
  key.h \
  key_io.h \
  logging.h \
  logging/timer.h \
  mapport.h \
  memusage.h \
  merkleblock.h \
  net.h \
  net_permissions.h \
  net_processing.h \
  net_types.h \
  netaddress.h \
  netbase.h \
  netgroup.h \
  netmessagemaker.h \
  node/blockmanager_args.h \
  node/blockstorage.h \
  node/caches.h \
  node/chainstate.h \
  node/chainstatemanager_args.h \
  node/coin.h \
  node/coins_view_args.h \
  node/connection_types.h \
  node/context.h \
  node/database_args.h \
  node/eviction.h \
  node/interface_ui.h \
  node/mempool_args.h \
  node/mempool_persist_args.h \
  node/miner.h \
  node/minisketchwrapper.h \
  node/psbt.h \
  node/transaction.h \
  node/txreconciliation.h \
  node/utxo_snapshot.h \
  node/validation_cache_args.h \
  noui.h \
  outputtype.h \
  policy/feerate.h \
  policy/fees.h \
  policy/fees_args.h \
  policy/packages.h \
  policy/policy.h \
  policy/rbf.h \
  policy/settings.h \
  pow.h \
  protocol.h \
  psbt.h \
  random.h \
  randomenv.h \
  rest.h \
  reverse_iterator.h \
  rpc/blockchain.h \
  rpc/client.h \
  rpc/mempool.h \
  rpc/mining.h \
  rpc/protocol.h \
  rpc/rawtransaction_util.h \
  rpc/register.h \
  rpc/request.h \
  rpc/server.h \
  rpc/server_util.h \
  rpc/util.h \
  scheduler.h \
  script/descriptor.h \
  script/keyorigin.h \
  script/miniscript.h \
  script/sigcache.h \
  script/sign.h \
  script/signingprovider.h \
  script/standard.h \
  shutdown.h \
  signet.h \
  streams.h \
  support/allocators/secure.h \
  support/allocators/zeroafterfree.h \
  support/cleanse.h \
  support/events.h \
  support/lockedpool.h \
  sync.h \
  threadsafety.h \
  timedata.h \
  torcontrol.h \
  txdb.h \
  txmempool.h \
  txorphanage.h \
  txrequest.h \
  undo.h \
  util/asmap.h \
  util/bip32.h \
  util/bitdeque.h \
  util/bytevectorhash.h \
  util/check.h \
  util/epochguard.h \
  util/error.h \
  util/exception.h \
  util/fastrange.h \
  util/fees.h \
  util/fs.h \
  util/fs_helpers.h \
  util/getuniquepath.h \
  util/golombrice.h \
  util/hash_type.h \
  util/hasher.h \
  util/macros.h \
  util/message.h \
  util/moneystr.h \
  util/overflow.h \
  util/overloaded.h \
  util/rbf.h \
  util/readwritefile.h \
  util/result.h \
  util/serfloat.h \
  util/settings.h \
  util/sock.h \
  util/spanparsing.h \
  util/string.h \
  util/syscall_sandbox.h \
  util/syserror.h \
  util/system.h \
  util/thread.h \
  util/threadinterrupt.h \
  util/threadnames.h \
  util/time.h \
  util/tokenpipe.h \
  util/trace.h \
  util/translation.h \
  util/types.h \
  util/ui_change_type.h \
  util/vector.h \
  validation.h \
  validationinterface.h \
  versionbits.h \
  wallet/bdb.h \
  wallet/coincontrol.h \
  wallet/coinselection.h \
  wallet/context.h \
  wallet/crypter.h \
  wallet/db.h \
  wallet/dump.h \
  wallet/external_signer_scriptpubkeyman.h \
  wallet/feebumper.h \
  wallet/fees.h \
  wallet/load.h \
  wallet/receive.h \
  wallet/rpc/util.h \
  wallet/rpc/wallet.h \
  wallet/salvage.h \
  wallet/scriptpubkeyman.h \
  wallet/spend.h \
  wallet/sqlite.h \
  wallet/transaction.h \
  wallet/types.h \
  wallet/wallet.h \
  wallet/walletdb.h \
  wallet/wallettool.h \
  wallet/walletutil.h \
  walletinitinterface.h \
  warnings.h \
  zmq/zmqabstractnotifier.h \
  zmq/zmqnotificationinterface.h \
  zmq/zmqpublishnotifier.h \
  zmq/zmqrpc.h \
  zmq/zmqutil.h


obj/build.h: FORCE
	@$(MKDIR_P) $(builddir)/obj
	@$(top_srcdir)/share/genbuild.sh "$(abs_top_builddir)/src/obj/build.h" \
	  "$(abs_top_srcdir)"
libxero_util_a-clientversion.$(OBJEXT): obj/build.h

# node #
libxero_node_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES) $(BOOST_CPPFLAGS) $(MINIUPNPC_CPPFLAGS) $(NATPMP_CPPFLAGS) $(EVENT_CFLAGS) $(EVENT_PTHREADS_CFLAGS)
libxero_node_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_node_a_SOURCES = \
  addrdb.cpp \
  addrman.cpp \
  banman.cpp \
  blockencodings.cpp \
  blockfilter.cpp \
  chain.cpp \
  consensus/tx_verify.cpp \
  dbwrapper.cpp \
  deploymentstatus.cpp \
  flatfile.cpp \
  headerssync.cpp \
  httprpc.cpp \
  httpserver.cpp \
  i2p.cpp \
  index/base.cpp \
  index/blockfilterindex.cpp \
  index/coinstatsindex.cpp \
  index/txindex.cpp \
  init.cpp \
  kernel/chain.cpp \
  kernel/checks.cpp \
  kernel/coinstats.cpp \
  kernel/context.cpp \
  kernel/cs_main.cpp \
  kernel/mempool_persist.cpp \
  mapport.cpp \
  net.cpp \
  net_processing.cpp \
  netgroup.cpp \
  node/blockmanager_args.cpp \
  node/blockstorage.cpp \
  node/caches.cpp \
  node/chainstate.cpp \
  node/chainstatemanager_args.cpp \
  node/coin.cpp \
  node/coins_view_args.cpp \
  node/connection_types.cpp \
  node/context.cpp \
  node/database_args.cpp \
  node/eviction.cpp \
  node/interface_ui.cpp \
  node/interfaces.cpp \
  node/mempool_args.cpp \
  node/mempool_persist_args.cpp \
  node/miner.cpp \
  node/minisketchwrapper.cpp \
  node/psbt.cpp \
  node/transaction.cpp \
  node/txreconciliation.cpp \
  node/utxo_snapshot.cpp \
  node/validation_cache_args.cpp \
  noui.cpp \
  policy/fees.cpp \
  policy/fees_args.cpp \
  policy/packages.cpp \
  policy/rbf.cpp \
  policy/settings.cpp \
  pow.cpp \
  rest.cpp \
  rpc/blockchain.cpp \
  rpc/fees.cpp \
  rpc/mempool.cpp \
  rpc/mining.cpp \
  rpc/net.cpp \
  rpc/node.cpp \
  rpc/output_script.cpp \
  rpc/rawtransaction.cpp \
  rpc/server.cpp \
  rpc/server_util.cpp \
  rpc/signmessage.cpp \
  rpc/txoutproof.cpp \
  script/sigcache.cpp \
  shutdown.cpp \
  signet.cpp \
  timedata.cpp \
  torcontrol.cpp \
  txdb.cpp \
  txmempool.cpp \
  txorphanage.cpp \
  txrequest.cpp \
  validation.cpp \
  validationinterface.cpp \
  versionbits.cpp \
  $(XERO_CORE_H)

if ENABLE_WALLET
libxero_node_a_SOURCES += wallet/init.cpp
libxero_node_a_CPPFLAGS += $(BDB_CPPFLAGS)
endif
if !ENABLE_WALLET
libxero_node_a_SOURCES += dummywallet.cpp
endif
#

# zmq #
if ENABLE_ZMQ
libxero_zmq_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES) $(ZMQ_CFLAGS)
libxero_zmq_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_zmq_a_SOURCES = \
  zmq/zmqabstractnotifier.cpp \
  zmq/zmqnotificationinterface.cpp \
  zmq/zmqpublishnotifier.cpp \
  zmq/zmqrpc.cpp \
  zmq/zmqutil.cpp
endif
#

# wallet #
libxero_wallet_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES) $(BOOST_CPPFLAGS) $(BDB_CPPFLAGS) $(SQLITE_CFLAGS)
libxero_wallet_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_wallet_a_SOURCES = \
  wallet/coincontrol.cpp \
  wallet/context.cpp \
  wallet/crypter.cpp \
  wallet/db.cpp \
  wallet/dump.cpp \
  wallet/external_signer_scriptpubkeyman.cpp \
  wallet/feebumper.cpp \
  wallet/fees.cpp \
  wallet/interfaces.cpp \
  wallet/load.cpp \
  wallet/receive.cpp \
  wallet/rpc/addresses.cpp \
  wallet/rpc/backup.cpp \
  wallet/rpc/coins.cpp \
  wallet/rpc/encrypt.cpp \
  wallet/rpc/spend.cpp \
  wallet/rpc/signmessage.cpp \
  wallet/rpc/transactions.cpp \
  wallet/rpc/util.cpp \
  wallet/rpc/wallet.cpp \
  wallet/scriptpubkeyman.cpp \
  wallet/spend.cpp \
  wallet/transaction.cpp \
  wallet/wallet.cpp \
  wallet/walletdb.cpp \
  wallet/walletutil.cpp \
  wallet/coinselection.cpp \
  $(XERO_CORE_H)

if USE_SQLITE
libxero_wallet_a_SOURCES += wallet/sqlite.cpp
endif
if USE_BDB
libxero_wallet_a_SOURCES += wallet/bdb.cpp wallet/salvage.cpp
endif
#

# wallet tool #
libxero_wallet_tool_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES) $(BOOST_CPPFLAGS)
libxero_wallet_tool_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_wallet_tool_a_SOURCES = \
  wallet/wallettool.cpp \
  $(XERO_CORE_H)
#

# crypto #
crypto_libxero_crypto_base_la_CPPFLAGS = $(AM_CPPFLAGS)

# Specify -static in both CXXFLAGS and LDFLAGS so libtool will only build a
# static version of this library. We don't need a dynamic version, and a dynamic
# version can't be used on windows anyway because the library doesn't currently
# export DLL symbols.
crypto_libxero_crypto_base_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS) -static
crypto_libxero_crypto_base_la_LDFLAGS = $(AM_LDFLAGS) -static

crypto_libxero_crypto_base_la_SOURCES = \
  crypto/aes.cpp \
  crypto/aes.h \
  crypto/chacha_poly_aead.h \
  crypto/chacha_poly_aead.cpp \
  crypto/chacha20.h \
  crypto/chacha20.cpp \
  crypto/common.h \
  crypto/hkdf_sha256_32.cpp \
  crypto/hkdf_sha256_32.h \
  crypto/hmac_sha256.cpp \
  crypto/hmac_sha256.h \
  crypto/hmac_sha512.cpp \
  crypto/hmac_sha512.h \
  crypto/poly1305.h \
  crypto/poly1305.cpp \
  crypto/muhash.h \
  crypto/muhash.cpp \
  crypto/ripemd160.cpp \
  crypto/ripemd160.h \
  crypto/sha1.cpp \
  crypto/sha1.h \
  crypto/sha256.cpp \
  crypto/sha256.h \
  crypto/sha3.cpp \
  crypto/sha3.h \
  crypto/sha512.cpp \
  crypto/sha512.h \
  crypto/siphash.cpp \
  crypto/siphash.h

if USE_ASM
crypto_libxero_crypto_base_la_SOURCES += crypto/sha256_sse4.cpp
endif

# See explanation for -static in crypto_libxero_crypto_base_la's LDFLAGS and
# CXXFLAGS above
crypto_libxero_crypto_sse41_la_LDFLAGS = $(AM_LDFLAGS) -static
crypto_libxero_crypto_sse41_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS) -static
crypto_libxero_crypto_sse41_la_CPPFLAGS = $(AM_CPPFLAGS)
crypto_libxero_crypto_sse41_la_CXXFLAGS += $(SSE41_CXXFLAGS)
crypto_libxero_crypto_sse41_la_CPPFLAGS += -DENABLE_SSE41
crypto_libxero_crypto_sse41_la_SOURCES = crypto/sha256_sse41.cpp

# See explanation for -static in crypto_libxero_crypto_base_la's LDFLAGS and
# CXXFLAGS above
crypto_libxero_crypto_avx2_la_LDFLAGS = $(AM_LDFLAGS) -static
crypto_libxero_crypto_avx2_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS) -static
crypto_libxero_crypto_avx2_la_CPPFLAGS = $(AM_CPPFLAGS)
crypto_libxero_crypto_avx2_la_CXXFLAGS += $(AVX2_CXXFLAGS)
crypto_libxero_crypto_avx2_la_CPPFLAGS += -DENABLE_AVX2
crypto_libxero_crypto_avx2_la_SOURCES = crypto/sha256_avx2.cpp

# See explanation for -static in crypto_libxero_crypto_base_la's LDFLAGS and
# CXXFLAGS above
crypto_libxero_crypto_x86_shani_la_LDFLAGS = $(AM_LDFLAGS) -static
crypto_libxero_crypto_x86_shani_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS) -static
crypto_libxero_crypto_x86_shani_la_CPPFLAGS = $(AM_CPPFLAGS)
crypto_libxero_crypto_x86_shani_la_CXXFLAGS += $(X86_SHANI_CXXFLAGS)
crypto_libxero_crypto_x86_shani_la_CPPFLAGS += -DENABLE_X86_SHANI
crypto_libxero_crypto_x86_shani_la_SOURCES = crypto/sha256_x86_shani.cpp

# See explanation for -static in crypto_libxero_crypto_base_la's LDFLAGS and
# CXXFLAGS above
crypto_libxero_crypto_arm_shani_la_LDFLAGS = $(AM_LDFLAGS) -static
crypto_libxero_crypto_arm_shani_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS) -static
crypto_libxero_crypto_arm_shani_la_CPPFLAGS = $(AM_CPPFLAGS)
crypto_libxero_crypto_arm_shani_la_CXXFLAGS += $(ARM_SHANI_CXXFLAGS)
crypto_libxero_crypto_arm_shani_la_CPPFLAGS += -DENABLE_ARM_SHANI
crypto_libxero_crypto_arm_shani_la_SOURCES = crypto/sha256_arm_shani.cpp
#

# consensus #
libxero_consensus_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES)
libxero_consensus_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_consensus_a_SOURCES = \
  arith_uint256.cpp \
  arith_uint256.h \
  consensus/amount.h \
  consensus/merkle.cpp \
  consensus/merkle.h \
  consensus/params.h \
  consensus/tx_check.cpp \
  consensus/validation.h \
  hash.cpp \
  hash.h \
  prevector.h \
  primitives/block.cpp \
  primitives/block.h \
  primitives/transaction.cpp \
  primitives/transaction.h \
  pubkey.cpp \
  pubkey.h \
  script/xeroconsensus.cpp \
  script/interpreter.cpp \
  script/interpreter.h \
  script/script.cpp \
  script/script.h \
  script/script_error.cpp \
  script/script_error.h \
  serialize.h \
  span.h \
  tinyformat.h \
  uint256.cpp \
  uint256.h \
  util/strencodings.cpp \
  util/strencodings.h \
  version.h
#

# common #
libxero_common_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES) $(BOOST_CPPFLAGS)
libxero_common_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_common_a_SOURCES = \
  base58.cpp \
  bech32.cpp \
  chainparams.cpp \
  coins.cpp \
  common/bloom.cpp \
  common/init.cpp \
  common/interfaces.cpp \
  common/run_command.cpp \
  compressor.cpp \
  core_read.cpp \
  core_write.cpp \
  deploymentinfo.cpp \
  external_signer.cpp \
  init/common.cpp \
  kernel/chainparams.cpp \
  key.cpp \
  key_io.cpp \
  merkleblock.cpp \
  net_types.cpp \
  netaddress.cpp \
  netbase.cpp \
  net_permissions.cpp \
  outputtype.cpp \
  policy/feerate.cpp \
  policy/policy.cpp \
  protocol.cpp \
  psbt.cpp \
  rpc/external_signer.cpp \
  rpc/rawtransaction_util.cpp \
  rpc/request.cpp \
  rpc/util.cpp \
  scheduler.cpp \
  script/descriptor.cpp \
  script/miniscript.cpp \
  script/sign.cpp \
  script/signingprovider.cpp \
  script/standard.cpp \
  warnings.cpp \
  $(XERO_CORE_H)

if USE_LIBEVENT
libxero_common_a_CPPFLAGS += $(EVENT_CFLAGS)
libxero_common_a_SOURCES += common/url.cpp
endif
#

# util #
libxero_util_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES)
libxero_util_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_util_a_SOURCES = \
  support/lockedpool.cpp \
  chainparamsbase.cpp \
  clientversion.cpp \
  logging.cpp \
  random.cpp \
  randomenv.cpp \
  support/cleanse.cpp \
  sync.cpp \
  util/asmap.cpp \
  util/bip32.cpp \
  util/bytevectorhash.cpp \
  util/check.cpp \
  util/error.cpp \
  util/exception.cpp \
  util/fees.cpp \
  util/fs.cpp \
  util/fs_helpers.cpp \
  util/getuniquepath.cpp \
  util/hasher.cpp \
  util/sock.cpp \
  util/syserror.cpp \
  util/system.cpp \
  util/message.cpp \
  util/moneystr.cpp \
  util/rbf.cpp \
  util/readwritefile.cpp \
  util/settings.cpp \
  util/thread.cpp \
  util/threadinterrupt.cpp \
  util/threadnames.cpp \
  util/serfloat.cpp \
  util/spanparsing.cpp \
  util/strencodings.cpp \
  util/string.cpp \
  util/syscall_sandbox.cpp \
  util/time.cpp \
  util/tokenpipe.cpp \
  $(XERO_CORE_H)
#

# cli #
libxero_cli_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES)
libxero_cli_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libxero_cli_a_SOURCES = \
  compat/stdin.h \
  compat/stdin.cpp \
  rpc/client.cpp \
  $(XERO_CORE_H)

nodist_libxero_util_a_SOURCES = $(srcdir)/obj/build.h
#

# xerod & xero-node binaries #
xero_daemon_sources = xerod.cpp
xero_bin_cppflags = $(AM_CPPFLAGS) $(XERO_INCLUDES)
xero_bin_cxxflags = $(AM_CXXFLAGS) $(PIE_FLAGS)
xero_bin_ldflags = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS) $(PTHREAD_FLAGS)

if TARGET_WINDOWS
xero_daemon_sources += xerod-res.rc
endif

xero_bin_ldadd = \
  $(LIBXERO_WALLET) \
  $(LIBXERO_COMMON) \
  $(LIBXERO_UTIL) \
  $(LIBUNIVALUE) \
  $(LIBXERO_ZMQ) \
  $(LIBXERO_CONSENSUS) \
  $(LIBXERO_CRYPTO) \
  $(LIBLEVELDB) \
  $(LIBMEMENV) \
  $(LIBSECP256K1)

xero_bin_ldadd += $(BDB_LIBS) $(MINIUPNPC_LIBS) $(NATPMP_LIBS) $(EVENT_PTHREADS_LIBS) $(EVENT_LIBS) $(ZMQ_LIBS) $(SQLITE_LIBS)

xerod_SOURCES = $(xero_daemon_sources) init/xerod.cpp
xerod_CPPFLAGS = $(xero_bin_cppflags)
xerod_CXXFLAGS = $(xero_bin_cxxflags)
xerod_LDFLAGS = $(xero_bin_ldflags)
xerod_LDADD = $(LIBXERO_NODE) $(xero_bin_ldadd)

xero_node_SOURCES = $(xero_daemon_sources) init/xero-node.cpp
xero_node_CPPFLAGS = $(xero_bin_cppflags)
xero_node_CXXFLAGS = $(xero_bin_cxxflags)
xero_node_LDFLAGS = $(xero_bin_ldflags)
xero_node_LDADD = $(LIBXERO_NODE) $(xero_bin_ldadd) $(LIBXERO_IPC) $(LIBMULTIPROCESS_LIBS)

# xero-cli binary #
xero_cli_SOURCES = xero-cli.cpp
xero_cli_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES) $(EVENT_CFLAGS)
xero_cli_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
xero_cli_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS) $(PTHREAD_FLAGS)

if TARGET_WINDOWS
xero_cli_SOURCES += xero-cli-res.rc
endif

xero_cli_LDADD = \
  $(LIBXERO_CLI) \
  $(LIBUNIVALUE) \
  $(LIBXERO_COMMON) \
  $(LIBXERO_UTIL) \
  $(LIBXERO_CRYPTO)

xero_cli_LDADD += $(EVENT_LIBS)
#

# xero-tx binary #
xero_tx_SOURCES = xero-tx.cpp
xero_tx_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES)
xero_tx_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
xero_tx_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS) $(PTHREAD_FLAGS)

if TARGET_WINDOWS
xero_tx_SOURCES += xero-tx-res.rc
endif

xero_tx_LDADD = \
  $(LIBUNIVALUE) \
  $(LIBXERO_COMMON) \
  $(LIBXERO_UTIL) \
  $(LIBXERO_CONSENSUS) \
  $(LIBXERO_CRYPTO) \
  $(LIBSECP256K1)
#

# xero-wallet binary #
xero_wallet_SOURCES = xero-wallet.cpp
xero_wallet_SOURCES += init/xero-wallet.cpp
xero_wallet_CPPFLAGS = $(xero_bin_cppflags)
xero_wallet_CXXFLAGS = $(xero_bin_cxxflags)
xero_wallet_LDFLAGS = $(xero_bin_ldflags)
xero_wallet_LDADD = \
  $(LIBXERO_WALLET_TOOL) \
  $(LIBXERO_WALLET) \
  $(LIBXERO_COMMON) \
  $(LIBXERO_UTIL) \
  $(LIBUNIVALUE) \
  $(LIBXERO_CONSENSUS) \
  $(LIBXERO_CRYPTO) \
  $(LIBSECP256K1) \
  $(BDB_LIBS) \
  $(SQLITE_LIBS)

if TARGET_WINDOWS
xero_wallet_SOURCES += xero-wallet-res.rc
endif
#

# xero-util binary #
xero_util_SOURCES = xero-util.cpp
xero_util_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES)
xero_util_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
xero_util_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS) $(PTHREAD_FLAGS)

if TARGET_WINDOWS
xero_util_SOURCES += xero-util-res.rc
endif

xero_util_LDADD = \
  $(LIBXERO_COMMON) \
  $(LIBXERO_UTIL) \
  $(LIBUNIVALUE) \
  $(LIBXERO_CONSENSUS) \
  $(LIBXERO_CRYPTO) \
  $(LIBSECP256K1)
#

# xero-chainstate binary #
xero_chainstate_SOURCES = xero-chainstate.cpp
xero_chainstate_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES) $(BOOST_CPPFLAGS)
xero_chainstate_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)

xero_chainstate_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(PTHREAD_FLAGS) $(LIBTOOL_APP_LDFLAGS) -static
xero_chainstate_LDADD = $(LIBXEROKERNEL)

# libtool is unable to calculate this indirect dependency, presumably because it's a subproject.
# libsecp256k1 only needs to be linked in when libxerokernel is static.
xero_chainstate_LDADD += $(LIBSECP256K1)
#

# xerokernel library #
if BUILD_XERO_KERNEL_LIB
lib_LTLIBRARIES += $(LIBXEROKERNEL)

libxerokernel_la_LDFLAGS = $(AM_LDFLAGS) -no-undefined $(RELDFLAGS) $(PTHREAD_FLAGS)
libxerokernel_la_LIBADD = $(LIBXERO_CRYPTO) $(LIBUNIVALUE) $(LIBLEVELDB) $(LIBMEMENV) $(LIBSECP256K1)
libxerokernel_la_CPPFLAGS = $(AM_CPPFLAGS) -I$(builddir)/obj -I$(srcdir)/secp256k1/include -DBUILD_XERO_INTERNAL $(BOOST_CPPFLAGS) $(LEVELDB_CPPFLAGS) -I$(srcdir)/$(UNIVALUE_INCLUDE_DIR_INT)

# libxerokernel requires default symbol visibility, explicitly specify that
# here so that things still work even when user configures with
#   --enable-reduce-exports
#
# Note this is a quick hack that will be removed as we incrementally define what
# to export from the library.
libxerokernel_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS) -fvisibility=default

# TODO: libxerokernel is a work in progress consensus engine library, as more
#       and more modules are decoupled from the consensus engine, this list will
#       shrink to only those which are absolutely necessary.
libxerokernel_la_SOURCES = \
  kernel/xerokernel.cpp \
  arith_uint256.cpp \
  chain.cpp \
  chainparamsbase.cpp \
  chainparams.cpp \
  clientversion.cpp \
  coins.cpp \
  compressor.cpp \
  consensus/merkle.cpp \
  consensus/tx_check.cpp \
  consensus/tx_verify.cpp \
  core_read.cpp \
  dbwrapper.cpp \
  deploymentinfo.cpp \
  deploymentstatus.cpp \
  flatfile.cpp \
  hash.cpp \
  kernel/chain.cpp \
  kernel/checks.cpp \
  kernel/chainparams.cpp \
  kernel/coinstats.cpp \
  kernel/context.cpp \
  kernel/cs_main.cpp \
  kernel/mempool_persist.cpp \
  key.cpp \
  logging.cpp \
  node/blockstorage.cpp \
  node/chainstate.cpp \
  node/interface_ui.cpp \
  node/utxo_snapshot.cpp \
  policy/feerate.cpp \
  policy/fees.cpp \
  policy/packages.cpp \
  policy/policy.cpp \
  policy/rbf.cpp \
  policy/settings.cpp \
  pow.cpp \
  primitives/block.cpp \
  primitives/transaction.cpp \
  pubkey.cpp \
  random.cpp \
  randomenv.cpp \
  scheduler.cpp \
  script/interpreter.cpp \
  script/script.cpp \
  script/script_error.cpp \
  script/sigcache.cpp \
  script/standard.cpp \
  shutdown.cpp \
  signet.cpp \
  support/cleanse.cpp \
  support/lockedpool.cpp \
  sync.cpp \
  txdb.cpp \
  txmempool.cpp \
  uint256.cpp \
  util/check.cpp \
  util/exception.cpp \
  util/fs.cpp \
  util/fs_helpers.cpp \
  util/getuniquepath.cpp \
  util/hasher.cpp \
  util/moneystr.cpp \
  util/rbf.cpp \
  util/serfloat.cpp \
  util/settings.cpp \
  util/strencodings.cpp \
  util/string.cpp \
  util/syscall_sandbox.cpp \
  util/syserror.cpp \
  util/system.cpp \
  util/thread.cpp \
  util/threadnames.cpp \
  util/time.cpp \
  util/tokenpipe.cpp \
  validation.cpp \
  validationinterface.cpp \
  versionbits.cpp \
  warnings.cpp

# Required for obj/build.h to be generated first.
# More details: https://www.gnu.org/software/automake/manual/html_node/Built-Sources-Example.html
libxerokernel_la-clientversion.l$(OBJEXT): obj/build.h
endif # BUILD_XERO_KERNEL_LIB
#

# xeroconsensus library #
if BUILD_XERO_LIBS
lib_LTLIBRARIES += $(LIBXEROCONSENSUS)

include_HEADERS = script/xeroconsensus.h
libxeroconsensus_la_SOURCES = support/cleanse.cpp $(crypto_libxero_crypto_base_la_SOURCES) $(libxero_consensus_a_SOURCES)

libxeroconsensus_la_LDFLAGS = $(AM_LDFLAGS) -no-undefined $(RELDFLAGS)
libxeroconsensus_la_LIBADD = $(LIBSECP256K1)
libxeroconsensus_la_CPPFLAGS = $(AM_CPPFLAGS) -I$(builddir)/obj -I$(srcdir)/secp256k1/include -DBUILD_XERO_INTERNAL
libxeroconsensus_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)

endif
#

CTAES_DIST =  crypto/ctaes/bench.c
CTAES_DIST += crypto/ctaes/ctaes.c
CTAES_DIST += crypto/ctaes/ctaes.h
CTAES_DIST += crypto/ctaes/README.md
CTAES_DIST += crypto/ctaes/test.c

CLEANFILES = $(EXTRA_LIBRARIES)

CLEANFILES += *.gcda *.gcno
CLEANFILES += compat/*.gcda compat/*.gcno
CLEANFILES += consensus/*.gcda consensus/*.gcno
CLEANFILES += crc32c/src/*.gcda crc32c/src/*.gcno
CLEANFILES += crypto/*.gcda crypto/*.gcno
CLEANFILES += index/*.gcda index/*.gcno
CLEANFILES += interfaces/*.gcda interfaces/*.gcno
CLEANFILES += node/*.gcda node/*.gcno
CLEANFILES += policy/*.gcda policy/*.gcno
CLEANFILES += primitives/*.gcda primitives/*.gcno
CLEANFILES += rpc/*.gcda rpc/*.gcno
CLEANFILES += script/*.gcda script/*.gcno
CLEANFILES += support/*.gcda support/*.gcno
CLEANFILES += univalue/*.gcda univalue/*.gcno
CLEANFILES += util/*.gcda util/*.gcno
CLEANFILES += wallet/*.gcda wallet/*.gcno
CLEANFILES += wallet/test/*.gcda wallet/test/*.gcno
CLEANFILES += zmq/*.gcda zmq/*.gcno
CLEANFILES += obj/build.h

EXTRA_DIST = $(CTAES_DIST)


config/xero-config.h: config/stamp-h1
	@$(MAKE) -C $(top_builddir) $(subdir)/$(@)
config/stamp-h1: $(top_srcdir)/$(subdir)/config/xero-config.h.in $(top_builddir)/config.status
	$(AM_V_at)$(MAKE) -C $(top_builddir) $(subdir)/$(@)
$(top_srcdir)/$(subdir)/config/xero-config.h.in:  $(am__configure_deps)
	$(AM_V_at)$(MAKE) -C $(top_srcdir) $(subdir)/config/xero-config.h.in

clean-local:
	-$(MAKE) -C secp256k1 clean
	-rm -f leveldb/*/*.gcda leveldb/*/*.gcno leveldb/helpers/memenv/*.gcda leveldb/helpers/memenv/*.gcno
	-rm -f config.h
	-rm -rf test/__pycache__

.rc.o:
	@test -f $(WINDRES)
	## FIXME: How to get the appropriate modulename_CPPFLAGS in here?
	$(AM_V_GEN) $(WINDRES) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(CPPFLAGS) -DWINDRES_PREPROC -i $< -o $@

check-symbols: $(bin_PROGRAMS)
	@echo "Running symbol and dynamic library checks..."
	$(AM_V_at) $(PYTHON) $(top_srcdir)/contrib/devtools/symbol-check.py $(bin_PROGRAMS)

check-security: $(bin_PROGRAMS)
if HARDEN
	@echo "Checking binary security..."
	$(AM_V_at) $(PYTHON) $(top_srcdir)/contrib/devtools/security-check.py $(bin_PROGRAMS)
endif

libxero_ipc_mpgen_input = \
  ipc/capnp/echo.capnp \
  ipc/capnp/init.capnp
EXTRA_DIST += $(libxero_ipc_mpgen_input)
%.capnp:

# Explicitly list dependencies on generated headers as described in
# https://www.gnu.org/software/automake/manual/html_node/Built-Sources-Example.html#Recording-Dependencies-manually
ipc/capnp/libxero_ipc_a-protocol.$(OBJEXT): $(libxero_ipc_mpgen_input:=.h)

if BUILD_MULTIPROCESS
LIBXERO_IPC=libxero_ipc.a
libxero_ipc_a_SOURCES = \
  ipc/capnp/context.h \
  ipc/capnp/init-types.h \
  ipc/capnp/protocol.cpp \
  ipc/capnp/protocol.h \
  ipc/context.h \
  ipc/exception.h \
  ipc/interfaces.cpp \
  ipc/process.cpp \
  ipc/process.h \
  ipc/protocol.h
libxero_ipc_a_CPPFLAGS = $(AM_CPPFLAGS) $(XERO_INCLUDES)
libxero_ipc_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS) $(LIBMULTIPROCESS_CFLAGS)

include $(MPGEN_PREFIX)/include/mpgen.mk
libxero_ipc_mpgen_output = \
  $(libxero_ipc_mpgen_input:=.c++) \
  $(libxero_ipc_mpgen_input:=.h) \
  $(libxero_ipc_mpgen_input:=.proxy-client.c++) \
  $(libxero_ipc_mpgen_input:=.proxy-server.c++) \
  $(libxero_ipc_mpgen_input:=.proxy-types.c++) \
  $(libxero_ipc_mpgen_input:=.proxy-types.h) \
  $(libxero_ipc_mpgen_input:=.proxy.h)
nodist_libxero_ipc_a_SOURCES = $(libxero_ipc_mpgen_output)
CLEANFILES += $(libxero_ipc_mpgen_output)
endif

%.raw.h: %.raw
	@$(MKDIR_P) $(@D)
	@{ \
	 echo "static unsigned const char $(*F)_raw[] = {" && \
	 $(HEXDUMP) -v -e '8/1 "0x%02x, "' -e '"\n"' $< | $(SED) -e 's/0x  ,//g' && \
	 echo "};"; \
	} > "$@.new" && mv -f "$@.new" "$@"
	@echo "Generated $@"

include Makefile.minisketch.include

include Makefile.crc32c.include
include Makefile.leveldb.include

include Makefile.test_util.include
include Makefile.test_fuzz.include

include Makefile.test.include

if ENABLE_BENCH
include Makefile.bench.include
endif

if ENABLE_QT
include Makefile.qt.include
endif

if ENABLE_QT_TESTS
include Makefile.qttest.include
endif

include Makefile.univalue.include
