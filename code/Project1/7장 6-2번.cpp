/*
#include <iostream>
#include <string>
using namespace std;

class Matrix {
	int m[2][2]; //2차원 배열 선언 
public:
	//생성자   
	Matrix(int m1 = 0, int m2 = 0, int m3 = 0, int m4 = 0) {  // 4개의 매개변수를 가지는 생성자 
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
	/// 연산자 함수를 외부 함수로 작성하고 Matrix클래스에 프렌드로 선언
	/// </summary>
	friend Matrix operator +(Matrix op1, Matrix op2); //Matrix클래스의 피연산자로 Matrix객체 2개를 받아 더하는 == 연산자 함수
	friend Matrix& operator +=(Matrix& op1, Matrix op2); //Matrix클래스의 피연산자로 Matrix객체 2개를 받아 +=연산을 하는 연산자 함수
	friend bool operator ==(Matrix op1, Matrix op2); //Matrix클래스의 피연산자로 Matrix객체 2개를 받아 비교하는 == 연산자 함수
};

//for문으로 2차원배열 check
Matrix operator +(Matrix op1, Matrix op2) { // +연산자함수
	Matrix tmp;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			tmp.m[i][j] = op1.m[i][j] + op2.m[i][j]; // 매개변수로 들어온 두 Matrix객체의 배열값 더함.
	return tmp;  // 더한 값을 가지는 Matrix형 임시객체 tmp리턴
}
Matrix& operator +=(Matrix &op1, Matrix op2) { // 참조리턴으로 하지 않으면, 복사본을 증가시키는 문제 발생
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			op1.m[i][j] += op2.m[i][j]; // 참조매개변수로 받지 않았다면, 이 과정에서 복사본을 증가시켰을 것이다.
	return op1; // 참조 리턴
}
bool operator ==(Matrix op1, Matrix op2) { // ==연산자함수
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			if (op1.m[i][j] != op2.m[i][j])  // op1의 배열값과 op2의 배열값 비교. 다르면 false리턴
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