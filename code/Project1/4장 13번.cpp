/*
#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string s;
	int Alpha[26] = { 0, };
public:
	Histogram(string s); // 문자열을 매개변수로 받음
	void put(string s1); // 문자열을 매개변수로 받음
	void putc(char c); // char형을 매개변수로 받음
	void print();
};

Histogram::Histogram(string s) { // 매개변수가 있는 생성자
	this->s = s+"\n"; // 매개변수에 들어온 문자열 객체의 스트링 객체 s에 저장
}
void Histogram::put(string s1) { // 매개변수로 들어오는 문자열 s1을 덧붙임
	this->s.append(s1); // s1을 s에 덧붙임.
}
void Histogram::putc(char c) {
	this->s += c; // char형 c를 문자열에 덧붙임.
}
void Histogram::print() {
	char c;
	int TotalAlpha = 0;
	cout << s << "\n\n"; // s문자열 출력 후 띄어쓰기 2번
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i]) >0 ) { // 만약, 알파벳이라면,
			c = tolower(s[i]); // 소문자 변환
			Alpha[c - 'a']++; // 그 소문자 값에서 'a'의 값을 뺌. 그럼 0~26의 값 사이
			TotalAlpha++; // 총 알파벳 수 증가
		}
	}
	cout << "총 알파벳 수 " << TotalAlpha << "\n\n"; // 총 알파벳 수 출력 후 띄어쓰기 2번
	
	for (int i = 0; i < 26; i++) {
		char c = 'a' + i; // 'a' ~ 'z' 까지 loop
		cout << c << " (" << Alpha[i] << ")\t"; // 알파벳 갯수 출력
		for (int j = 0; j < Alpha[i]; j++) { // 알파벳 갯수만큼 *표 출력
			cout << "*";
		}
		cout << endl;
	}
}

int main() { // 주어진 문제
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}
*/