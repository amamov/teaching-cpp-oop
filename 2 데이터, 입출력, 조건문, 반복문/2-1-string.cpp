#include <iostream>
#include <string>

using namespace std;

int main() {
    char B = 66;  // * ASCII 문자
    string name = "yoon sang seok";

    cout << B << endl;          // B
    cout << sizeof(B) << endl;  // 1 byte

    cout << name << endl;          // yoon sang seok
    cout << sizeof(name) << endl;  // 24 byte

    return 0;
}