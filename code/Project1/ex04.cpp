/*
#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void Test();
};
MyVector::MyVector(int n = 100, int val = 0) { // 중복된 생성자를 디폴트 매개변수를 가진 하나의 생성자로 작성
	mem = new int[n]; // int형 배열 동적할당
	size = n;
	for (int i = 0; i < size; i++) 
		mem[i] = val;
}
void MyVector::Test() { // 중복된 생성자가 잘 적용됐는지 확인할 Test 함수
	for (int i = 0; i < size; i++) {
		cout << mem[i] << " ";
	}
	cout << endl;
}

int main() {
	MyVector a, b(10, 1); // 중복생성자를 이용한 객체 생성
	a.Test(); // a 객체의 배열값 출력 (디폴트값이 들어간 객체이므로 크기100을 가지는 int형 배열에 각각 0의 값이 저장됨
	b.Test(); // b 객체의 배열값 출력 (크기 10을 가지는 int형 배열에 각각 1의 값이 10개 저장됨)

	return 0;
}
*/