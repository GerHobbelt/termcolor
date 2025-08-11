#include <iostream>
#include <termcolor/termcolor.hpp>

int main(void) {
    std::cout
        << termcolor::yellow << "Warm welcome to "
        << termcolor::blue << termcolor::underline << "TERMCOLOR"
        << termcolor::reset << std::endl;
    return 0;
}
