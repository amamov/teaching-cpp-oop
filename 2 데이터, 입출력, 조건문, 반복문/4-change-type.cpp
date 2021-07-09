#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    bool boolValue = true;    // 1byte
    char charValue = 'A';     // 1byte
    short shortValue = 14;    // <=4byte
    float floatValue = 2.9f;  // 4byte
    long longValue = 6;       // >=4byte
    int intValue = 7;         // 4byte

    cout << sizeof(long) << endl;

    //* typeid().name() : 타입을 확인하는 함수
    cout << typeid(floatValue).name() << endl;  // f

    //* [implicit type change]
    // bool < int < unsigned int < long < unsigend long < float < double
    // signed와 unsigned의 크기는 같지만 약속으로 unsigned가 우선적으로 타입 선택이 된다.
    cout << "Type : " << typeid(boolValue + 100).name() << endl;                   // i
    cout << "Type : " << typeid(floatValue + 3.9).name() << endl;                  // d
    cout << "Type : " << typeid(boolValue * intValue + longValue).name() << endl;  // l

    cout << "Type : " << typeid(3.8).name() << endl;  // d
    floatValue = 3.8;
    cout << "Type : " << typeid(floatValue).name() << endl;  //* f (실수 주의)

    //* [explicit type change]
    // [C style]
    // cout << "char에서 int로 형변환 : " << int(charValue) << endl;
    // cout << "char에서 int로 형변환 : " << (int)charValue << endl;
    // [C++ style]
    cout << "char에서 int로 형변환 : " << static_cast<int>(charValue)  // 65
         << "  " << typeid(static_cast<int>(charValue)).name()         // i
         << "  " << sizeof(static_cast<int>(charValue))                // 4
         << endl;

    return 0;
}