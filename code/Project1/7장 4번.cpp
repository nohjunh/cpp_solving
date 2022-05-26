/*
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) { // 디폴트 매개변수를 갖는 Book 클래스 생성자
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	friend bool operator < (string str, Book b); // Book 클래스에 연산자함수를 프렌드로 선언
};
bool operator < (string s, Book b) { // operator<(string s, Book b) 연산자 함수를 외부함수로 선언
	if (s.compare(b.title) < 0) return true; // compare 함수는 str보다 사전 순으로 앞에 오면 음수, 뒤에 오면 양수를 리턴함.
	                                         // s가 사전순으로 앞에 오면 음수 리턴
	else return false;
}

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b); // 키보드로부터 문자열로 책 이름을 입력 받음
	if (b < a) // a객체의 Title이랑 b객체의 string 값을 사전순으로 비교
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl; 
	return 0;
}

*/