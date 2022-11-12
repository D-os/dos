/*
 * Copyright (c) 2018-2022 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#define ARCH_NEEDS_NON_SHUFFLED_SCNO_CHECK 1
#define ARCH_MX32_SIZEOF_STRUCT_MSQID64_DS 120
#define HAVE_ARCH_OLD_MMAP 1
#define HAVE_ARCH_OLD_SELECT 1
#define HAVE_ARCH_UID16_SYSCALLS 1
#ifndef __X32_SYSCALL_BIT
# define __X32_SYSCALL_BIT 0x40000000UL
#endif
