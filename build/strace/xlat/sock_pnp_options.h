/* Generated by ./src/xlat/gen.sh from ./src/xlat/sock_pnp_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PNPIPE_ENCAP) || (defined(HAVE_DECL_PNPIPE_ENCAP) && HAVE_DECL_PNPIPE_ENCAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PNPIPE_ENCAP) == (1), "PNPIPE_ENCAP != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PNPIPE_ENCAP 1
#endif
#if defined(PNPIPE_IFINDEX) || (defined(HAVE_DECL_PNPIPE_IFINDEX) && HAVE_DECL_PNPIPE_IFINDEX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PNPIPE_IFINDEX) == (2), "PNPIPE_IFINDEX != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PNPIPE_IFINDEX 2
#endif
#if defined(PNPIPE_HANDLE) || (defined(HAVE_DECL_PNPIPE_HANDLE) && HAVE_DECL_PNPIPE_HANDLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PNPIPE_HANDLE) == (3), "PNPIPE_HANDLE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PNPIPE_HANDLE 3
#endif
#if defined(PNPIPE_INITSTATE) || (defined(HAVE_DECL_PNPIPE_INITSTATE) && HAVE_DECL_PNPIPE_INITSTATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PNPIPE_INITSTATE) == (4), "PNPIPE_INITSTATE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PNPIPE_INITSTATE 4
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_pnp_options in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sock_pnp_options_xdata[] = {
 [PNPIPE_ENCAP] = XLAT(PNPIPE_ENCAP),
 #define XLAT_VAL_0 ((unsigned) (PNPIPE_ENCAP))
 #define XLAT_STR_0 STRINGIFY(PNPIPE_ENCAP)
 [PNPIPE_IFINDEX] = XLAT(PNPIPE_IFINDEX),
 #define XLAT_VAL_1 ((unsigned) (PNPIPE_IFINDEX))
 #define XLAT_STR_1 STRINGIFY(PNPIPE_IFINDEX)
 [PNPIPE_HANDLE] = XLAT(PNPIPE_HANDLE),
 #define XLAT_VAL_2 ((unsigned) (PNPIPE_HANDLE))
 #define XLAT_STR_2 STRINGIFY(PNPIPE_HANDLE)
 [PNPIPE_INITSTATE] = XLAT(PNPIPE_INITSTATE),
 #define XLAT_VAL_3 ((unsigned) (PNPIPE_INITSTATE))
 #define XLAT_STR_3 STRINGIFY(PNPIPE_INITSTATE)
};
static
const struct xlat sock_pnp_options[1] = { {
 .data = sock_pnp_options_xdata,
 .size = ARRAY_SIZE(sock_pnp_options_xdata),
 .type = XT_INDEXED,
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */