/*
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {}; // 기본 생성자
	string getName() { return name; } // 이름 getter
	string getTal() { return tel; } // 전화번호 getter
 	void set(string name, string tel);  // 이름 전화번호 setter
};

void Person::set(string name, string tel) { // set함수 구현
	this->name = name; // this포인터로 객체의 name멤버변수에 name매개변수 값 저장
	this->tel = tel; // 위와 같은 메커니즘
}

int main() {
	string Name, Tel;
	Person* personP = new Person[3]; // 3개의 Person 객체를 가지는 배열 동적 생성
	cout << "이름과 전화 번호를 입력해주세요 " << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> Name >> Tel; // 이름과 전화번호를 입력 받음.
		personP[i].set(Name, Tel); // 각 객체에 이름과 전화번호 셋팅
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << personP[i].getName() << " "; // 이름 출력
	}
	cout << "\n" << "전화번호를 검색합니다.  이름을 입력하세요>> ";
	string tem_name; // 임시로 입력받은 이름값 저장변수
	cin >> tem_name;
	for (int i = 0; i < 3; i++) {
		if (personP[i].getName().find(tem_name) != -1) { // tem_name값을 찾을 수 있으면,
			cout << "전화 번호는 " << personP[i].getTal() << endl;
			break;
		}
	}
	delete[] personP; // 배열 메모리 반환
	return 0;
}
*/