/*
#include <iostream>
#include <string>
using namespace std;

class Date {
	//멤버변수private
	int Year;
	int Month;
	int Day;

public:
	//멤버함수public
	Date() {}; // 기본생성자 (이 문제에서는 안써도 되지만 기본적으로 그냥 넣어봄.
	Date(int y_year, int m_month, int d_day); // _(언더바)로 형식인자와 실인자를 구분
	                                          // this를 활용해도 되지만 여기서는 이렇게 해봄
	Date(string fulldate); // 문자열을 매개변수로 받는 생성자

	// getter 
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y_year, int m_month, int d_day) { // 매개변수가 있는 생성자 구현
	Year = y_year;
	Month = m_month;
	Day = d_day;
}
Date::Date(string s) { // 문자열을 매개변수로 하는 생성자 구현
	int slash1, slash2; // '/' 의 index값 저장변수
	slash1 = s.find('/'); // 문자열의 첫번째 '/' 위치 index
	slash2 = s.find('/', slash1 + 1); // 첫번째 '/' 그 이후부터 검색된 '/' 위치 index
	Year = stoi(s.substr(0, slash1)); // 0번째 index 부터 첫 번째'/' 위치 전 사이에 문자열을 stoi로 int형변환 후 리턴
	Month = stoi(s.substr(slash1 + 1, slash2)); //(1번째'/'다음 index 부터 두 번째'/' 위치 전 사이에 문자열을 stoi로 int형변환 후 리턴
	Day = stoi(s.substr(slash2 + 1)); // 두 번째 '/' 뒤부터의 문자열을 stoi로 int형변환 후 리턴
}

void Date::show() { // show함수 구현
	cout << Year << "년 " << Month << "월 " << Day << "일" << endl;
}
int Date::getYear() { // getYear함수 구현
	return Year;
}
int Date::getMonth() { // getMonth 함수 구현
	return Month;
}
int Date::getDay() { // getDay 함수 구현
	return Day;
}


int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

}

*/