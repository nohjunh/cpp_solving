/*
#include <iostream>
#include <cstdlib> // 랜덤 정수를 발생시키기 위한 코드
#include <ctime> // 랜덤 정수를 발생시키기 위한 코드
using namespace std;

class EvenRandom{
	int seed = 0;
public:
	int next(); // rand() 값에서 짝수를 출력
	int nextInRange(int value1, int vlaue2); // value의 범위를 지정해줌  // value1 ~ value2 
};

int EvenRandom::next() {
	int value = rand(); // value 값 랜덤
	while (value % 2 == 1) {
		value = rand(); // vaule 값 랜덤
	}
	return value;
}
int EvenRandom::nextInRange(int value1, int value2) {
	int value = rand() % (value2 - value1 + 1) + value1; // mod를 이용해 rand() 값을 범위내로 제한 시킴.
	while (value % 2 == 1) {
		value = rand() % (value2 - value1 + 1) + value1; // 뒤에 +value1을 해준 이유는 시작범위를 표현해주기 위함.
	}
	return value;
}

int main() {
	EvenRandom r;

	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개--" << endl; // 짝수만 출력 
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX 사이에 랜덤한 정수
		cout << n << ' '; // 공백으로 구분
	}

	cout << endl << endl << "-- 2에서 10까지의 랜덤 정수 10개 --" << endl; // 짝수만 출력
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 정수
		cout << n << ' '; // 공백으로 구분
	}

	cout << "\n";

	return 0;
}

*/