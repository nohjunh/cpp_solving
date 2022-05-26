/*
////////////// 10-2번 ///////////  10-1번은 밑에 있음///////////////////
#include <iostream>
#include <string>
#include "Calculator.h"
using namespace std;

// inline으로 Add 클래스 구현부 설정
inline void Add::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Add::calculate() { // 더하기 연산
	return this->a + this->b;
}

// inline으로 Sub 클래스 구현부 설정
inline void Sub::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Sub::calculate() { // 빼기 연산
	return this->a - this->b;
}

// inline으로 Mul 클래스 구현부 설정
inline void Mul::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Mul::calculate() { // 곱하기 연산
	return this->a * this->b;
}

// inline으로 Div 클래스 구현부 설정
inline void Div::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Div::calculate() { // 나누기 연산
	return this->a / this->b;
}

// main()
int main() {
	Add a; Sub s; Mul m; Div d; // 각 객체 생성

	while (1) { // 무한루프
		int operand1, operand2; // 피연산자 2개
		char op; // 연산자
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> operand1 >> operand2 >> op; // 피연산자와 연산자 입력을 받음

		switch (op) // 연산자 구분
		{
		case '+': // + 라면,
			a.setValue(operand1, operand2); // a객체 피연산자 셋팅
			cout << a.calculate() << endl;
			break;
		case '-': // - 라면,
			s.setValue(operand1, operand2); // s객체 피연산자 셋팅
			cout << s.calculate() << endl;
			break;
		case '*': // * 라면,
			m.setValue(operand1, operand2); // m객체 피연산자 셋팅
			cout << m.calculate() << endl;
			break;
		case '/': // 나누기 라면,
			d.setValue(operand1, operand2); // d객체 피연산자 셋팅
			cout << d.calculate() << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}

///////////////////////// 10-1번 ///////////////////////
#include <iostream>
#include <string>
using namespace std;

// Add 클래스
class Add {
	//멤버변수
	int a, b;
public:
	//멤버함수
	void setValue(int x, int y); // value값 셋팅
	int calculate();
};
// inline으로 Add 클래스 구현부 설정
inline void Add::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Add::calculate() { // 더하기 연산
	return this->a + this->b;
}
// Sub 클래스
class Sub {
	//멤버변수
	int a, b;
public:
	//멤버함수
	void setValue(int x, int y);
	int calculate();
};
// inline으로 Sub 클래스 구현부 설정
inline void Sub::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Sub::calculate() { // 빼기 연산
	return this->a - this->b;
}
// Mul 클래스
class Mul {
	//멤버변수
	int a, b;
public:
	//멤버함수
	void setValue(int x, int y);
	int calculate();
};
// inline으로 Mul 클래스 구현부 설정
inline void Mul::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Mul::calculate() { // 곱하기 연산
	return this->a * this->b;
}
// Div 클래스
class Div {
	//멤버변수
	int a, b;
public:
	//멤버함수
	void setValue(int x, int y);
	int calculate();
};
// inline으로 Div 클래스 구현부 설정
inline void Div::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
inline int Div::calculate() { // 나누기 연산
	return this->a / this->b;
}

int main() {
	Add a; Sub s; Mul m; Div d; // 각 객체 생성

	while (1) { // 무한루프
		int operand1, operand2; // 피연산자 2개
		char op; // 연산자
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> operand1 >> operand2 >> op; // 피연산자와 연산자 입력을 받음

		switch (op) // 연산자 구분
		{
		case '+': // + 라면,
			a.setValue(operand1, operand2); // a객체 피연산자 셋팅
			cout << a.calculate() << endl;
			break;
		case '-': // - 라면,
			s.setValue(operand1, operand2); // s객체 피연산자 셋팅
			cout << s.calculate() << endl;
			break;
		case '*': // * 라면,
			m.setValue(operand1, operand2); // m객체 피연산자 셋팅
			cout << m.calculate() << endl;
			break;
		case '/': // 나누기 라면,
			d.setValue(operand1, operand2); // d객체 피연산자 셋팅
			cout << d.calculate() << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}

*/