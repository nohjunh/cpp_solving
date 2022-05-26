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
	/// 클래스의 멤버 함수로 선언되는 경우
	/// </summary>
	bool operator ==(int price);     // Book클래스의 피연산자로 int형을 비교하는 == 연산자 함수
	bool operator ==(string title);  // Book클래스의 피연산자로 string형을 비교하는 == 연산자 함수
	bool operator ==(Book& b);       // Book클래스의 피연산자로 Book객체를 비교하는 ==연산자 함수
};
bool Book::operator ==(int price) { // 피연산자로 int형을 비교하는 == 연산자 함수 구현부
	if (this->price == price) return true;  // 객체 자신의 price와 피연산자로 들어온 price값이 일치하면 true
	else return false;
}
bool Book::operator ==(string title) { // 피연산자로 string형을 비교하는 == 연산자 함수 구현부
	if (this->title.compare(title) == 0) return true; // title 비교
	else return false;
}
bool Book::operator ==(Book& b) { // 피연산자로 Book객체를 비교하는 == 연산자 함수 구현부
	if (this->title.compare(b.title) == 0
		&& this->price == b.price
		&& this->pages == b.pages) return true; // 객체 내 멤버변수 비교
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