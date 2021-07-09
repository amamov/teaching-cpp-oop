#include <iostream>

using namespace std;

int max(int x, int y) {
    if (x < y) {
        return y;
    } else {
        return x;
    }
}

int max(int x, int y, int z) { return max(max(x, y), z); }

int main() {
    cout << max(1, 4, 10) << endl;
    return 0;
}
