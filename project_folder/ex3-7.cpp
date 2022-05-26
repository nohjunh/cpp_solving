/*
#include <iostream>

using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름" << radius << "원 소멸" << endl;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDount(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainpizza(30);
	f();
	return 0;
}
*/