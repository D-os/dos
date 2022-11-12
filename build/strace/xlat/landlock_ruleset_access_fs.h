/* Generated by ./src/xlat/gen.sh from ./src/xlat/landlock_ruleset_access_fs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat landlock_ruleset_access_fs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data landlock_ruleset_access_fs_xdata[] = {
 XLAT(LANDLOCK_ACCESS_FS_EXECUTE),
 #define XLAT_VAL_0 ((unsigned) (LANDLOCK_ACCESS_FS_EXECUTE))
 #define XLAT_STR_0 STRINGIFY(LANDLOCK_ACCESS_FS_EXECUTE)
 XLAT(LANDLOCK_ACCESS_FS_WRITE_FILE),
 #define XLAT_VAL_1 ((unsigned) (LANDLOCK_ACCESS_FS_WRITE_FILE))
 #define XLAT_STR_1 STRINGIFY(LANDLOCK_ACCESS_FS_WRITE_FILE)
 XLAT(LANDLOCK_ACCESS_FS_READ_FILE),
 #define XLAT_VAL_2 ((unsigned) (LANDLOCK_ACCESS_FS_READ_FILE))
 #define XLAT_STR_2 STRINGIFY(LANDLOCK_ACCESS_FS_READ_FILE)
 XLAT(LANDLOCK_ACCESS_FS_READ_DIR),
 #define XLAT_VAL_3 ((unsigned) (LANDLOCK_ACCESS_FS_READ_DIR))
 #define XLAT_STR_3 STRINGIFY(LANDLOCK_ACCESS_FS_READ_DIR)
 XLAT(LANDLOCK_ACCESS_FS_REMOVE_DIR),
 #define XLAT_VAL_4 ((unsigned) (LANDLOCK_ACCESS_FS_REMOVE_DIR))
 #define XLAT_STR_4 STRINGIFY(LANDLOCK_ACCESS_FS_REMOVE_DIR)
 XLAT(LANDLOCK_ACCESS_FS_REMOVE_FILE),
 #define XLAT_VAL_5 ((unsigned) (LANDLOCK_ACCESS_FS_REMOVE_FILE))
 #define XLAT_STR_5 STRINGIFY(LANDLOCK_ACCESS_FS_REMOVE_FILE)
 XLAT(LANDLOCK_ACCESS_FS_MAKE_CHAR),
 #define XLAT_VAL_6 ((unsigned) (LANDLOCK_ACCESS_FS_MAKE_CHAR))
 #define XLAT_STR_6 STRINGIFY(LANDLOCK_ACCESS_FS_MAKE_CHAR)
 XLAT(LANDLOCK_ACCESS_FS_MAKE_DIR),
 #define XLAT_VAL_7 ((unsigned) (LANDLOCK_ACCESS_FS_MAKE_DIR))
 #define XLAT_STR_7 STRINGIFY(LANDLOCK_ACCESS_FS_MAKE_DIR)
 XLAT(LANDLOCK_ACCESS_FS_MAKE_REG),
 #define XLAT_VAL_8 ((unsigned) (LANDLOCK_ACCESS_FS_MAKE_REG))
 #define XLAT_STR_8 STRINGIFY(LANDLOCK_ACCESS_FS_MAKE_REG)
 XLAT(LANDLOCK_ACCESS_FS_MAKE_SOCK),
 #define XLAT_VAL_9 ((unsigned) (LANDLOCK_ACCESS_FS_MAKE_SOCK))
 #define XLAT_STR_9 STRINGIFY(LANDLOCK_ACCESS_FS_MAKE_SOCK)
 XLAT(LANDLOCK_ACCESS_FS_MAKE_FIFO),
 #define XLAT_VAL_10 ((unsigned) (LANDLOCK_ACCESS_FS_MAKE_FIFO))
 #define XLAT_STR_10 STRINGIFY(LANDLOCK_ACCESS_FS_MAKE_FIFO)
 XLAT(LANDLOCK_ACCESS_FS_MAKE_BLOCK),
 #define XLAT_VAL_11 ((unsigned) (LANDLOCK_ACCESS_FS_MAKE_BLOCK))
 #define XLAT_STR_11 STRINGIFY(LANDLOCK_ACCESS_FS_MAKE_BLOCK)
 XLAT(LANDLOCK_ACCESS_FS_MAKE_SYM),
 #define XLAT_VAL_12 ((unsigned) (LANDLOCK_ACCESS_FS_MAKE_SYM))
 #define XLAT_STR_12 STRINGIFY(LANDLOCK_ACCESS_FS_MAKE_SYM)
 XLAT(LANDLOCK_ACCESS_FS_REFER),
 #define XLAT_VAL_13 ((unsigned) (LANDLOCK_ACCESS_FS_REFER))
 #define XLAT_STR_13 STRINGIFY(LANDLOCK_ACCESS_FS_REFER)
};
static
const struct xlat landlock_ruleset_access_fs[1] = { {
 .data = landlock_ruleset_access_fs_xdata,
 .size = ARRAY_SIZE(landlock_ruleset_access_fs_xdata),
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
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
