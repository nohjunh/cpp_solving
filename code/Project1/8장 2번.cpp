/*
#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; } // getter
	void setRadius(int radius) { this->radius = radius; } // setter
	double getArea() { return 3.14*radius*radius; } // 원의 면적
};

class NamedCircle : public Circle { // Circle을 상속받은 NamedCircle 클래스
	string name; // NamedCircle의 고유 멤버변수
public:
	NamedCircle(int radius = 0, string name = "") : Circle(radius) { //파생클래스의 생성자가 명시적으로 기본클래스 생성자 선택 호출
		this->name = name;
	}
	string getName() { return name; } // getter. name 리턴
	void setName(string name) { this->name = name; } // setter. // 매개변수로 들어온 name값으로 객체name 변경
	void show() { // 원의 정보 show함수
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}
};

int main() {
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	NamedCircle pizza[5];
	int rad; // 반지름 입력받음
	string name; // 이름 입력받음
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> "; // 1부터 출력 되어야 하므로 i + 1
		cin >> rad >> name;
		pizza[i].setName(name); // 각각 setter로 값 설정
		pizza[i].setRadius(rad); // 각각 setter로 값 설정
	}
	double BigPizza = pizza[0].getArea(); // 가장 면적이 큰 피자를 알아내기 위해 BIgPizza의 값을 우선 첫번째 피자 면적으로 설정
	for (int i = 1; i < 5; i++) {
		if (pizza[i].getArea() > BigPizza) { // 그 다음 피자랑 면적 비교
			BigPizza = pizza[i].getArea(); // 그 다음 피자가 더 크면 현재 BigPizza에 값 대입
			name = pizza[i].getName(); // 현재 BigPizza가 무슨 피자인지 저장
		}
	}
	cout << "가장 면적이 큰 피자는 " << name << "입니다" << endl;
	return 0;
}
*/