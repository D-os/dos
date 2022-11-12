/* Generated by ./src/xlat/gen.sh from ./src/xlat/fan_mark_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FAN_MARK_ADD) || (defined(HAVE_DECL_FAN_MARK_ADD) && HAVE_DECL_FAN_MARK_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_ADD) == (0x00000001), "FAN_MARK_ADD != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_ADD 0x00000001
#endif
#if defined(FAN_MARK_REMOVE) || (defined(HAVE_DECL_FAN_MARK_REMOVE) && HAVE_DECL_FAN_MARK_REMOVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_REMOVE) == (0x00000002), "FAN_MARK_REMOVE != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_REMOVE 0x00000002
#endif
#if defined(FAN_MARK_DONT_FOLLOW) || (defined(HAVE_DECL_FAN_MARK_DONT_FOLLOW) && HAVE_DECL_FAN_MARK_DONT_FOLLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_DONT_FOLLOW) == (0x00000004), "FAN_MARK_DONT_FOLLOW != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_DONT_FOLLOW 0x00000004
#endif
#if defined(FAN_MARK_ONLYDIR) || (defined(HAVE_DECL_FAN_MARK_ONLYDIR) && HAVE_DECL_FAN_MARK_ONLYDIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_ONLYDIR) == (0x00000008), "FAN_MARK_ONLYDIR != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_ONLYDIR 0x00000008
#endif
#if defined(FAN_MARK_MOUNT) || (defined(HAVE_DECL_FAN_MARK_MOUNT) && HAVE_DECL_FAN_MARK_MOUNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_MOUNT) == (0x00000010), "FAN_MARK_MOUNT != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_MOUNT 0x00000010
#endif
#if defined(FAN_MARK_IGNORED_MASK) || (defined(HAVE_DECL_FAN_MARK_IGNORED_MASK) && HAVE_DECL_FAN_MARK_IGNORED_MASK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_IGNORED_MASK) == (0x00000020), "FAN_MARK_IGNORED_MASK != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_IGNORED_MASK 0x00000020
#endif
#if defined(FAN_MARK_IGNORED_SURV_MODIFY) || (defined(HAVE_DECL_FAN_MARK_IGNORED_SURV_MODIFY) && HAVE_DECL_FAN_MARK_IGNORED_SURV_MODIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_IGNORED_SURV_MODIFY) == (0x00000040), "FAN_MARK_IGNORED_SURV_MODIFY != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_IGNORED_SURV_MODIFY 0x00000040
#endif
#if defined(FAN_MARK_FLUSH) || (defined(HAVE_DECL_FAN_MARK_FLUSH) && HAVE_DECL_FAN_MARK_FLUSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_FLUSH) == (0x00000080), "FAN_MARK_FLUSH != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_FLUSH 0x00000080
#endif
#if defined(FAN_MARK_FILESYSTEM) || (defined(HAVE_DECL_FAN_MARK_FILESYSTEM) && HAVE_DECL_FAN_MARK_FILESYSTEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_FILESYSTEM) == (0x00000100), "FAN_MARK_FILESYSTEM != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_FILESYSTEM 0x00000100
#endif
#if defined(FAN_MARK_EVICTABLE) || (defined(HAVE_DECL_FAN_MARK_EVICTABLE) && HAVE_DECL_FAN_MARK_EVICTABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_EVICTABLE) == (0x00000200), "FAN_MARK_EVICTABLE != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_EVICTABLE 0x00000200
#endif
#if defined(FAN_MARK_IGNORE) || (defined(HAVE_DECL_FAN_MARK_IGNORE) && HAVE_DECL_FAN_MARK_IGNORE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_IGNORE) == (0x00000400), "FAN_MARK_IGNORE != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_IGNORE 0x00000400
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fan_mark_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data fan_mark_flags_xdata[] = {
 XLAT(FAN_MARK_ADD),
 #define XLAT_VAL_0 ((unsigned) (FAN_MARK_ADD))
 #define XLAT_STR_0 STRINGIFY(FAN_MARK_ADD)
 XLAT(FAN_MARK_REMOVE),
 #define XLAT_VAL_1 ((unsigned) (FAN_MARK_REMOVE))
 #define XLAT_STR_1 STRINGIFY(FAN_MARK_REMOVE)
 XLAT(FAN_MARK_DONT_FOLLOW),
 #define XLAT_VAL_2 ((unsigned) (FAN_MARK_DONT_FOLLOW))
 #define XLAT_STR_2 STRINGIFY(FAN_MARK_DONT_FOLLOW)
 XLAT(FAN_MARK_ONLYDIR),
 #define XLAT_VAL_3 ((unsigned) (FAN_MARK_ONLYDIR))
 #define XLAT_STR_3 STRINGIFY(FAN_MARK_ONLYDIR)
 XLAT(FAN_MARK_MOUNT),
 #define XLAT_VAL_4 ((unsigned) (FAN_MARK_MOUNT))
 #define XLAT_STR_4 STRINGIFY(FAN_MARK_MOUNT)
 XLAT(FAN_MARK_IGNORED_MASK),
 #define XLAT_VAL_5 ((unsigned) (FAN_MARK_IGNORED_MASK))
 #define XLAT_STR_5 STRINGIFY(FAN_MARK_IGNORED_MASK)
 XLAT(FAN_MARK_IGNORED_SURV_MODIFY),
 #define XLAT_VAL_6 ((unsigned) (FAN_MARK_IGNORED_SURV_MODIFY))
 #define XLAT_STR_6 STRINGIFY(FAN_MARK_IGNORED_SURV_MODIFY)
 XLAT(FAN_MARK_FLUSH),
 #define XLAT_VAL_7 ((unsigned) (FAN_MARK_FLUSH))
 #define XLAT_STR_7 STRINGIFY(FAN_MARK_FLUSH)
 XLAT(FAN_MARK_FILESYSTEM),
 #define XLAT_VAL_8 ((unsigned) (FAN_MARK_FILESYSTEM))
 #define XLAT_STR_8 STRINGIFY(FAN_MARK_FILESYSTEM)
 XLAT(FAN_MARK_EVICTABLE),
 #define XLAT_VAL_9 ((unsigned) (FAN_MARK_EVICTABLE))
 #define XLAT_STR_9 STRINGIFY(FAN_MARK_EVICTABLE)
 XLAT(FAN_MARK_IGNORE),
 #define XLAT_VAL_10 ((unsigned) (FAN_MARK_IGNORE))
 #define XLAT_STR_10 STRINGIFY(FAN_MARK_IGNORE)
};
static
const struct xlat fan_mark_flags[1] = { {
 .data = fan_mark_flags_xdata,
 .size = ARRAY_SIZE(fan_mark_flags_xdata),
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
