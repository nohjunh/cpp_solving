/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0; // a가 검색되는 수 count
	int i = 0; // find 함수 시작 index값

	string s;
	cout << "문자열 입력>> ";
	getline(cin, s, '\n');

	while (1) {
		int index = s.find('a', i); // 스트링 s 에서 'a' 가 검색되면 그 인덱스값을 index에 저장
		if (index == -1) { // 검색되지 않으면 -1 반환
			break; // while문 종료
		}
		i = index + 1; // 검색된 'a' 그 다음 인덱스부터 다시 검색하기 위함
		count++; // 검색된 'a' 수 증가
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}

*/