#include <iostream>
#include "Modules/robot.h"
#include "Modules/math.h"
#include "Modules/basics.h"
#include "Modules/loops.h"
#include "Modules/oop.h"
using namespace std;

int main() {
    cout << "Hello World!";
    robot();
    cout << math(10, 12);
    variables();
    //input();
    operationsWithStrings();
    arrayLoops();
    createMyClass();
    return 0;
}
