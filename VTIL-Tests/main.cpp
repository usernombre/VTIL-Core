#if defined(__linux__)
// on some glibc toolchains SIGSTKSZ is not a constant expression...
#define DOCTEST_CONFIG_NO_POSIX_SIGNALS
#endif

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"