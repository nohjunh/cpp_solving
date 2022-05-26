/*
#include <iostream>
using namespace std;

class Comparable { // 추상 클래스
public:
    virtual bool operator > (Comparable& op2)=0; // 순수 가상 함수
    virtual bool operator < (Comparable& op2)=0; // 순수 가상 함수
    virtual bool operator == (Comparable& op2)=0; // 순수 가상 함수
};

class Circle : public Comparable { // 추상클래스를 상속받는 CIrcle 
    int radius;
public:
    Circle(int radius=1) { this->radius = radius; } // 디폴트 radius값 = 1
    int getRadius() { return radius;}
    bool operator > (Comparable& op2) { //순수가상함수 구현함으로써 Circle은 온전한 클래스 
                                        // 이때, virtual 속성은 상속되므로, 키워드 생략 가능
        // op2를 Circle* 으로 타입변환하여 -> 을 통해 멤버에 접근
        if (this->radius > ((Circle*)&op2)->getRadius()) { // this의 radius이 op2의 radius값보다 크면 
            return true;
        }
        else {
            return false;
        }
    }
    bool operator < (Comparable& op2) { //순수가상함수 구현함으로써 Circle은 온전한 클래스 
                                        // 이때, virtual 속성은 상속되므로, 키워드 생략 가능
        // op2를 Circle* 으로 타입변환하여 -> 을 통해 멤버에 접근
        if (this->radius < ((Circle*)&op2)->getRadius()) { // this의 radius이 op2의 radius값보다 작으면
            return true;
        }
        else {
            return false;
        }
    }
    bool operator == (Comparable& op2) { //순수가상함수 구현함으로써 Circle은 온전한 클래스 
                                        // 이때, virtual 속성은 상속되므로, 키워드 생략 가능
        // op2를 Circle* 으로 타입변환하여 -> 을 통해 멤버에 접근
        if (this->radius == ((Circle*)&op2)->getRadius()) { //this의 radius이 op2의 radius값과 동일하면
            return true;
        }
        else {
            return false;
        }
    }
};

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
    if (a > b) return a;
    else return b;
}

int main() { // 문제 예시부분 
    int a=20, b=50, c;
    c = bigger(a, b);
    cout << "20과 50중 큰 값은 " << c << endl;

    Circle waffle(10), pizza(20), y; // waffle의 반지름이 10이고 pizza의 반지름이 20
    y = bigger(waffle, pizza); // 더 큰거를 y로 대입 // pizza의 반지름이 더 크므로 y에 pizza 대입 
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl; // y를 이용해 값 접근
    return 0;
}
*/