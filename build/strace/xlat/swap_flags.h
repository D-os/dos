/* Generated by ./src/xlat/gen.sh from ./src/xlat/swap_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SWAP_FLAG_PREFER) || (defined(HAVE_DECL_SWAP_FLAG_PREFER) && HAVE_DECL_SWAP_FLAG_PREFER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SWAP_FLAG_PREFER) == (0x8000), "SWAP_FLAG_PREFER != 0x8000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SWAP_FLAG_PREFER 0x8000
#endif
#if defined(SWAP_FLAG_DISCARD) || (defined(HAVE_DECL_SWAP_FLAG_DISCARD) && HAVE_DECL_SWAP_FLAG_DISCARD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SWAP_FLAG_DISCARD) == (0x10000), "SWAP_FLAG_DISCARD != 0x10000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SWAP_FLAG_DISCARD 0x10000
#endif
#if defined(SWAP_FLAG_DISCARD_ONCE) || (defined(HAVE_DECL_SWAP_FLAG_DISCARD_ONCE) && HAVE_DECL_SWAP_FLAG_DISCARD_ONCE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SWAP_FLAG_DISCARD_ONCE) == (0x20000), "SWAP_FLAG_DISCARD_ONCE != 0x20000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SWAP_FLAG_DISCARD_ONCE 0x20000
#endif
#if defined(SWAP_FLAG_DISCARD_PAGES) || (defined(HAVE_DECL_SWAP_FLAG_DISCARD_PAGES) && HAVE_DECL_SWAP_FLAG_DISCARD_PAGES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SWAP_FLAG_DISCARD_PAGES) == (0x40000), "SWAP_FLAG_DISCARD_PAGES != 0x40000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SWAP_FLAG_DISCARD_PAGES 0x40000
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat swap_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data swap_flags_xdata[] = {
 XLAT(SWAP_FLAG_PREFER),
 #define XLAT_VAL_0 ((unsigned) (SWAP_FLAG_PREFER))
 #define XLAT_STR_0 STRINGIFY(SWAP_FLAG_PREFER)
 XLAT(SWAP_FLAG_DISCARD),
 #define XLAT_VAL_1 ((unsigned) (SWAP_FLAG_DISCARD))
 #define XLAT_STR_1 STRINGIFY(SWAP_FLAG_DISCARD)
 XLAT(SWAP_FLAG_DISCARD_ONCE),
 #define XLAT_VAL_2 ((unsigned) (SWAP_FLAG_DISCARD_ONCE))
 #define XLAT_STR_2 STRINGIFY(SWAP_FLAG_DISCARD_ONCE)
 XLAT(SWAP_FLAG_DISCARD_PAGES),
 #define XLAT_VAL_3 ((unsigned) (SWAP_FLAG_DISCARD_PAGES))
 #define XLAT_STR_3 STRINGIFY(SWAP_FLAG_DISCARD_PAGES)
};
static
const struct xlat swap_flags[1] = { {
 .data = swap_flags_xdata,
 .size = ARRAY_SIZE(swap_flags_xdata),
 .type = XT_NORMAL,
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
