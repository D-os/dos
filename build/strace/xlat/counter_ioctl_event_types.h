/* Generated by ./src/xlat/gen.sh from ./src/xlat/counter_ioctl_event_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_EVENT_OVERFLOW) == (0), "COUNTER_EVENT_OVERFLOW != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_EVENT_UNDERFLOW) == (1), "COUNTER_EVENT_UNDERFLOW != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_EVENT_OVERFLOW_UNDERFLOW) == (2), "COUNTER_EVENT_OVERFLOW_UNDERFLOW != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_EVENT_THRESHOLD) == (3), "COUNTER_EVENT_THRESHOLD != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_EVENT_INDEX) == (4), "COUNTER_EVENT_INDEX != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((COUNTER_EVENT_CHANGE_OF_STATE) == (5), "COUNTER_EVENT_CHANGE_OF_STATE != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat counter_ioctl_event_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data counter_ioctl_event_types_xdata[] = {
 [COUNTER_EVENT_OVERFLOW] = XLAT(COUNTER_EVENT_OVERFLOW),
 #define XLAT_VAL_0 ((unsigned) (COUNTER_EVENT_OVERFLOW))
 #define XLAT_STR_0 STRINGIFY(COUNTER_EVENT_OVERFLOW)
 [COUNTER_EVENT_UNDERFLOW] = XLAT(COUNTER_EVENT_UNDERFLOW),
 #define XLAT_VAL_1 ((unsigned) (COUNTER_EVENT_UNDERFLOW))
 #define XLAT_STR_1 STRINGIFY(COUNTER_EVENT_UNDERFLOW)
 [COUNTER_EVENT_OVERFLOW_UNDERFLOW] = XLAT(COUNTER_EVENT_OVERFLOW_UNDERFLOW),
 #define XLAT_VAL_2 ((unsigned) (COUNTER_EVENT_OVERFLOW_UNDERFLOW))
 #define XLAT_STR_2 STRINGIFY(COUNTER_EVENT_OVERFLOW_UNDERFLOW)
 [COUNTER_EVENT_THRESHOLD] = XLAT(COUNTER_EVENT_THRESHOLD),
 #define XLAT_VAL_3 ((unsigned) (COUNTER_EVENT_THRESHOLD))
 #define XLAT_STR_3 STRINGIFY(COUNTER_EVENT_THRESHOLD)
 [COUNTER_EVENT_INDEX] = XLAT(COUNTER_EVENT_INDEX),
 #define XLAT_VAL_4 ((unsigned) (COUNTER_EVENT_INDEX))
 #define XLAT_STR_4 STRINGIFY(COUNTER_EVENT_INDEX)
 [COUNTER_EVENT_CHANGE_OF_STATE] = XLAT(COUNTER_EVENT_CHANGE_OF_STATE),
 #define XLAT_VAL_5 ((unsigned) (COUNTER_EVENT_CHANGE_OF_STATE))
 #define XLAT_STR_5 STRINGIFY(COUNTER_EVENT_CHANGE_OF_STATE)
};
static
const struct xlat counter_ioctl_event_types[1] = { {
 .data = counter_ioctl_event_types_xdata,
 .size = ARRAY_SIZE(counter_ioctl_event_types_xdata),
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
