/* Generated by ./src/xlat/gen.sh from ./src/xlat/tls_info_ciphers.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_CIPHER_AES_GCM_128) == (51), "TLS_CIPHER_AES_GCM_128 != 51");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (TLS_CIPHER_AES_GCM_128)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: TLS_CIPHER_AES_GCM_128"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (TLS_CIPHER_AES_GCM_128)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_CIPHER_AES_GCM_256) == (52), "TLS_CIPHER_AES_GCM_256 != 52");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (TLS_CIPHER_AES_GCM_256)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: TLS_CIPHER_AES_GCM_256"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (TLS_CIPHER_AES_GCM_256)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_CIPHER_AES_CCM_128) == (53), "TLS_CIPHER_AES_CCM_128 != 53");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (TLS_CIPHER_AES_CCM_128)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: TLS_CIPHER_AES_CCM_128"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (TLS_CIPHER_AES_CCM_128)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_CIPHER_CHACHA20_POLY1305) == (54), "TLS_CIPHER_CHACHA20_POLY1305 != 54");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (TLS_CIPHER_CHACHA20_POLY1305)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: TLS_CIPHER_CHACHA20_POLY1305"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (TLS_CIPHER_CHACHA20_POLY1305)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_CIPHER_SM4_GCM) == (55), "TLS_CIPHER_SM4_GCM != 55");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (TLS_CIPHER_SM4_GCM)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: TLS_CIPHER_SM4_GCM"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (TLS_CIPHER_SM4_GCM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_CIPHER_SM4_CCM) == (56), "TLS_CIPHER_SM4_CCM != 56");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (TLS_CIPHER_SM4_CCM)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: TLS_CIPHER_SM4_CCM"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (TLS_CIPHER_SM4_CCM)
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat tls_info_ciphers in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data tls_info_ciphers_xdata[] = {
 XLAT(TLS_CIPHER_AES_GCM_128),
 #define XLAT_VAL_0 ((unsigned) (TLS_CIPHER_AES_GCM_128))
 #define XLAT_STR_0 STRINGIFY(TLS_CIPHER_AES_GCM_128)
 XLAT(TLS_CIPHER_AES_GCM_256),
 #define XLAT_VAL_1 ((unsigned) (TLS_CIPHER_AES_GCM_256))
 #define XLAT_STR_1 STRINGIFY(TLS_CIPHER_AES_GCM_256)
 XLAT(TLS_CIPHER_AES_CCM_128),
 #define XLAT_VAL_2 ((unsigned) (TLS_CIPHER_AES_CCM_128))
 #define XLAT_STR_2 STRINGIFY(TLS_CIPHER_AES_CCM_128)
 XLAT(TLS_CIPHER_CHACHA20_POLY1305),
 #define XLAT_VAL_3 ((unsigned) (TLS_CIPHER_CHACHA20_POLY1305))
 #define XLAT_STR_3 STRINGIFY(TLS_CIPHER_CHACHA20_POLY1305)
 XLAT(TLS_CIPHER_SM4_GCM),
 #define XLAT_VAL_4 ((unsigned) (TLS_CIPHER_SM4_GCM))
 #define XLAT_STR_4 STRINGIFY(TLS_CIPHER_SM4_GCM)
 XLAT(TLS_CIPHER_SM4_CCM),
 #define XLAT_VAL_5 ((unsigned) (TLS_CIPHER_SM4_CCM))
 #define XLAT_STR_5 STRINGIFY(TLS_CIPHER_SM4_CCM)
};
static
const struct xlat tls_info_ciphers[1] = { {
 .data = tls_info_ciphers_xdata,
 .size = ARRAY_SIZE(tls_info_ciphers_xdata),
 .type = XT_SORTED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
