#include <iostream>

using namespace std;

int power(int down, int up) {
    int result = down;
    for (int i = 1; i < up; i++) {
        result *= down;
    }
    return result;
}

//* pass by value : 값을 넘길 때 새로운 메모리 공간을 만들어서 다른 주소에 변수를 받아 저장한다.

int main() {
    cout << power(2, 4) << endl;
    return 0;
}