/*
#include <iostream>
using namespace std;

class LoopAdder { // 추상 클래스 
	string name; // 루프의 이름
	int x, y, sum; // x에서 y까지의 합은 sum
	void read(); // x, y 값을 읽어 들이는 함수
	void write(); // sum을 출력하는 함수
protected:
	LoopAdder(string name ="") { // 루프의 이름을 받는다. 초깃값은 "" 
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // 순수가상함수. 루프를 돌며 합을 구하는 함수
public:
	void run(); // 연산을 진행하는 함수
};

void LoopAdder::read() { // x, y 입력
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y; // 두 수를 입력 받음 // 여기서 x,y는 LoopAdder에 정의된 멤버
}
void LoopAdder::write() { // 결과 sum 출력
	cout << x << "에서 " << y << "까지의 합 = " << sum << "입니다" << endl;
}
void LoopAdder::run() {
	read(); // x, y를 읽는다.
	sum = calculate(); // 루프를 돌면서 계산한다.
	write(); // 결과 sum을 출력한다.
}

class WhileLoopAdder : public LoopAdder { // 추상클래스 LoopADder를 상속받는 WhileLoopAdder 클래스
public:
	WhileLoopAdder(string name = "") : LoopAdder(name) {} // 루프의 이름 초기값 설정
	int calculate() { // 순수가상함수인 calculate()를 파생클래스인 WhileLoopAdder에서 구현함으로써 온전한 클래스로 만듬
		int SumCount = 0; // sum합산을 저장할 SumCount 변수
		int i = getX(); // x~y까지의 값을 이어나갈 i변수 // 초기값은 x값으로 설정
		while ( i <= getY()) { // x~y까지 비교해서 x가 y를 넘으면 while문 탈출
			SumCount += i; // 합산 계산
			i++; // i값 증가 
		}
		return SumCount; // 합계 리턴
	}
};

class DoWhileLoopAdder : public LoopAdder { // 추상클래스 LoopADder를 상속받는 DoWhileLoopAdder 클래스
public:
	DoWhileLoopAdder(string name = "") : LoopAdder(name) {} // 루프의 이름 초기값 설정
	int calculate() {  // 순수가상함수인 calculate()를 파생클래스인 DoWhileLoopAdder에서 구현함으로써 온전한 클래스로 만듬
		int SumCount = 0;  // sum합산을 저장할 SumCount 변수
		int i = getX(); // x~y까지의 값을 이어나갈 i변수 // 초기값은 x값으로 설정
		do {
			SumCount += i;  // 합산 계산
			i++; // i값 증가 
		} while (i <= getY()); // do-while문이므로 do문 먼저 실행 후에 조건 검사
		return SumCount;  // 합계 리턴
	}
};

int main() {
	WhileLoopAdder whileLoop("while Loop"); //while문을 이용하여 합을 구하는 과정을 수행
	DoWhileLoopAdder doWhileLoop("Do while Loop"); // do-while문을 이용해 합을 구하는 과정을 수행

	whileLoop.run();
	doWhileLoop.run();

	return 0;
}
*/