#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_POSIX_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_POSIX_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long POSIX_FADV_DONTNEED;
extern const long POSIX_FADV_NOREUSE;
extern const long POSIX_FADV_NORMAL;
extern const long POSIX_FADV_RANDOM;
extern const long POSIX_FADV_SEQUENTIAL;
extern const long POSIX_FADV_WILLNEED;
extern const long POSIX_MADV_DONTNEED;
extern const long POSIX_MADV_NORMAL;
extern const long POSIX_MADV_RANDOM;
extern const long POSIX_MADV_SEQUENTIAL;
extern const long POSIX_MADV_WILLNEED;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define POSIX_FADV_DONTNEED   SYMBOLIC(POSIX_FADV_DONTNEED)
#define POSIX_FADV_NOREUSE    SYMBOLIC(POSIX_FADV_NOREUSE)
#define POSIX_FADV_NORMAL     SYMBOLIC(POSIX_FADV_NORMAL)
#define POSIX_FADV_RANDOM     SYMBOLIC(POSIX_FADV_RANDOM)
#define POSIX_FADV_SEQUENTIAL SYMBOLIC(POSIX_FADV_SEQUENTIAL)
#define POSIX_FADV_WILLNEED   SYMBOLIC(POSIX_FADV_WILLNEED)
#define POSIX_MADV_DONTNEED   SYMBOLIC(POSIX_MADV_DONTNEED)
#define POSIX_MADV_NORMAL     SYMBOLIC(POSIX_MADV_NORMAL)
#define POSIX_MADV_RANDOM     SYMBOLIC(POSIX_MADV_RANDOM)
#define POSIX_MADV_SEQUENTIAL SYMBOLIC(POSIX_MADV_SEQUENTIAL)
#define POSIX_MADV_WILLNEED   SYMBOLIC(POSIX_MADV_WILLNEED)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_POSIX_H_ */
