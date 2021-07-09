#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 6;

    //* AND 논리 연산자로서
    cout << a << " " << b << " " << (a & b) << endl;  // 5 6 4
    // .... 0101
    // .... 0110
    // &
    // .... 0100 -> 4

    //* 메모리 주소 연산자로서
    cout << &a << " " << &b << endl;  // 0x7ffeefbff194 0x7ffeefbff190

    //* 레퍼런스 변수로서
    // 나중에...

    return 0;
}