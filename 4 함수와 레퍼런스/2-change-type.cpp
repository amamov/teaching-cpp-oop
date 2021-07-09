#include <iostream>
#include <typeinfo>

using namespace std;

double add(int x, int y) {
    return x + y;
}

int main() {
    double x = 3.14;
    double y = 4.17;

    cout << add(x, y)                        //* 암시적 형 변환 7
         << " " << typeid(add(x, y)).name()  // d
         << endl;

    // add(17.3, 13); //! error

    return 0;
}