/*
#include <iostream>
#include <string>
using namespace std;

class Matrix {
	int m[2][2]; //2차원 배열 선언 
public:
	//생성자   
	Matrix(int m1=0, int m2=0, int m3=0, int m4=0) {  // 4개의 매개변수를 가지는 생성자 
		m[0][0] = m1; m[0][1] = m2;
		m[1][0] = m3; m[1][1] = m4;
	}
	// 2차원 배열 출력 show함수
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				cout << m[i][j] << ' ';
		cout << "}" << endl;
	}
	/// <summary>
    /// 클래스의 멤버 함수로 연산자 함수가 선언되는 경우
    /// </summary>
	Matrix operator+(Matrix op2);     // 객체 자신과 피연산자로 들어온 op2객체를 더하는 연산자함수
	Matrix& operator+=(Matrix op2);   // 객체 자신과 피연산자로 들어온 op2객체를 +=연산하는 연산자함수
	                                  // 리턴타입을 참조리턴으로 한 이유는 복사본에 값을 더하게 되는 문제를 방지하기 위함.
	bool operator==(Matrix op2);      // 객체 자신과 피연산자로 들어온 op2객체를 비교하는 연산자함수
};

//for문으로 2차원배열 check
Matrix Matrix::operator +(Matrix op2) { // +연산자함수
	Matrix tmp;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			tmp.m[i][j] = m[i][j] + op2.m[i][j];
	return tmp;  // 더한 값을 가지는 Matrix형 임시객체 tmp리턴
}
Matrix& Matrix::operator +=(Matrix op2) { // 참조리턴으로 하지 않으면, 복사본을 증가시키는 문제 발생
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			m[i][j] += op2.m[i][j];
	return *this; // 이 객체의 참조리턴
}
bool Matrix::operator ==(Matrix op2) {
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			if (m[i][j] != op2.m[i][j])  // 객체자신의 배열값과 피연산자 op2의 배열값 비교. 다르면 false리턴
				return false;
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show(); // a, b, c 2차원 배열 값 출력  
	if (a == c)
		cout << "a and c are the same" << endl; // 

	return 0;
}
*/