#include <cmath>
#include <iostream>

using namespace std;

int total(int x, int y) {
    return x + y;
}

int protofunc(double x);  //* 프로토 타입

int main() {
    const double PI = 3.14159226;
    double degree = PI / 4;

    cout << protofunc(PI) << endl;  //* 프로토 타입 함수 사용
    cout << cos(degree) << endl;    //* 외부 함수 사용 0.707107
    cout << total(18, 10) << endl;  // 28

    return 0;
}

int protofunc(double x) {
    return x + 1;
}