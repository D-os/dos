/* Generated by ./src/xlat/gen.sh from ./src/xlat/close_range_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat close_range_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data close_range_flags_xdata[] = {
 XLAT(CLOSE_RANGE_UNSHARE),
 #define XLAT_VAL_0 ((unsigned) (CLOSE_RANGE_UNSHARE))
 #define XLAT_STR_0 STRINGIFY(CLOSE_RANGE_UNSHARE)
 XLAT(CLOSE_RANGE_CLOEXEC),
 #define XLAT_VAL_1 ((unsigned) (CLOSE_RANGE_CLOEXEC))
 #define XLAT_STR_1 STRINGIFY(CLOSE_RANGE_CLOEXEC)
};
static
const struct xlat close_range_flags[1] = { {
 .data = close_range_flags_xdata,
 .size = ARRAY_SIZE(close_range_flags_xdata),
 .type = XT_NORMAL,
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
