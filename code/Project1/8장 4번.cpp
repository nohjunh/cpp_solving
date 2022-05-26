/*
#include <iostream>
#include <string>

using namespace std;

class Point { // 2차원 상의 한 점을 표현하는 Point클래스 
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; } // x좌표 getter
	int getY() { return y; } // y좌표 getter
protected:  
	void move(int x, int y) { this->x = x; this->y = y; } // 2차원 상의 한 점을 move시키는 함수
};

class ColorPoint : public Point { // Point 클래스 상속받는 ColorPoint 클래스
	string color;
public:
	ColorPoint(int x = 0, int y = 0, string color = "BLACK") : Point(x, y) // 디폴트 값으로 Black색과 0,0을 가지고
		                                                                   // /파생클래스의 생성자가 명시적으로 기본클래스 생성자 선택 호출
		                                                                   // why? 기본생성자를 호출하는게 아니기 때문
	{ 
		this->color = color; 
	}
	void setPoint(int x, int y) { move(x, y); } // Point값 조정
	void setColor(string color) { this->color = color; } // color값 조정 
	void show() { cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl; } // show함수
};

int main() {
	ColorPoint zeroPoint; // BLACK 색에 (0,0) 위치의 점
	zeroPoint.show(); // zeroPoint를 출력한다.

	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show(); // cp를 출력한다
	return 0;
}
*/