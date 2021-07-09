#include <iostream>
/*
# : 전처리기, 전처리기는 컴파일을 시작하면 우선적으로 처리한다. (컴파일 단계 사정 설명 필요) 
iostream : 기본 입출력과 관련된 객체들을 정의한 헤더파일이고 표준 라이브러리 디렉토리에 존재
*/

/*
std 스코프(공간, 범위) 안에 출력을 담당하는 객체인 cout, 입력을 담당하는 객체인
cin, 줄 바꿈을 담당하는 객체인 endl이 있다.
::는 스코프 연산자로 범위를 지정한다.
std::cout이라고 하면 std 안에 있는 cout 객체를 의미한다.
*/

int main() {
    // main 함수 안에서 시작이 된다.

    std::cout << "hello world!" << std::endl;

    return 0;
}