/*
#include <iostream>
using namespace std;

class Phone { // 전화번호를 표현하는 클래스 
    string name;
    string telnum;
    string address;
public:
    Phone(string name = "", string telnum = "", string address = "") {
        this->name = name;
        this->telnum = telnum;
        this->address = address;
    }
    // 사용자 삽입 연산자 // << 연산자가 참조 리턴
    friend ostream& operator << (ostream& stream, Phone p); // friend 선언(private필드에 접근하기 위함)
    // 사용자 추출 연산자 // 참조 리턴
    friend istream& operator >> (istream& ins, Phone& ph); // friend 선언(private필드에 접근하기 위함)         
};

//이들 연산자 함수는 외부 함수로 작성되어야 한다. 
// 사용자 삽입 연산자 구현 
ostream& operator << (ostream& stream, Phone p) {
    stream << "(" << p.name << "," << p.telnum << "," << p.address << ")";
    return stream; // 참조리턴
}
// 사용자 추출 연산자 구현
istream& operator >> (istream& ins, Phone& ph) { // 두 번째 매개변수를 참조 타입으로 선언하는 이유:
                                                 // 원본 객체에 값을 쓰기 위함.
    cout << "이름:";
    ins >> ph.name;
    cout << "전화번호:";
    ins >> ph.telnum;
    cout << "주소:";
    ins >> ph.address;
    return ins; //참조리턴
}

int main() {
    Phone girl, boy;
    cin >> girl >> boy; // 전화 번호를 키보드로부터 읽는다.
    cout << girl << endl << boy << endl; // 전화 번호를 출력한다.
    return 0;
}
*/