#include <iostream>
#include <string>

using namespace std;

/*
* x = y + z; : x는 destination, y와 z는 source
* short int <= int <= long int : 크기는 플랫폼마다 다르다. 
* signed long int === long int === long
*/

int main() {
    int a;                                  // 변수의 선언, 4 byte (sizeof(int)로 확인할 수 있다.)
    int b = 10;                             // 변수의 선언과 동시에 대입
    int value1 = 100, value2 = 99, value3;  // 이렇게도 표현 가능

    unsigned int unsignedIntValue = 17;

    cout << sizeof(unsignedIntValue) << endl;  // 4 byte

    short int x;  // 플랫폼마다 다르다.  short int <= int <= long int

    double doubleVar;  // 8 byte
    float floatVar;

    const double PI = 3.14;  // * constant 상수

    //* sizeof 연산자는 자료형 또는 변수의 크기를 byte 단위로 반환한다.
    cout << sizeof(doubleVar) << endl;  // 8 byte
    cout << sizeof(floatVar) << endl;   // 4 byte

    cout << 123L << endl;          // long
    cout << sizeof(123L) << endl;  // 8 byte

    cout << 124.3f << endl;          // float
    cout << sizeof(21.45f) << endl;  // 4 byte

    cout << 3.14 << endl;          // double (실수는 기본적으로 double 타입이 된다.)
    cout << sizeof(3.14) << endl;  // 8byte

    return 0;
}