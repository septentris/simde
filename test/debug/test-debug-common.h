#ifndef TEST_DEBUG_COMMON_H
#define TEST_DEBUG_COMMON_H

#include <string.h>

#define GREEN "\033[32m"
#define RESET "\033[0m"

#define STR(x) #x
#define PRINT_DEFINE_VALUE(x) \
    do {\
        if (strcmp(STR(x),#x) == 0)      simde_test_debug_printf_("%s: [-]\n", #x); \
        else if (strcmp(STR(x),"") == 0) simde_test_debug_printf_(GREEN "%s\n" RESET, #x); \
        else                             simde_test_debug_printf_(GREEN "%s: %s\033[0m\n" RESET, #x, STR(x)); \
    } while(0)
#define PRINT_SECTION(x) simde_test_debug_printf_("= %s =\n", x)
#define PRINT_SECTION_END() simde_test_debug_printf_("\n")

#endif
