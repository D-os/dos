/* Generated by ./src/xlat/gen.sh from ./src/xlat/sysmips_operations.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysmips_operations in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sysmips_operations_xdata[] = {
#if defined(SETNAME) || (defined(HAVE_DECL_SETNAME) && HAVE_DECL_SETNAME)
  XLAT(SETNAME),
 #define XLAT_VAL_0 ((unsigned) (SETNAME))
 #define XLAT_STR_0 STRINGIFY(SETNAME)
#endif
#if defined(FLUSH_CACHE) || (defined(HAVE_DECL_FLUSH_CACHE) && HAVE_DECL_FLUSH_CACHE)
  XLAT(FLUSH_CACHE),
 #define XLAT_VAL_1 ((unsigned) (FLUSH_CACHE))
 #define XLAT_STR_1 STRINGIFY(FLUSH_CACHE)
#endif
#if defined(MIPS_FIXADE) || (defined(HAVE_DECL_MIPS_FIXADE) && HAVE_DECL_MIPS_FIXADE)
  XLAT(MIPS_FIXADE),
 #define XLAT_VAL_2 ((unsigned) (MIPS_FIXADE))
 #define XLAT_STR_2 STRINGIFY(MIPS_FIXADE)
#endif
#if defined(MIPS_RDNVRAM) || (defined(HAVE_DECL_MIPS_RDNVRAM) && HAVE_DECL_MIPS_RDNVRAM)
  XLAT(MIPS_RDNVRAM),
 #define XLAT_VAL_3 ((unsigned) (MIPS_RDNVRAM))
 #define XLAT_STR_3 STRINGIFY(MIPS_RDNVRAM)
#endif
#if defined(MIPS_ATOMIC_SET) || (defined(HAVE_DECL_MIPS_ATOMIC_SET) && HAVE_DECL_MIPS_ATOMIC_SET)
  XLAT(MIPS_ATOMIC_SET),
 #define XLAT_VAL_4 ((unsigned) (MIPS_ATOMIC_SET))
 #define XLAT_STR_4 STRINGIFY(MIPS_ATOMIC_SET)
#endif
};
static
const struct xlat sysmips_operations[1] = { {
 .data = sysmips_operations_xdata,
 .size = ARRAY_SIZE(sysmips_operations_xdata),
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