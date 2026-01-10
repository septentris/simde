#if defined(SIMDE_TESTS_DIAGNOSTICS_RUN_TESTS_H)
  #error File already included.
#endif
#define SIMDE_TESTS_DIAGNOSTICS_RUN_TESTS_H

#include "../test.h"

MunitSuite* simde_tests_debug_get_suite(void);
