#include <iostream>

using namespace std;

int main() {
    int inputValue = 0;

    cout << "정수를 입력해주세요." << endl;
    cin >> inputValue;

    switch (inputValue) {
        case 17:
            cout << "hello 17" << endl;
            break;
        case 9:
            cout << "hello 9" << endl;
            break;
        default:
            cout << "Hmm..." << endl;
            break;
    }

    /*
    * C++에서는 switch 문에 string으로 비교 할 수 없다!! 
    * 비교하고 싶다면, hash 자료구조를 사용해서 비교해야 한다.
    * enum을 사용하는 방법도 있다.
    string name = "yss";

    switch (name) {
        case "yss":
            cout << "hello world!!" << endl;
            break;
        case "yrr":
            cout << "C++ hello!!" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }
    */

    enum Colors {
        BLACK,
        WHITE,
        RED,
        BLUE,
        GREEN
    };

    Colors color = BLACK;

    switch (color) {
        case BLACK:
            cout << "Black" << endl;
            break;
        case WHITE:
            cout << "White" << endl;
            break;
        case RED:
            cout << "Red" << endl;
            break;
        case BLUE:
            cout << "Blue" << endl;
            break;
        case GREEN:
            cout << "Green" << endl;
            break;
        default:
            cout << "Undefined" << endl;
            break;
    }

    return 0;
}
