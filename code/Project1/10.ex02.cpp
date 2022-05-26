/*
#include <iostream>
using namespace std;


template <class T> // 제네릭 함수를 만들기 위한 템플릿 선언 키워드
bool equalArrays(T data1[], T data2[], int n) { // 제네릭 타입 T형 매개변수 data1, data2
	for (int i = 0; i < n; i++) {
		if (data1[i] != data2[i]) { // 배열의 원소 비교해서 다르면,
			return false; // false 리턴
		}
		else { // 같으면,
			return true; // true 리턴
		}
	}
}
int main() {
	int x[] = {1, 10, 100, 5, 4}; // 예제 문제
	int y[] = {1, 10, 100, 5, 4}; // 예제 문제
	double k[] = { 2.3, 4.1, 4.1 }; // double형으로 해본 사례 추가
	double j[] = { 9.1, 3.2, 5.4 }; // k[]와 다르게 선언
	if (equalArrays(x, y, 5)) cout << "같다"; // 배열 x,y가 같으므로 "같다" 출력
	else cout << "다르다";
	cout << endl;
	if (equalArrays(k, j, 5)) cout << "같다"; // 배열 k,j가 다르므로 "다르다" 출력
	else cout << "다르다";
	cout << endl;
}
*/