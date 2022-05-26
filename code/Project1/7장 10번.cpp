/*
#include <iostream>
#include <string>
using namespace std;

class Statistics{  // Statistics 클래스 
	int* a;   // 배열 동적할당에 필요한 int형 포인터
	int size; // 배열 size값 = 배열 안에 들어가는 원소의 갯수
public:
	Statistics(){
		a= new int[10]; // 배열 동적할당// 크기 10으로 초기값 설정
        size = 0; // size값의 초기값은 0
	}
    ~Statistics() { // 동적할당이니 해제를 위한 소멸자를 넣어줌
        delete[] a;
    }
    bool operator!(); // 통계 데이타 확인
    Statistics& operator<<(int num); // 통계 객체에 값 삽입
    void operator~(); // 통계 데이타 출력
    Statistics& operator>>(int& average); // 통계로부터 평균을 받음
};
bool Statistics::operator! () {
    if (this->size == 0) return true; // size가 0이면 현재 통계 데이타가 없다는 뜻 
    return false;
}
Statistics& Statistics::operator>> (int& average) { //통계 객체로부터 평균을 내는 연산자함수
    int sum = 0; // 배열 값들을 합산할 변수
    for (int i = 0; i < size; i++)
        sum += a[i];    // for문을 돌면서 배열a의 값들을 더함
    average = sum / size; // 배열 a의 값들을 다 더한 다음 size값으로 나누면 평균값이 나옴
    return *this; // 이 객체의 참조 리턴
}
Statistics& Statistics::operator<< (int num) { // 매개변수로 들어오는 값을 배열에 저장
    this->a[size] = num;
    size++;
    return *this;
}
void Statistics::operator~ () {
    for (int i = 0; i < size; i++)
        cout << this->a[i] << ' '; // size값만큼 배열에 있는 통계 데이타 출력
    cout << endl;
}

int main() {
	Statistics stat;
	if(!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i]; // x[i]에 정수 입력

	for (int i = 0; i < 5; i++) stat << x[i];  // x[i] 값을 통계 객체에 삽입한다.
	stat << 100 << 200; // 100, 200 을 통계 객체에 삽입한다. 
	~stat; // 통계 데이타를 모두 출력한다.

	int avg;
	stat >> avg; // 통계 객체로부터 평균을 받는다.
	cout << "avg=" << avg << endl; // 평균을 출력한다.

	return 0;
}
*/