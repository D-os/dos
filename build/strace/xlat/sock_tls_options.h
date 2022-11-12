/* Generated by ./src/xlat/gen.sh from ./src/xlat/sock_tls_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TLS_TX) || (defined(HAVE_DECL_TLS_TX) && HAVE_DECL_TLS_TX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_TX) == (1), "TLS_TX != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TLS_TX 1
#endif
#if defined(TLS_RX) || (defined(HAVE_DECL_TLS_RX) && HAVE_DECL_TLS_RX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TLS_RX) == (2), "TLS_RX != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TLS_RX 2
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_tls_options in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sock_tls_options_xdata[] = {
 [TLS_TX] = XLAT(TLS_TX),
 #define XLAT_VAL_0 ((unsigned) (TLS_TX))
 #define XLAT_STR_0 STRINGIFY(TLS_TX)
 [TLS_RX] = XLAT(TLS_RX),
 #define XLAT_VAL_1 ((unsigned) (TLS_RX))
 #define XLAT_STR_1 STRINGIFY(TLS_RX)
};
static
const struct xlat sock_tls_options[1] = { {
 .data = sock_tls_options_xdata,
 .size = ARRAY_SIZE(sock_tls_options_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
