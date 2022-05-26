/*
#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string DebugData[100][2]; // 2차원 배열(행에는 디버깅 정보의 갯수, 열에는 디버깅 정보의 Data(tag, str)) 선언
	static int index; // 디버깅 정보의 갯수 check
public:
	static void put(string tag, string str); // 디버깅 정보를 배열에 집어넣는 함수
	static void print(string tag = ""); // 디버깅 정보를 출력하는 함수
};

void Trace::put(string tag, string str) {
	DebugData[index][0] = tag; // tag명을 첫 번째 열에 집어넣음
	DebugData[index][1] = str; // str문자열을 두 번째 열에 집어넣음
	index++; // 배열에 있는 디버깅 정보 갯수 증가
}
void Trace::print(string tag) {
	if (!(tag=="")) { // 주어진 tag값이 ""이 아니라면 즉, 출력하고 싶은 실질적인 태그 값이 있다면
		cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < index; i++) { // 디버깅 전체 정보 for문 탐색
			if (DebugData[i][0] == tag) { // 디버깅 정보 중에서 tag값과 일치하는 디버깅 정보를 발견했다면
				cout << DebugData[i][0] << ":" << DebugData[i][1] << endl; // 그 디버깅 정보의 tag와 str 출력
			}
		}
	}
	else { // 주어진 tag값이 ""이라면 즉, 특정한 태그값이 주어진게 아니라면
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < index; i++) {
			cout << DebugData[i][0] << ":" << DebugData[i][1] << endl; // 모든 디버깅 정보 내용 출력
		}
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음"); // 디버깅 정보 저장
	c = a + b;
	Trace::put("f()", "합 계산"); // 디버깅 정보 저장
	cout << "합은 " << c << endl;
}

//초기값 설정
string Trace::DebugData[100][2] = {};
int Trace::index = 0;
//////////////////////////////////////////

int main() {
	Trace::put("main()", "프로그램 시작합니다"); // 디버깅 정보 저장
	f();
	Trace::put("main()", "종료"); // put()의 첫 번째 매개 변수는 태그이고
	                              // 두 번째 매개변수는 디버깅 정보이다.

	Trace::print("f()"); // "f()" 태그를 가진 디버깅 정보를 모두 출력한다.
	Trace::print(); // 모든 디버깅 정보를 출력한다.

	return 0;
}
*/