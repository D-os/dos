/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_input_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_input_types[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data v4l2_input_types_xdata[] = {
 [V4L2_INPUT_TYPE_TUNER] = XLAT(V4L2_INPUT_TYPE_TUNER),
 #define XLAT_VAL_0 ((unsigned) (V4L2_INPUT_TYPE_TUNER))
 #define XLAT_STR_0 STRINGIFY(V4L2_INPUT_TYPE_TUNER)
 [V4L2_INPUT_TYPE_CAMERA] = XLAT(V4L2_INPUT_TYPE_CAMERA),
 #define XLAT_VAL_1 ((unsigned) (V4L2_INPUT_TYPE_CAMERA))
 #define XLAT_STR_1 STRINGIFY(V4L2_INPUT_TYPE_CAMERA)
 [V4L2_INPUT_TYPE_TOUCH] = XLAT(V4L2_INPUT_TYPE_TOUCH),
 #define XLAT_VAL_2 ((unsigned) (V4L2_INPUT_TYPE_TOUCH))
 #define XLAT_STR_2 STRINGIFY(V4L2_INPUT_TYPE_TOUCH)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_input_types[1] = { {
 .data = v4l2_input_types_xdata,
 .size = ARRAY_SIZE(v4l2_input_types_xdata),
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
