#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_MADV_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_MADV_H_
#include "libc/runtime/symbolic.h"

#define MADV_DODUMP SYMBOLIC(MADV_DODUMP)
#define MADV_DOFORK SYMBOLIC(MADV_DOFORK)
#define MADV_DONTDUMP SYMBOLIC(MADV_DONTDUMP)
#define MADV_DONTFORK SYMBOLIC(MADV_DONTFORK)
#define MADV_DONTNEED SYMBOLIC(MADV_DONTNEED)
#define MADV_FREE SYMBOLIC(MADV_FREE)
#define MADV_HUGEPAGE SYMBOLIC(MADV_HUGEPAGE)
#define MADV_HWPOISON SYMBOLIC(MADV_HWPOISON)
#define MADV_MERGEABLE SYMBOLIC(MADV_MERGEABLE)
#define MADV_NOHUGEPAGE SYMBOLIC(MADV_NOHUGEPAGE)
#define MADV_NORMAL SYMBOLIC(MADV_NORMAL)
#define MADV_RANDOM SYMBOLIC(MADV_RANDOM)
#define MADV_REMOVE SYMBOLIC(MADV_REMOVE)
#define MADV_SEQUENTIAL SYMBOLIC(MADV_SEQUENTIAL)
#define MADV_UNMERGEABLE SYMBOLIC(MADV_UNMERGEABLE)
#define MADV_WILLNEED SYMBOLIC(MADV_WILLNEED)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long MADV_DODUMP;
extern const long MADV_DOFORK;
extern const long MADV_DONTDUMP;
extern const long MADV_DONTFORK;
extern const long MADV_DONTNEED;
extern const long MADV_FREE;
extern const long MADV_HUGEPAGE;
extern const long MADV_HWPOISON;
extern const long MADV_MERGEABLE;
extern const long MADV_NOHUGEPAGE;
extern const long MADV_NORMAL;
extern const long MADV_RANDOM;
extern const long MADV_REMOVE;
extern const long MADV_SEQUENTIAL;
extern const long MADV_UNMERGEABLE;
extern const long MADV_WILLNEED;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_MADV_H_ */
