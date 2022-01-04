/*
Basic syntax with c++,variables, functions, types, operations and others.
*/

#include <iostream>

void variables() {
    std::string name = "joseph";
    int age = 42;
    char type = 'a';
    bool isTall = true;
    double size = 1.90;
    std::cout << name << age << type << isTall << size << "\n";

    // constants
    const int ageOld = 63;
    const std::string message = "I'm a string";
}
