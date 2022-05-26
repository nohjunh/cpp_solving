/*
#include <iostream>
#include <string>
#include <cstdlib>// 랜덤 정수를 발생시키기 위한 코드  
#include <ctime>  // 랜덤 정수를 발생시키기 위한 코드
using namespace std;

int main() {
	string s;

	while (1) {
		cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.) " << endl;
		cout << ">>";
		getline(cin, s, '\n'); // 문자열을 받음
		if (s == "exit") { // 입력받은 문자열이 exit이면,
			break; // while문 종료
		}
		srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤 수를 발생시키기 위한 seed 설정
		int n = rand() % s.length(); // 랜덤정수 % 문자열의 길이 => 문자열의 길이를 초과한 n값을 만들지 않음.
		char random = rand() % 26 + 97; //영문소문자 26개만큼 %를 해줘서 26 초과값을 못가지게 하고 'a'의 10진수 값을 추가해 소문자를 표현
		s[n] = random; // s[n]에다가 랜덤한 문자 대입
		cout << s << endl;
	}

	return 0;
}
*/