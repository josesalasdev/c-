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

void input() {
    std::string name;
    std::cout << "What's your name?\n"; std::cin >> name;
    std::cout << "Welcome " << name << "\n";
}

void operationsWithStrings(){
    std::string msg;
    msg = "Here";
    msg = msg + ", ";
    msg.append("again !");
    std::cout << msg << "The length of the txt string is: " << msg.length();
}

void condition() {
    int time = 20;
    if (time < 18) {
        std::cout << "Good day.";
    } else {
        std::cout << "Good evening.";
    }
    // or one line
    std::string result = (time < 18) ? "Good day." : "Good evening.";
    std::cout << result;

    // or witch
    int day = 4;
    switch (day) {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;
    }
}
