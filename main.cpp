#include <iostream>
#include "classes.h"

int main() {
    // since demoClass is inside a different namespace :: has to be used
    classes::demoClass one("text", 14);

    // simlar to how parts of the standard library have to be used with std::
    // like blow
    std::cout << one << std::endl;
}