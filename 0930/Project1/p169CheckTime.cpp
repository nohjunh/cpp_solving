/*
#include <iostream>
using namespace std;

class Sample {
	int a;
public:
	Sample() {
		a = 100;
		cout << a << ' ';
	}
	Sample(int x) {
		a = x;
		cout << a << ' ';
	}
	Sample(int x, int y) {
		a = x * y;
		cout << a << ' ';
	}
	int get() {
		return a;
	}
};
int main() {
	Sample arr[3];
	Sample arr2D[2][2] = { {Sample(2,3), Sample(2,4)}, {Sample(5), Sample()} };
	cout << "\n\n";

	int sum = 0;
	Sample* p= arr;
	//cout<< arr++ ->get(); // 배열의 이름은 첫번쨰 주소를 가리키는데 이렇게하면 배열의 시작주소가 바뀌므로 문제가 된다.
	for (int i = 0; i < 3; i++) {
		sum += (*p++).get();
	}
	cout << sum<<"\n";
}
*/