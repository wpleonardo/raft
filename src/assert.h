/**
 * Define the assert() macro, either as the standard one or the test one.
 */

#if defined(RAFT_TEST)
  #include "../test/lib/munit.h"
  #define assert(expr) munit_assert(expr)
#else
  #include <assert.h>
#endif