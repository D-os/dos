/* Generated by ./src/xlat/gen.sh from ./src/xlat/sigill_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(ILL_ILLOPC) || (defined(HAVE_DECL_ILL_ILLOPC) && HAVE_DECL_ILL_ILLOPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_ILLOPC) == (1), "ILL_ILLOPC != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_ILLOPC 1
#endif
#if defined(ILL_ILLOPN) || (defined(HAVE_DECL_ILL_ILLOPN) && HAVE_DECL_ILL_ILLOPN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_ILLOPN) == (2), "ILL_ILLOPN != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_ILLOPN 2
#endif
#if defined(ILL_ILLADR) || (defined(HAVE_DECL_ILL_ILLADR) && HAVE_DECL_ILL_ILLADR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_ILLADR) == (3), "ILL_ILLADR != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_ILLADR 3
#endif
#if defined(ILL_ILLTRP) || (defined(HAVE_DECL_ILL_ILLTRP) && HAVE_DECL_ILL_ILLTRP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_ILLTRP) == (4), "ILL_ILLTRP != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_ILLTRP 4
#endif
#if defined(ILL_PRVOPC) || (defined(HAVE_DECL_ILL_PRVOPC) && HAVE_DECL_ILL_PRVOPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_PRVOPC) == (5), "ILL_PRVOPC != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_PRVOPC 5
#endif
#if defined(ILL_PRVREG) || (defined(HAVE_DECL_ILL_PRVREG) && HAVE_DECL_ILL_PRVREG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_PRVREG) == (6), "ILL_PRVREG != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_PRVREG 6
#endif
#if defined(ILL_COPROC) || (defined(HAVE_DECL_ILL_COPROC) && HAVE_DECL_ILL_COPROC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_COPROC) == (7), "ILL_COPROC != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_COPROC 7
#endif
#if defined(ILL_BADSTK) || (defined(HAVE_DECL_ILL_BADSTK) && HAVE_DECL_ILL_BADSTK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ILL_BADSTK) == (8), "ILL_BADSTK != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ILL_BADSTK 8
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigill_codes[];

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data sigill_codes_xdata[] = {
 XLAT(ILL_ILLOPC),
 #define XLAT_VAL_0 ((unsigned) (ILL_ILLOPC))
 #define XLAT_STR_0 STRINGIFY(ILL_ILLOPC)
#if defined(ILL_ILLPARAOP) || (defined(HAVE_DECL_ILL_ILLPARAOP) && HAVE_DECL_ILL_ILLPARAOP)
  XLAT(ILL_ILLPARAOP),
 #define XLAT_VAL_1 ((unsigned) (ILL_ILLPARAOP))
 #define XLAT_STR_1 STRINGIFY(ILL_ILLPARAOP)
#endif
 XLAT(ILL_ILLOPN),
 #define XLAT_VAL_2 ((unsigned) (ILL_ILLOPN))
 #define XLAT_STR_2 STRINGIFY(ILL_ILLOPN)
 XLAT(ILL_ILLADR),
 #define XLAT_VAL_3 ((unsigned) (ILL_ILLADR))
 #define XLAT_STR_3 STRINGIFY(ILL_ILLADR)
#if defined(ILL_ILLEXCPT) || (defined(HAVE_DECL_ILL_ILLEXCPT) && HAVE_DECL_ILL_ILLEXCPT)
  XLAT(ILL_ILLEXCPT),
 #define XLAT_VAL_4 ((unsigned) (ILL_ILLEXCPT))
 #define XLAT_STR_4 STRINGIFY(ILL_ILLEXCPT)
#endif
 XLAT(ILL_ILLTRP),
 #define XLAT_VAL_5 ((unsigned) (ILL_ILLTRP))
 #define XLAT_STR_5 STRINGIFY(ILL_ILLTRP)
 XLAT(ILL_PRVOPC),
 #define XLAT_VAL_6 ((unsigned) (ILL_PRVOPC))
 #define XLAT_STR_6 STRINGIFY(ILL_PRVOPC)
 XLAT(ILL_PRVREG),
 #define XLAT_VAL_7 ((unsigned) (ILL_PRVREG))
 #define XLAT_STR_7 STRINGIFY(ILL_PRVREG)
 XLAT(ILL_COPROC),
 #define XLAT_VAL_8 ((unsigned) (ILL_COPROC))
 #define XLAT_STR_8 STRINGIFY(ILL_COPROC)
 XLAT(ILL_BADSTK),
 #define XLAT_VAL_9 ((unsigned) (ILL_BADSTK))
 #define XLAT_STR_9 STRINGIFY(ILL_BADSTK)
#if defined(ILL_CPLB_VI) || (defined(HAVE_DECL_ILL_CPLB_VI) && HAVE_DECL_ILL_CPLB_VI)
  XLAT(ILL_CPLB_VI),
 #define XLAT_VAL_10 ((unsigned) (ILL_CPLB_VI))
 #define XLAT_STR_10 STRINGIFY(ILL_CPLB_VI)
#endif
#if defined(ILL_CPLB_MISS) || (defined(HAVE_DECL_ILL_CPLB_MISS) && HAVE_DECL_ILL_CPLB_MISS)
  XLAT(ILL_CPLB_MISS),
 #define XLAT_VAL_11 ((unsigned) (ILL_CPLB_MISS))
 #define XLAT_STR_11 STRINGIFY(ILL_CPLB_MISS)
#endif
#if defined(ILL_CPLB_MULHIT) || (defined(HAVE_DECL_ILL_CPLB_MULHIT) && HAVE_DECL_ILL_CPLB_MULHIT)
  XLAT(ILL_CPLB_MULHIT),
 #define XLAT_VAL_12 ((unsigned) (ILL_CPLB_MULHIT))
 #define XLAT_STR_12 STRINGIFY(ILL_CPLB_MULHIT)
#endif
#if defined(ILL_DBLFLT) || (defined(HAVE_DECL_ILL_DBLFLT) && HAVE_DECL_ILL_DBLFLT)
  XLAT(ILL_DBLFLT),
 #define XLAT_VAL_13 ((unsigned) (ILL_DBLFLT))
 #define XLAT_STR_13 STRINGIFY(ILL_DBLFLT)
#endif
#if defined(ILL_HARDWALL) || (defined(HAVE_DECL_ILL_HARDWALL) && HAVE_DECL_ILL_HARDWALL)
  XLAT(ILL_HARDWALL),
 #define XLAT_VAL_14 ((unsigned) (ILL_HARDWALL))
 #define XLAT_STR_14 STRINGIFY(ILL_HARDWALL)
#endif
#if defined(ILL_BADIADDR) || (defined(HAVE_DECL_ILL_BADIADDR) && HAVE_DECL_ILL_BADIADDR)
  XLAT(ILL_BADIADDR),
 #define XLAT_VAL_15 ((unsigned) (ILL_BADIADDR))
 #define XLAT_STR_15 STRINGIFY(ILL_BADIADDR)
#endif
#if defined(__ILL_BREAK) || (defined(HAVE_DECL___ILL_BREAK) && HAVE_DECL___ILL_BREAK)
  XLAT(__ILL_BREAK),
 #define XLAT_VAL_16 ((unsigned) (__ILL_BREAK))
 #define XLAT_STR_16 STRINGIFY(__ILL_BREAK)
#endif
#if defined(__ILL_BNDMOD) || (defined(HAVE_DECL___ILL_BNDMOD) && HAVE_DECL___ILL_BNDMOD)
  XLAT(__ILL_BNDMOD),
 #define XLAT_VAL_17 ((unsigned) (__ILL_BNDMOD))
 #define XLAT_STR_17 STRINGIFY(__ILL_BNDMOD)
#endif
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigill_codes[1] = { {
 .data = sigill_codes_xdata,
 .size = ARRAY_SIZE(sigill_codes_xdata),
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
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
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
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
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
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
