/*
#include <iostream>
using namespace std;

class ArrayUtility2{
public:
	static int* concat(int s1[], int s2[], int size); // s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize); // s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적생성하여 리턴
};
int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* New = new int[size]; // s1과 s2를 연결한 새로운 배열을 동적생성
	cout << "합친 정수 배열을 출력한다." << endl;
	for (int i = 0; i < size / 2; i++) { // size 10이 들어오니까 size 절반은 s1의 배열 값을 저장
		New[i] = s1[i]; // New배열에 size절반만큼 s1의 배열 값 저장
		cout << New[i] << ' '; 
	}
	for (int i = size / 2; i < size; i++) { // 남은 size 절반부터 시작해서 size까지 배열 값을 저장
		New[i] = s2[i-size/2]; // New배열에 s1의 배열값을 저장하고 남은 공간에 s2의 배열 값 저장 // s2[i-size/2]를 해준 이유는 s2[0]부터 시작하기 위함.
		cout << New[i] << ' ';
	} cout << endl;
	return New;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int retSizeCheck = 0;
	int* RemoveNew = new int[size]; // s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) // s1의 i번째와 s2의 j번째의 값이 같다면 break;해서 저장 방지
				break;
			if (j == size - 1) // j가 size만큼 for문을 돌 때까지 break를 통해 for문이 깨지지 않았다면, s2[]에는 해당 s1[i]와 중복되는 값이 없다는 것.
				RemoveNew[retSizeCheck++] = s1[i]; // 그 s1[i]을 RemoveNew 배열에 집어넣음. RemoveNew 배열은 retSizeCheckk++을 통해 인덱스를 증가시킴.
		}
	}
	if (retSizeCheck == 0)  // 만약 retSizeCheck가 0이면 NULL 반환
		return NULL;
	retSize = retSizeCheck;

	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	int* New2 = new int[retSize]; // x[]에서 y[]를 뺀 결과를 저장할 새로운 New2 배열 동적할당 
	for (int i = 0; i < retSize; i++) {
		New2[i] = RemoveNew[i]; // RemoveNew 배열(s1에서 s2에 있는 숫자를 모두 삭제한 배열)의 값을 New2배열에 저장
		cout << New2[i] << ' ';
	} cout << endl;
	return New2;
}

int main() {
	int x[5], y[5], retSize; // size가 각각 5인 배열 2개 생성
	int* one, *two; // 동적생성된 배열을 가리킬 포인터변수 2개 선언

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	one = ArrayUtility2::concat(x, y, 10); // static 멤버 함수이므로 클래스명을 통해 호출가능
	two = ArrayUtility2::remove(x, y, 5, retSize); // // static 멤버 함수이므로 클래스명을 통해 호출가능


	return 0;
}
*/