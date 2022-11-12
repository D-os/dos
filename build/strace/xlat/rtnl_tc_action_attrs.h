/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_tc_action_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TCA_ACT_UNSPEC) || (defined(HAVE_DECL_TCA_ACT_UNSPEC) && HAVE_DECL_TCA_ACT_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_UNSPEC) == (0), "TCA_ACT_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_UNSPEC 0
#endif
#if defined(TCA_ACT_KIND) || (defined(HAVE_DECL_TCA_ACT_KIND) && HAVE_DECL_TCA_ACT_KIND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_KIND) == (1), "TCA_ACT_KIND != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_KIND 1
#endif
#if defined(TCA_ACT_OPTIONS) || (defined(HAVE_DECL_TCA_ACT_OPTIONS) && HAVE_DECL_TCA_ACT_OPTIONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_OPTIONS) == (2), "TCA_ACT_OPTIONS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_OPTIONS 2
#endif
#if defined(TCA_ACT_INDEX) || (defined(HAVE_DECL_TCA_ACT_INDEX) && HAVE_DECL_TCA_ACT_INDEX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_INDEX) == (3), "TCA_ACT_INDEX != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_INDEX 3
#endif
#if defined(TCA_ACT_STATS) || (defined(HAVE_DECL_TCA_ACT_STATS) && HAVE_DECL_TCA_ACT_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_STATS) == (4), "TCA_ACT_STATS != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_STATS 4
#endif
#if defined(TCA_ACT_PAD) || (defined(HAVE_DECL_TCA_ACT_PAD) && HAVE_DECL_TCA_ACT_PAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_PAD) == (5), "TCA_ACT_PAD != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_PAD 5
#endif
#if defined(TCA_ACT_COOKIE) || (defined(HAVE_DECL_TCA_ACT_COOKIE) && HAVE_DECL_TCA_ACT_COOKIE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_COOKIE) == (6), "TCA_ACT_COOKIE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_COOKIE 6
#endif
#if defined(TCA_ACT_FLAGS) || (defined(HAVE_DECL_TCA_ACT_FLAGS) && HAVE_DECL_TCA_ACT_FLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_FLAGS) == (7), "TCA_ACT_FLAGS != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_FLAGS 7
#endif
#if defined(TCA_ACT_HW_STATS) || (defined(HAVE_DECL_TCA_ACT_HW_STATS) && HAVE_DECL_TCA_ACT_HW_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_HW_STATS) == (8), "TCA_ACT_HW_STATS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_HW_STATS 8
#endif
#if defined(TCA_ACT_USED_HW_STATS) || (defined(HAVE_DECL_TCA_ACT_USED_HW_STATS) && HAVE_DECL_TCA_ACT_USED_HW_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_USED_HW_STATS) == (9), "TCA_ACT_USED_HW_STATS != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_USED_HW_STATS 9
#endif
#if defined(TCA_ACT_IN_HW_COUNT) || (defined(HAVE_DECL_TCA_ACT_IN_HW_COUNT) && HAVE_DECL_TCA_ACT_IN_HW_COUNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ACT_IN_HW_COUNT) == (10), "TCA_ACT_IN_HW_COUNT != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ACT_IN_HW_COUNT 10
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_tc_action_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_tc_action_attrs_xdata[] = {
 [TCA_ACT_UNSPEC] = XLAT(TCA_ACT_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (TCA_ACT_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(TCA_ACT_UNSPEC)
 [TCA_ACT_KIND] = XLAT(TCA_ACT_KIND),
 #define XLAT_VAL_1 ((unsigned) (TCA_ACT_KIND))
 #define XLAT_STR_1 STRINGIFY(TCA_ACT_KIND)
 [TCA_ACT_OPTIONS] = XLAT(TCA_ACT_OPTIONS),
 #define XLAT_VAL_2 ((unsigned) (TCA_ACT_OPTIONS))
 #define XLAT_STR_2 STRINGIFY(TCA_ACT_OPTIONS)
 [TCA_ACT_INDEX] = XLAT(TCA_ACT_INDEX),
 #define XLAT_VAL_3 ((unsigned) (TCA_ACT_INDEX))
 #define XLAT_STR_3 STRINGIFY(TCA_ACT_INDEX)
 [TCA_ACT_STATS] = XLAT(TCA_ACT_STATS),
 #define XLAT_VAL_4 ((unsigned) (TCA_ACT_STATS))
 #define XLAT_STR_4 STRINGIFY(TCA_ACT_STATS)
 [TCA_ACT_PAD] = XLAT(TCA_ACT_PAD),
 #define XLAT_VAL_5 ((unsigned) (TCA_ACT_PAD))
 #define XLAT_STR_5 STRINGIFY(TCA_ACT_PAD)
 [TCA_ACT_COOKIE] = XLAT(TCA_ACT_COOKIE),
 #define XLAT_VAL_6 ((unsigned) (TCA_ACT_COOKIE))
 #define XLAT_STR_6 STRINGIFY(TCA_ACT_COOKIE)
 [TCA_ACT_FLAGS] = XLAT(TCA_ACT_FLAGS),
 #define XLAT_VAL_7 ((unsigned) (TCA_ACT_FLAGS))
 #define XLAT_STR_7 STRINGIFY(TCA_ACT_FLAGS)
 [TCA_ACT_HW_STATS] = XLAT(TCA_ACT_HW_STATS),
 #define XLAT_VAL_8 ((unsigned) (TCA_ACT_HW_STATS))
 #define XLAT_STR_8 STRINGIFY(TCA_ACT_HW_STATS)
 [TCA_ACT_USED_HW_STATS] = XLAT(TCA_ACT_USED_HW_STATS),
 #define XLAT_VAL_9 ((unsigned) (TCA_ACT_USED_HW_STATS))
 #define XLAT_STR_9 STRINGIFY(TCA_ACT_USED_HW_STATS)
 [TCA_ACT_IN_HW_COUNT] = XLAT(TCA_ACT_IN_HW_COUNT),
 #define XLAT_VAL_10 ((unsigned) (TCA_ACT_IN_HW_COUNT))
 #define XLAT_STR_10 STRINGIFY(TCA_ACT_IN_HW_COUNT)
};
static
const struct xlat rtnl_tc_action_attrs[1] = { {
 .data = rtnl_tc_action_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_tc_action_attrs_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
