/* Generated by ./src/xlat/gen.sh from ./src/xlat/btrfs_dev_replace_state.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_dev_replace_state[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data btrfs_dev_replace_state_xdata[] = {
 XLAT_TYPE(uint64_t, BTRFS_IOCTL_DEV_REPLACE_STATE_NEVER_STARTED),
 #define XLAT_VAL_0 ((uint64_t) (BTRFS_IOCTL_DEV_REPLACE_STATE_NEVER_STARTED))
 #define XLAT_STR_0 STRINGIFY(BTRFS_IOCTL_DEV_REPLACE_STATE_NEVER_STARTED)
 XLAT_TYPE(uint64_t, BTRFS_IOCTL_DEV_REPLACE_STATE_STARTED),
 #define XLAT_VAL_1 ((uint64_t) (BTRFS_IOCTL_DEV_REPLACE_STATE_STARTED))
 #define XLAT_STR_1 STRINGIFY(BTRFS_IOCTL_DEV_REPLACE_STATE_STARTED)
 XLAT_TYPE(uint64_t, BTRFS_IOCTL_DEV_REPLACE_STATE_FINISHED),
 #define XLAT_VAL_2 ((uint64_t) (BTRFS_IOCTL_DEV_REPLACE_STATE_FINISHED))
 #define XLAT_STR_2 STRINGIFY(BTRFS_IOCTL_DEV_REPLACE_STATE_FINISHED)
 XLAT_TYPE(uint64_t, BTRFS_IOCTL_DEV_REPLACE_STATE_CANCELED),
 #define XLAT_VAL_3 ((uint64_t) (BTRFS_IOCTL_DEV_REPLACE_STATE_CANCELED))
 #define XLAT_STR_3 STRINGIFY(BTRFS_IOCTL_DEV_REPLACE_STATE_CANCELED)
 XLAT_TYPE(uint64_t, BTRFS_IOCTL_DEV_REPLACE_STATE_SUSPENDED),
 #define XLAT_VAL_4 ((uint64_t) (BTRFS_IOCTL_DEV_REPLACE_STATE_SUSPENDED))
 #define XLAT_STR_4 STRINGIFY(BTRFS_IOCTL_DEV_REPLACE_STATE_SUSPENDED)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_dev_replace_state[1] = { {
 .data = btrfs_dev_replace_state_xdata,
 .size = ARRAY_SIZE(btrfs_dev_replace_state_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
