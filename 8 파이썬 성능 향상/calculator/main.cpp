#include <iostream>

extern "C" {
int add(int a, int b) {
    return a + b;
}
}

//* g++ -shared -o libcal.so -fPIC main.cpp