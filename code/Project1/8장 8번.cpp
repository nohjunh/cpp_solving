/*
#include <iostream>
using namespace std;

class Printer {
    string model; // 모델명
    string manufacturer; // 제조사 
    int printedCount; // 인쇄매수
    int availableCount; //인쇄 종이 잔량
public:
    Printer(string model, string manufacturer, int availableCount) {
        this->model = model;
        this->manufacturer = manufacturer;
        this->availableCount = availableCount;
    }
    bool print(int pages) { // print()가 호출할 때마다 pages매의 용지를 사용
        printedCount = pages; // 인쇄매수에 매개변수로 들어온 pages수 할당
        if (availableCount < printedCount) { // 인쇄 종이 잔량보다 인쇄매수가 많으면 
            cout << "용지가 부족하여 프린트할 수 없습니다.\n"; // 실패
            return false;
        }
        else {
            availableCount -= printedCount; // 그렇지 않으면 인쇄 종이 잔량에서 인쇄매수를 빼서 현재 인쇄 종이 잔량 업데이트
            return true; // true 반환
        }
    }
    // getter들 
    string get_model() { return model; }
    string get_manufacturer() { return manufacturer; }
    int get_availableCount() { return availableCount; }
};

class InkJetPrinter :public Printer {
    int availableInk; // 잉크잔량 멤버를 추가적으로 가진다.
public:
    InkJetPrinter(string m, string mfacturer, int avbCount, int avbInk) :Printer(m, mfacturer, avbCount) {
        this->availableInk = avbInk;
    }
    ~InkJetPrinter() {}; // 소멸자
    void printInkJet(int pages) { // printInkJet(int pages)를 추가적으로 가짐
        // 교재 예제에서 pages수마다 잉크가 하나씩 줄어드는걸 확인할 수 있음.
        if (print(pages)) { //  pages매수값을 매개변수로 프린트 함수 호출
            if (availableInk > pages) { // 잉크잔량이 pages 수 보다 많으면
                availableInk -= pages; // 잉크잔량을 pages수 만큼 뺌
                cout << "프린트하였습니다. "<< endl;
            }
            else {
                cout << "잉크가 부족하여 프린트할 수 없습니다" << endl;
            }
        }
    }
    void show() { // show 함수
        cout << get_model() << " ," 
             << get_manufacturer()
             << " ,남은 종이 " << get_availableCount() 
             << ", 남은 잉크 " << availableInk << '\n'; }
};

class LaserPrinter :public Printer {
    int availableToner; // 토너 잔량
public:
    LaserPrinter(string m, string mfacturer, int avbCount, int avbtoner) :Printer(m, mfacturer, avbCount) {
        this->availableToner = avbtoner;
    }
    ~LaserPrinter() {}; // 소멸자
    void printLaser(int pages) { //printLaser(int pages)함수를 추가적으로 가짐.
        if (print(pages)) { 
            if (availableToner > pages) { //토너잔량이 pages 수 보다 많으면
                int count = (int)pages / 2; // 교재 예제에서 보면 레이저로 2매 인쇄했는데 토너가 1만 줄어든걸 확인 할 수 있음.
                availableToner -= count;  // 그래서 이런 식으로 코딩해봄.
                cout << "프린트하였습니다.\n";
            }
            else {
                cout << "토너가 부족하여 프린트할 수 없습니다\n";
            }
        }
    }
    void show() { // show 함수
        cout << get_model() << " ," 
            << get_manufacturer()
             << " ,남은 종이 " << get_availableCount() 
             << ", 남은 토너 " << availableToner << '\n'; }
};

int main() {
    int Select, pages; // 어떤 프린터를 사용할건지와 pages매 변수 받아옴
    char choose; // 계속 프린트 할지 말지 선택
    // 잉크젯 프린터 객체와 레이저 프린터 객체 동적 생성
    InkJetPrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* Laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : "; Ink->show();
    cout << "레이저 : "; Laser->show();
    cout << endl;

    while (true) {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> Select >> pages;
        switch (Select) { // 1번이면 잉크젯, 2번이면 레이저
        case 1:
            Ink->printInkJet(pages); // printInkJet함수 호출
            Ink->show();
            Laser->show();
            break;
        case 2:
            Laser->printLaser(pages); // printLaser함수 호출
            Ink->show();
            Laser->show();
            break;
        default:
            break;
        }
        cout << "계속 프린트 하시겠습니까(y/n)>>"; // 프린트 continue 여부 질문
        cin >> choose;
        cout << endl;
        if (choose == 'n') break;
        else continue;
    }

    delete Ink; // 동적해제
    delete Laser; // 동적해제

    return 0;
}
*/