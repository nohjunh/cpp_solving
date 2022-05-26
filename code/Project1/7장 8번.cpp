/*
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0){
		this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }
	friend Circle& operator++(Circle& c);       // 전위연산자 함수의 리턴 타입은 Circle& 이다.
	friend Circle operator++(Circle& c, int x); // 전위연산자와 구분시켜주기 위해 생성자에 int x 매개변수가 들어가지만
	                                            // 단지 구분을 위한 의미없는 값임.
	                                            // 또한, 후위연산자는 i-value가 될 수 없기에 ++는 참조를 리턴해서는 안된다.
};

Circle& operator++(Circle& c) {    // 전위 ++연산자 함수 구현
	c.radius++; // 현재 객체의 반지름 증가
	return c; // 객체 참조리턴
}
Circle operator++(Circle& c, int x) { // 후위 ++연산자 함수 구현
	Circle tmp = c; // 증가 이전 객체 상태 저장
	c.radius++;    // 현재 객체의 반지름 증가
	return tmp;    // 증가 이전의 객체 리턴
}

int main() {
	Circle a(5), b(4);
	++a;       // 반지름을 1 증가 시킨다. (전위연산자)
	b = a++;   // 반지름을 1 증가 시킨다. (후위연산자)
	a.show();
	b.show();

	return 0;
}
*/