#include <iostream>
#include <string>

using namespace std;

int main() {
    bool isTrue = true;
    bool isFalse = false;

    cout << isTrue << endl;          // 1
    cout << sizeof(isTrue) << endl;  // 1

    cout << isFalse << endl;          // 0
    cout << sizeof(isFalse) << endl;  // 1

    if (!(isTrue && isFalse)) {
        cout << "not (true and false) == not false == true" << endl;
    }

    if (isTrue || isFalse) {
        cout << "true or false == true";
    }

    return 0;
}