/* Generated by ./src/xlat/gen.sh from ./src/xlat/cap_version.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat cap_version in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data cap_version_xdata[] = {
 XLAT(_LINUX_CAPABILITY_VERSION_1),
 #define XLAT_VAL_0 ((unsigned) (_LINUX_CAPABILITY_VERSION_1))
 #define XLAT_STR_0 STRINGIFY(_LINUX_CAPABILITY_VERSION_1)
 XLAT(_LINUX_CAPABILITY_VERSION_2),
 #define XLAT_VAL_1 ((unsigned) (_LINUX_CAPABILITY_VERSION_2))
 #define XLAT_STR_1 STRINGIFY(_LINUX_CAPABILITY_VERSION_2)
 XLAT(_LINUX_CAPABILITY_VERSION_3),
 #define XLAT_VAL_2 ((unsigned) (_LINUX_CAPABILITY_VERSION_3))
 #define XLAT_STR_2 STRINGIFY(_LINUX_CAPABILITY_VERSION_3)
};
static
const struct xlat cap_version[1] = { {
 .data = cap_version_xdata,
 .size = ARRAY_SIZE(cap_version_xdata),
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
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
