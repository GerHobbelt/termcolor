#include <iostream>
#include <termcolor/termcolor.hpp>


#if defined(BUILD_MONOLITHIC)
#define main termcolor_example_main
#endif

extern "C"
int main(void) {
    std::cout
        << termcolor::yellow << "Warm welcome to "
        << termcolor::blue << termcolor::underline << "TERMCOLOR"
        << termcolor::reset << std::endl;
    return 0;
}
