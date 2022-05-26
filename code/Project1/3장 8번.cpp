/*

#include <iostream>
#include <string>
using namespace std;

class Integer {
	// 멤버변수
	int number;
public:
	// 멤버함수
	Integer(int number){ // 매개변수가 정수인 생성자
		this->number = number;
	}
	Integer(string s) { // 매개변수가 문자열인 생성자
		this->number = stoi(s); // 문자열을 받고 int형변환 후 number에 대입
	}
	int get() {
		return this->number; // number값 리턴
	}
	void set(int number) {
		this->number = number; // number값 셋팅
	}
	bool isEven() {
		if (number % 2 == 0) { // number의 값이 짝수라면,
			return true; // 정수로 1 반환
		}
		else {
			return false; 
		}
	}

};

int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력

	Integer m("300");
	cout << m.get() << ' '; // 300 출력
	cout << m.isEven(); // true(정수로 1) 출력
	cout << "\n";

	return 0;
}

*/