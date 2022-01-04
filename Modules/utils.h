#include <iostream>

int len(std::string arr[]){
    return *(&arr + 1) - arr;
}
