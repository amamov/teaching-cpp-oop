#include <iostream>
#include <string>

using namespace std;

class Robot {
   private:
    string name;

   public:
    static int population;
    Robot() {
        cout << "Robot이 생성되었습니다." << endl;
        population++;
    };
    Robot(int test) {
        cout << test << endl;
        cout << "Robot이 생성되었습니다." << endl;
        population++;
    };
    Robot(const Robot& p) : name(p.name) {
        cout << "복사 생성자로 만들어진 Robot이 생성되었습니다." << endl;
        population++;
    };
    void sayHi() { cout << "hello world!!" << endl; };
    string getName() { return name; };
    void setName(string name) { this->name = name; };
    void howMany() { cout << population << "마리 만들어 졌습니다." << endl; };
    void addCal(int a, int b) { cout << a + b << endl; };

    //* pure virtual function : 이걸 사용하는 순간 Robot은 추상 클래스가 되었고 Robot 자체로 instance를 만들 수 없다.
    virtual double getValue() = 0;

   protected:
    bool isProtected = true;
};

inline int Robot::population = 0;

class Siri : public Robot {
   public:
    Siri() : Robot(){};               //* 부모 생성자 함수 상속
    Siri(int test) : Robot(test){};   //* 부모 생성자 함수 상속
    Siri(double num1, double num2) {  //* 새로운 자식 생성자 함수 정의
        cout << "Siri만의 생성자 함수" << endl;
    };
    void protectedChecker() {
        if (isProtected) {
            cout << "protected 되어 있습니다." << endl;
        }
    };
    void addCal(int a, int b) {
        cout << "오버라이딩된 메서드입니다." << endl;
        cout << a + b + 1 << endl;
    }

    double getValue() {
        return 3.14;
    }
};

int main() {
    Siri siri = Siri();
    siri.setName("im siri");
    cout << siri.getName() << endl;

    siri.sayHi();

    // 자식 클래스에서 복사 생성자를 선언, 정의하지 않았더라도 컴파일러가 내부적으로 생성한다.
    // 만약 복사 생성자를 직접 선언, 정의한 경우 컴파일러가 따로 복사생성자를 만들지 않는다.
    Siri siri2 = Siri(siri);
    cout << siri2.getName() << endl;

    siri.howMany();
    siri.addCal(12, 15);  // 28

    //* 추상화, 추상 메소드 사용
    cout << siri.getValue() << endl;

    //* upcasting. 부모클래스의 포인터가 자식클래스 객체의 주소를 받는다.
    Robot* pRobot = &siri;
    pRobot->addCal(12, 15);  // 27

    Siri siri3 = Siri(99);
    Siri siri4 = Siri(1.3, 2.7);

    return 0;
}

//* 객체지향 관계는 사람들이 어떻게 보느냐에 따라서 달라진다.
//* aggregation : Person class 안에서 Date class를 사용할 때 이 둘의 관계를 aggregation이라고 한다.
//* composition : 자동차 안에 부품들 사이의 관계, 모여서 땔 수 없는 관계이다!!
//* 하지만 부품들을 때서 다른 곳에다가 붙일 수도 있다. 이 경우에는 aggregation이라고 한다.
//* aggregation과 composition을 모두 association이라고 한다.

//* dependency : association과 inheritance 보다는 약한 관계이다.
//* 다른 class의 객체가 해당하는 class의 인자로 들어올 때 dependency되었다고 한다.