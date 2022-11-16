/* Generated by ./src/xlat/gen.sh from ./src/xlat/tee_ioctl_login_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat tee_ioctl_login_types in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data tee_ioctl_login_types_xdata[] = {
 [TEE_IOCTL_LOGIN_PUBLIC] = XLAT(TEE_IOCTL_LOGIN_PUBLIC),
 #define XLAT_VAL_0 ((unsigned) (TEE_IOCTL_LOGIN_PUBLIC))
 #define XLAT_STR_0 STRINGIFY(TEE_IOCTL_LOGIN_PUBLIC)
 [TEE_IOCTL_LOGIN_USER] = XLAT(TEE_IOCTL_LOGIN_USER),
 #define XLAT_VAL_1 ((unsigned) (TEE_IOCTL_LOGIN_USER))
 #define XLAT_STR_1 STRINGIFY(TEE_IOCTL_LOGIN_USER)
 [TEE_IOCTL_LOGIN_GROUP] = XLAT(TEE_IOCTL_LOGIN_GROUP),
 #define XLAT_VAL_2 ((unsigned) (TEE_IOCTL_LOGIN_GROUP))
 #define XLAT_STR_2 STRINGIFY(TEE_IOCTL_LOGIN_GROUP)
 [TEE_IOCTL_LOGIN_APPLICATION] = XLAT(TEE_IOCTL_LOGIN_APPLICATION),
 #define XLAT_VAL_3 ((unsigned) (TEE_IOCTL_LOGIN_APPLICATION))
 #define XLAT_STR_3 STRINGIFY(TEE_IOCTL_LOGIN_APPLICATION)
 [TEE_IOCTL_LOGIN_USER_APPLICATION] = XLAT(TEE_IOCTL_LOGIN_USER_APPLICATION),
 #define XLAT_VAL_4 ((unsigned) (TEE_IOCTL_LOGIN_USER_APPLICATION))
 #define XLAT_STR_4 STRINGIFY(TEE_IOCTL_LOGIN_USER_APPLICATION)
 [TEE_IOCTL_LOGIN_GROUP_APPLICATION] = XLAT(TEE_IOCTL_LOGIN_GROUP_APPLICATION),
 #define XLAT_VAL_5 ((unsigned) (TEE_IOCTL_LOGIN_GROUP_APPLICATION))
 #define XLAT_STR_5 STRINGIFY(TEE_IOCTL_LOGIN_GROUP_APPLICATION)
};
static
const struct xlat tee_ioctl_login_types[1] = { {
 .data = tee_ioctl_login_types_xdata,
 .size = ARRAY_SIZE(tee_ioctl_login_types_xdata),
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