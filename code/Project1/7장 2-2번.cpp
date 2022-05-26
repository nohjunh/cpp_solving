/*
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) { // Book클래스 디폴트 매개변수를 가지는 생성자
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() { // 해당 객체의 내용 출력하는 show함수
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; } // title값 리턴하는 getter

	/// <summary>
	/// 연산자 함수를 외부 함수로 작성하고 Book클래스에 프렌드로 선언
	/// </summary>
	friend bool operator ==(Book a, int price);     // Book클래스의 피연산자로 Book객체와 int형을 받아 비교하는 == 연산자 함수
	friend bool operator ==(Book a, string title);  // Book클래스의 피연산자로 Book객체와 string형을 받아 비교하는 == 연산자 함수
	friend bool operator ==(Book a, Book& b);       // Book클래스의 피연산자로 Book객체와 Book객체를 받아 비교하는 ==연산자 함수
};

bool operator ==(Book a, int price) { // 피연산자로 들어온 객체와 int형을 비교하는 == 연산자 함수 구현부
	if (a.price == price) return true;  // 피연산자로 들어온 Book객체의 price값과 price값이 일치하면 true
	else return false;
}
bool operator ==(Book a, string title) { // 피연산자로 들어온 객체와 string형을 비교하는 == 연산자 함수 구현부
	if (a.title.compare(title) == 0) return true; // 위와 동일한 메커니즘으로 title 비교
	else return false;
}
bool operator ==(Book a, Book& b) { // 피연산자로 들어온 객체와 Book객체를 비교하는 == 연산자 함수 구현부
	if (a.title.compare(b.title) == 0  // 위와 동일한 메커니즘으로 객체내 멤버변수 비교
		&& a.price == b.price
		&& a.pages == b.pages) return true; 
	else return false;
}

int main() {
	Book a("명품 C++", 30000, 500), b("고품 c++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교

	return 0;
}
*/