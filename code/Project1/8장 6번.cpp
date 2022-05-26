/*
#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // 배열의 크기
	int* mem; // 정수 배열을 만들기 위한 메모리의 포인터
protected: // 생성자가 protected에 있다. -> 파생클래스의 멤버함수에서 접근 가능
	BaseArray(int capacity = 100) { // 디폴트 capacity 매개변수 값 100
		this->capacity = capacity; mem = new int[capacity]; // capacity값에 따라 int형 배열 동적 생성 // ArrayStack으로 활용될거임.
	}
	~BaseArray() { delete [] mem; } // 소멸자
	void put(int index, int val) { mem[index] = val; } // Stack은 top에서만 연산이 일어나는데 굳이 index로 이런식으로 표현해야되나 싶기도 하지만,
	                                                   // 문제에서 이런 식으로 주어줬으므로 맞춰 작성했습니다.
	int get(int index) { return mem[index]; } // 현재 top에 있는 값 반환  
	int getCapacity() { return capacity; }    //capacity값 반환
};

class MyStack : public BaseArray { // BaseArray 클래스를 상속받아 스택으로 작동하는 MyStack 클래스
	int top; // 스택의 상단을 가리키는 top index
public:
	MyStack(int capacity) : BaseArray(capacity) { // 파생클래스의 생성자가 명시적으로 기본클래스 생성자 선택 호출
		top = -1;       // top이 -1로 초기값을 설정하는 이유는 배열인덱스가 0부터 시작하기 때문에 스택에 아무것도 안들어있을 경우를 고려해 -1로 설정
	}
	void push(int val) { 
		put(++top, val);   // ++top에서 전위연산자를 쓰는 이유는 top index값을 먼저 올려줘야 val이 맨 위에 들어갈 수 있음.
	}
	int pop() {
		return get(top--); // 반환형 int로 top--를 매개변수로
	}
	int capacity() { return getCapacity(); }
	int length() { return top + 1; } // top이 -1부터 시작이니까 +1을 해줘야 현재 length를 알 수 있다.
};

int main() {
	MyStack mStack(100);
	int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n); // 스택에 푸시
	}
	cout << "스택용량:" << mStack.capacity() << ", 스택크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {    // top + 1의 값이 0이 아니면 Stack 안에 아이템이 있다는거니까 스택에서 팝 가능
		cout << mStack.pop() << ' ';  // 스택에서 팝
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;

	return 0;
}
*/