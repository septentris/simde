/* Copyright (c) 2026 Alexandre J. Raymond <ajraymond@septentris.com>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "test-debug-common.h"
#include "simde/simde-detect-clang.h"
#include "test/test.h"

#define SIMDE_TESTS_CURRENT_ISAX simde-detect-clang

static int
test_simde_diagnostic_detect_clang(SIMDE_MUNIT_TEST_ARGS) {

  PRINT_SECTION("CLANG");
    PRINT_DEFINE_VALUE(SIMDE_DETECT_CLANG_VERSION);
  PRINT_SECTION_END();

  return 0;
}

SIMDE_TEST_FUNC_LIST_BEGIN
  SIMDE_TEST_FUNC_LIST_ENTRY(diagnostic_detect_clang)
SIMDE_TEST_FUNC_LIST_END

#include <test/debug/test-debug-footer.h>
