#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputValue = "";

    cin >> inputValue;
    cout << inputValue;

    getline(cin, inputValue);  // 띄어쓰기까지 받을 수 있도록 한다.
    cout << "getline을 쓸 경우 : " << inputValue;

    return 0;
}