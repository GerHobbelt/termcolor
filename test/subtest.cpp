#include <iostream>
#include "termcolor/termcolor.hpp"


void subtest_from_another_tranlation_unit(void)
{
    std::cout << termcolor::blue << "subtest" << termcolor::reset << std::endl;
}
