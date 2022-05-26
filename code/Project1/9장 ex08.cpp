/*
#include <iostream>
using namespace std;

class Shape { // 최소 하나의 순수가상함수를 가지는 클래스이므로 Shape은 추상클래스
protected:
	string name; // 도형의 이름
	int width, height; // 도형이 내접하는 사각형의 너비와 높이
public:
	Shape(string n ="", int w=0, int h=0) { name = n; width = w; height = h; }
	virtual double getArea() = 0; // dummy값 리턴 // getArea() 함수를 =0; 을 취하므로 순수 가상함수로 만듬
	string getName() { return name; } // 이름 리턴
};

class Oval :public Shape { // 추상클래스 Shape을 상속받는 파생클래스 Oval
public:
	Oval(string n, int w, int h) : Shape(n, w, h) {} // 생성자로 3개의 인자를 받음
	double getArea() { // 순수가상함수 구현함으로써 Oval은 온전한 클래스 // 이때, virtual 속성은 상속되므로, 키워드 생략 가능
		return width * height * 3.14; // 타원 표현
	}
};
class Rect :public Shape { // 추상클래스 Shape을 상속받는 파생클래스 Rect
public:
	Rect(string n, int w, int h) : Shape(n, w, h) {} // 생성자로 3개의 인자를 받음
	double getArea() { // 순수가상함수 구현함으로써 Rect은 온전한 클래스 // 이때, virtual 속성은 상속되므로, 키워드 생략 가능
		return width * height; // 사각형 표현
	}
};
class Triangular :public Shape { // 추상클래스 Shape을 상속받는 파생클래스 Triangular
public:
	Triangular(string n, int w, int h) : Shape(n, w, h) {} // 생성자로 3개의 인자를 받음
	double getArea() { // 순수가상함수 구현함으로써 Triangular은 온전한 클래스 // 이때, virtual 속성은 상속되므로, 키워드 생략 가능
		return width * height * 0.5; // 삼각형 표현
	}
};

int main() {
	Shape* p[3]; // Shape형 포인터배열
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);

	for (int i=0; i<3; i++)
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

	for (int i=0; i<3; i++) delete p[i]; // 동적해제 
	return 0;
}
*/