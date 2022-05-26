/*

#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0; // 'a'가 발견되는 수를 저장하기 위한 변수

	string s;
	cout << "문자열 입력>> ";
	getline(cin, s, '\n'); // getline으로 문자열 받음 ( 공백 문자 포함 가능 + 단, \n를 만날 때까지 받을 수 있음)

	for (int i = 0; i < s.length(); i++) { // 스트링 s 길이만큼 for문
		if (s[i] == 'a') {  // 문자열 중에 'a' 발견되면,
			count++; // count값 증가
		}
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}
*/