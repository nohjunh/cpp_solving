/*
#include <iostream>
#include <string>
using namespace std;

class SortedArray {
	int size; // 현재 배열의 크기
	int *p; // 정수 배열에 대한 포인터
	void sort(); // 정수 배열을 오름차순으로 정렬
public:
	SortedArray(); // p는 NULL로 size는 0으로 초기화
	SortedArray(SortedArray& src); // 복사생성자
	SortedArray(int p[], int size); // 생성자. 정수 배열과 크기를 전달받음
	~SortedArray(); // 소멸자
	SortedArray operator + (SortedArray& op2); // 현재 배열에 op2 배열 추가
	SortedArray& operator = (const SortedArray& op2); // 현재 배열에 op2 배열 복사
	void show(); // 배열의 원소 출력
};
void SortedArray::sort() { // 정수 배열을 오름차순으로 정렬
	int tmp; // 값을 받아줄 임시 변수
	for (int i = 0; i < size; i++) { // 배열의 크기만큼 for문
		for (int j = 0; j < size - i - 1; j++) { // for문을 i번 돌수록 오름차순으로 정렬되므로 j는 size-i-1을 해야 함.
			                                     // 그렇지 않으면 이미 정렬되있는 곳을 for 돌게 됨.
			if (p[j] > p[j + 1]) { // p[j] 와 p[j+1]을 비교. 만약 p[j]가 더 크면,
				tmp = p[j]; // 임시 변수에 p[j]를 넣고
				p[j] = p[j + 1]; // p[j + 1]을 p[j]에 넣고
				p[j + 1] = tmp; // 임시 변수에 있던 p[j]값을 p[j + 1]에 넣음.
				// 즉, 이 과정으로 두 값의 위치가 바뀜
			}
		}
	}
}
SortedArray::SortedArray() { // 기본생성자
	this->p = NULL; // p는 NULL로 초기화
	this->size = 0; // size는 0으로 초기화
}
SortedArray::~SortedArray() { // 소멸자. 배열 동적해제
	delete[] p;
}
SortedArray::SortedArray(int p[], int size) { // 매개변수를 2개 받는 생성자.
	this->size = size; // 크기 전달받음
	this->p = new int[size]; // 배열 동적할당
	for (int i = 0; i < size; i++) {
		this->p[i] = p[i]; // 매개변수로 들어온 배열값을 동적할당한 배열에 저장
	}
	sort(); // 정수 배열을 오름차순으로 정렬
}
SortedArray::SortedArray(SortedArray& src) { // 복사생성자
	this->size = src.size;
	this->p = new int[size]; // 새로운 배열을 동적할당 받아서
	for (int i = 0; i < size; i++) {
		this->p[i] = src.p[i]; // 이 새로운 배열에 매개변수로 들어온 src의 배열값을 저장함.
	}
	sort(); // 정수 배열을 오름차순으로 정렬
}
SortedArray SortedArray::operator +(SortedArray& op2) { // 현재 배열에 op2 배열 추가
	SortedArray tmp; // 임시객체
	tmp.size = this->size + op2.size; // op2의 size만큼 더 size를 더함.
	tmp.p = new int[tmp.size]; // 임시객체 배열 동적할당
	for (int i = 0; i < this->size; i++) {
		tmp.p[i] = this->p[i]; // 클래스 내 멤버함수로 연산자함수가 선언된 경우이므로 객체 자신의 배열 값을 tmp객체의 임시배열에 저장
	}
	for (int i = 0; i < op2.size; i++) {
		tmp.p[this->size + i] = op2.p[i]; // tmp객체 임시배열의 마지막 값부터 op2의 배열 값 추가로 저장
	}
	sort(); // 정수 배열을 오름차순으로 정렬
	return tmp; // 객체리턴이므로 복사생성자 호출됨.
}
SortedArray& SortedArray::operator =(const SortedArray& op2) {
	delete[] this->p; // = 연산자는 객체 자신의 배열 메모리를 모두 delete시키고,
	this->size = op2.size;
	this->p = new int[this->size]; // 객체 op2의 크기 만큼 다시 할당 받은 후 
	for (int i = 0; i < size; i++) { 
		this->p[i] = op2.p[i]; // 객체 op2의 배열 내용을 복사함
	}
	sort(); // 정수 배열을 오름차순으로 정렬
	return *this; // 참조리턴
}
void SortedArray::show() { // 배열 출력
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

int main() {
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b; // +, = 연산자

	// 문제에서 주어진 내용: a=b; 연산에서 = 연산자는 객체 a의 배열 메모리를 모두 delete 시키고
	//                       객체 b의 크기만큼 다시 할당받은 후 객체 b의 배열 내용을 복사하도록 작성.
	//                       +연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요
	a.show();
	b.show();
	c.show();
	return 0;
}
*/