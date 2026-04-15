// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2020 The Bitcoin Core developers
// Copyright (c) 2025 The Xero Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef XERO_SCRIPT_XEROCONSENSUS_H
#define XERO_SCRIPT_XEROCONSENSUS_H

#include <stdint.h>

#if defined(BUILD_XERO_INTERNAL) && defined(HAVE_CONFIG_H)
#include <config/xero-config.h>
  #if defined(_WIN32)
    #if defined(HAVE_DLLEXPORT_ATTRIBUTE)
      #define EXPORT_SYMBOL __declspec(dllexport)
    #else
      #define EXPORT_SYMBOL
    #endif
  #elif defined(HAVE_DEFAULT_VISIBILITY_ATTRIBUTE)
    #define EXPORT_SYMBOL __attribute__ ((visibility ("default")))
  #endif
#elif defined(MSC_VER) && !defined(STATIC_LIBXEROCONSENSUS)
  #define EXPORT_SYMBOL __declspec(dllimport)
#endif

#ifndef EXPORT_SYMBOL
  #define EXPORT_SYMBOL
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define XEROCONSENSUS_API_VER 1

typedef enum xeroconsensus_error_t
{
    xeroconsensus_ERR_OK = 0,
    xeroconsensus_ERR_TX_INDEX,
    xeroconsensus_ERR_TX_SIZE_MISMATCH,
    xeroconsensus_ERR_TX_DESERIALIZE,
    xeroconsensus_ERR_AMOUNT_REQUIRED,
    xeroconsensus_ERR_INVALID_FLAGS,
} xeroconsensus_error;

/** Script verification flags */
enum
{
    xeroconsensus_SCRIPT_FLAGS_VERIFY_NONE                = 0,
    xeroconsensus_SCRIPT_FLAGS_VERIFY_P2SH                = (1U << 0), // evaluate P2SH (BIP16) subscripts
    xeroconsensus_SCRIPT_FLAGS_VERIFY_DERSIG              = (1U << 2), // enforce strict DER (BIP66) compliance
    xeroconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY           = (1U << 4), // enforce NULLDUMMY (BIP147)
    xeroconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY = (1U << 9), // enable CHECKLOCKTIMEVERIFY (BIP65)
    xeroconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY = (1U << 10), // enable CHECKSEQUENCEVERIFY (BIP112)
    xeroconsensus_SCRIPT_FLAGS_VERIFY_WITNESS             = (1U << 11), // enable WITNESS (BIP141)
    xeroconsensus_SCRIPT_FLAGS_VERIFY_ALL                 = xeroconsensus_SCRIPT_FLAGS_VERIFY_P2SH | xeroconsensus_SCRIPT_FLAGS_VERIFY_DERSIG |
                                                               xeroconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY | xeroconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY |
                                                               xeroconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY | xeroconsensus_SCRIPT_FLAGS_VERIFY_WITNESS
};

/// Returns 1 if the input nIn of the serialized transaction pointed to by
/// txTo correctly spends the scriptPubKey pointed to by scriptPubKey under
/// the additional constraints specified by flags.
/// If not nullptr, err will contain an error/success code for the operation
EXPORT_SYMBOL int xeroconsensus_verify_script(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen,
                                                 const unsigned char *txTo        , unsigned int txToLen,
                                                 unsigned int nIn, unsigned int flags, xeroconsensus_error* err);

EXPORT_SYMBOL int xeroconsensus_verify_script_with_amount(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen, int64_t amount,
                                    const unsigned char *txTo        , unsigned int txToLen,
                                    unsigned int nIn, unsigned int flags, xeroconsensus_error* err);

EXPORT_SYMBOL unsigned int xeroconsensus_version();

#ifdef __cplusplus
} // extern "C"
#endif

#undef EXPORT_SYMBOL

#endif // XERO_SCRIPT_XEROCONSENSUS_H
