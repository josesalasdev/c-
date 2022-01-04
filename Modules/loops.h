#include <iostream>
#include "utils.h"

void loopWhile(){
    int i = 0;
    while (i < 5) {
        std::cout << i << "\n";
        i++;
    }
}

void loopFor(){
    for (int i = 0; i < 5; i++) {
        std::cout << i;
    }
}

void arrayLoops(){
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int arrSize = *(&cars + 1) - cars;
    for (int i = 0; i < arrSize; i++ ){
        std::cout << cars[i] << "\n";
    }
}
