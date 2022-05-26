/*

#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius); // 원의 반지름 값
	double getArea(); // 면적을 리턴
};

void Circle::setRadius(int radius) {
	this->radius = radius; // this포인터를 통해 객체의 radius값에다가 매개변수 radius값 저장
}
double Circle::getArea() {
	return 3.14 * radius * radius; // 원의 면적 
}

int main() {
	Circle circle[3]; // 3개의 Circle 객체를 가진 배열선언. 여기서는 동적할당이 아닌 정적으로 객체배열을 선언.
	int count = 0; // 면적 100을 넘는 원을 세는 count 변수
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		int tem;
		cin >> tem;
		circle[i].setRadius(tem); // 각 circle객체들 반지름 값 설정
		if (circle[i].getArea() > 100) { // 면적이 100이 넘으면,
			count++; // count 증가
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}
*/