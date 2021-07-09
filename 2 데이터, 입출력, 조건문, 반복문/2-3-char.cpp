
#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch;
    int count = 0;
    while (cin >> noskipws >> ch) {
        if (isalpha(ch))  // 알파벳인지 체크
        {
            count++;
        }
        ch = toupper(ch);  // 대문자로 변환
        cout << ch;
    }

    cout << "알파벳 문자의 개수 : " << count << endl;
}
