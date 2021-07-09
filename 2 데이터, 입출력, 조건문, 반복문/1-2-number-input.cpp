#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    int b;
    int total;
    cout << "a 값 입력" << endl;
    cin >> a;
    cout << "b 값 입력" << endl;
    cin >> b;

    total = a + b;
    cout << "a + b : " << total << endl;

    total = a - b;
    cout << "a - b : " << total << endl;

    total = a * b;
    cout << "a * b : " << total << endl;

    total = a / b;
    cout << "a / b : " << total << endl;

    total = a % b;
    cout << "a % b : " << total << endl;

    return 0;
}
