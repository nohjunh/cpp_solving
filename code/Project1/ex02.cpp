/*
#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public: 
	// 생성자 중복
	Person() { id = 1, weight = 20.5, name = "Grace"; } // 기본생성자
	Person(int id, string name) { this->id = id, this->name = name, weight = 20.5; } // id와 name, 매개변수를 2개 받는 생성자
	Person(int id, string name, double weight) { this->id = id, this->name = name, this->weight = weight; } // 매개변수를 3개 받는 생성자
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
	//컴파일러는 생성자함수의 호출에서 매개변수 개수와 타입에 따라 중복된 함수를 찾아 연결한다.
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show(); // grace는 기본생성자를 호출
	ashley.show(); // ashley는 매개변수 2개를 가지는 생성자 호출
	helen.show(); // helen은 매개변수 3개를 가지는 생성자 호출

	return 0;
}
*/