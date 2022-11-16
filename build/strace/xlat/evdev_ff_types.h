/* Generated by ./src/xlat/gen.sh from ./src/xlat/evdev_ff_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_RUMBLE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_RUMBLE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_RUMBLE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_PERIODIC)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_PERIODIC"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_PERIODIC)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_CONSTANT)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_CONSTANT"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_CONSTANT)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_SPRING)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_SPRING"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_SPRING)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_FRICTION)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_FRICTION"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_FRICTION)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_DAMPER)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_DAMPER"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_DAMPER)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_INERTIA)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_INERTIA"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_INERTIA)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_RAMP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_RAMP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_RAMP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_SQUARE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_SQUARE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_SQUARE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_TRIANGLE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_TRIANGLE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_TRIANGLE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_SINE)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_SINE"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_SINE)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_SAW_UP)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_SAW_UP"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_SAW_UP)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_SAW_DOWN)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_SAW_DOWN"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_SAW_DOWN)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_CUSTOM)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_CUSTOM"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_CUSTOM)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_GAIN)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_GAIN"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_GAIN)
#if defined XLAT_PREV_VAL
static_assert((unsigned long long) (FF_AUTOCENTER)
      > (unsigned long long) (XLAT_PREV_VAL),
      "Incorrect order in #sorted xlat: FF_AUTOCENTER"
      " is not larger than the previous value");
#endif
#undef XLAT_PREV_VAL
#define XLAT_PREV_VAL (FF_AUTOCENTER)
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_ff_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data evdev_ff_types_xdata[] = {
 XLAT(FF_RUMBLE),
 #define XLAT_VAL_0 ((unsigned) (FF_RUMBLE))
 #define XLAT_STR_0 STRINGIFY(FF_RUMBLE)
 XLAT(FF_PERIODIC),
 #define XLAT_VAL_1 ((unsigned) (FF_PERIODIC))
 #define XLAT_STR_1 STRINGIFY(FF_PERIODIC)
 XLAT(FF_CONSTANT),
 #define XLAT_VAL_2 ((unsigned) (FF_CONSTANT))
 #define XLAT_STR_2 STRINGIFY(FF_CONSTANT)
 XLAT(FF_SPRING),
 #define XLAT_VAL_3 ((unsigned) (FF_SPRING))
 #define XLAT_STR_3 STRINGIFY(FF_SPRING)
 XLAT(FF_FRICTION),
 #define XLAT_VAL_4 ((unsigned) (FF_FRICTION))
 #define XLAT_STR_4 STRINGIFY(FF_FRICTION)
 XLAT(FF_DAMPER),
 #define XLAT_VAL_5 ((unsigned) (FF_DAMPER))
 #define XLAT_STR_5 STRINGIFY(FF_DAMPER)
 XLAT(FF_INERTIA),
 #define XLAT_VAL_6 ((unsigned) (FF_INERTIA))
 #define XLAT_STR_6 STRINGIFY(FF_INERTIA)
 XLAT(FF_RAMP),
 #define XLAT_VAL_7 ((unsigned) (FF_RAMP))
 #define XLAT_STR_7 STRINGIFY(FF_RAMP)
 XLAT(FF_SQUARE),
 #define XLAT_VAL_8 ((unsigned) (FF_SQUARE))
 #define XLAT_STR_8 STRINGIFY(FF_SQUARE)
 XLAT(FF_TRIANGLE),
 #define XLAT_VAL_9 ((unsigned) (FF_TRIANGLE))
 #define XLAT_STR_9 STRINGIFY(FF_TRIANGLE)
 XLAT(FF_SINE),
 #define XLAT_VAL_10 ((unsigned) (FF_SINE))
 #define XLAT_STR_10 STRINGIFY(FF_SINE)
 XLAT(FF_SAW_UP),
 #define XLAT_VAL_11 ((unsigned) (FF_SAW_UP))
 #define XLAT_STR_11 STRINGIFY(FF_SAW_UP)
 XLAT(FF_SAW_DOWN),
 #define XLAT_VAL_12 ((unsigned) (FF_SAW_DOWN))
 #define XLAT_STR_12 STRINGIFY(FF_SAW_DOWN)
 XLAT(FF_CUSTOM),
 #define XLAT_VAL_13 ((unsigned) (FF_CUSTOM))
 #define XLAT_STR_13 STRINGIFY(FF_CUSTOM)
 XLAT(FF_GAIN),
 #define XLAT_VAL_14 ((unsigned) (FF_GAIN))
 #define XLAT_STR_14 STRINGIFY(FF_GAIN)
 XLAT(FF_AUTOCENTER),
 #define XLAT_VAL_15 ((unsigned) (FF_AUTOCENTER))
 #define XLAT_STR_15 STRINGIFY(FF_AUTOCENTER)
};
static
const struct xlat evdev_ff_types[1] = { {
 .data = evdev_ff_types_xdata,
 .size = ARRAY_SIZE(evdev_ff_types_xdata),
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
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
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
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
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
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */