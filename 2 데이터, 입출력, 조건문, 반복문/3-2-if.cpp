#include <iostream>
#include <string>

using namespace std;

int main() {
    bool isTrue = true;
    bool isFalse = false;

    if (isTrue && isFalse) {
        cout << "true and false == false" << endl;
    } else if (isTrue || isFalse) {
        cout << "true or false == true" << endl;  // true or false == true
    } else {
        cout << "else here!" << endl;
    }

    if (3 < 8) {
        cout << "3 < 8" << endl;  // 3 < 8
    }

    if (19 == 19) {
        cout << "19 == 19" << endl;  // 19 == 19
    }

    string name = "";

    getline(cin, name);

    if (name == "yss") {
        cout << "hello yss" << endl;
    } else if (name == "yrr") {
        cout << "hello yrr" << endl;
    } else {
        cout << "hmmm..." << endl;
    }

    return 0;
}