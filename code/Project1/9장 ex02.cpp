/*
#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) =0; // src를 다른 단위로 변환
	virtual string getSourceString() =0; // src 단위 명칭
	virtual string getDestString() =0; // dest 단위 명칭
public:
	Converter(double ratio) { 
		this->ratio = ratio; // ratio값은 1mile값
	}
	void run() {
		double src; // 입력받을 km 값 받을 변수src
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src; // km값 입력받음
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter { // 추상클래스를 상속받은 KmToMile
public:
	KmToMile(double ratio = 0.0) : Converter(ratio) { } // src와 ratio가 double형이므로 초기값으로 0.0을 넣어줌

	string getSourceString() { return "Km"; } //  순수가상함수 구현 -> 온전한 클래스
	string getDestString() { return "Mile"; } //  순수가상함수 구현 -> 온전한 클래스

	double convert(double src) {// src는 변환하고 싶은 km이고 ratio는 1mile 값 // ratio값은 추상클래스 Converter에서 정의된 멤버 
		return src / ratio;
	} 
};

int main() {
	KmToMile toMile(1.609344); // 1 mile은 1.609344 km
	toMile.run();

	return 0;
}
*/