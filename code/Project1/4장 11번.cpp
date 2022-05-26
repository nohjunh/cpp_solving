/*
#include <iostream>
#include <string>
using namespace std;

class Container { // 통 하나를 나타내는 클래스
	int size; // 현재 저장 량, 최대 저장량은 10
public:
	Container() { size = 10; }
	void fill(); // 최대량 (10)으로 채우기
	void consume(); // 1 만큼 소모하기
	int getSize(); // 현재 크기 리턴
};

class CoffeeVendingMachine { // 커피자판기를 표현하는 클래스
	Container tong[3]; // tong[0]는 커피, tong[1]은 물, tong[2]는 설탕통
	void fill(); // 3개의 통을 모두 10으로 채움
	void selectEspresso(); // 에스프레소를 선택한 경우, 커피 1, 물 1 소모
	void selectAmericano(); // 아메리카노를 선택한 경우, 커피 1, 물 2 소모
	void selectSugarCoffee(); // 설탕커피를 선택한 경우, 커피 1, 물 2 소모, 설탕 1 소모
	void show(); // 현재 커피, 물, 설탕의 잔량 출력
public:
	void run(); // 커피 자판기 작동
};
/////////Container 멤버함수 구현부
void Container::fill() { // 최대량 10으로 채우기
	this->size = 10;
}
void Container::consume() { // 1만큼 소모
	size--;
}
int Container::getSize() { // 현재 크기 리턴
	return size;
}
////////////CoffeeVendingMachine 멤버함수 구현부
void CoffeeVendingMachine::fill() { // 3개의 통을 모두 10으로 채움
	for (int i = 0; i < 3; i++) {
		tong[i].fill(); // Cotainer클래스의 fill()함수 이므로 10으로 채워지게 됨.
	}
	show(); // 채워진 값 출력
}
void CoffeeVendingMachine::selectEspresso() { // 커피 1, 물 1 소모
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) { // 커피가 1 이상 존재하고 물이 1이상 존재하면,
		tong[0].consume(); // 커피1 소모
		tong[1].consume(); // 물 1 소모
		cout << "에스프레소 드세요" << endl;
	}
	else { // 하나라도 잔량이 부족하면,
		cout << "원료가 부족합니다" << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() { // 커피 1, 물 2 소모
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) { // 커피가 1이상 존재하고 물이 2 이상 존재하면,
		tong[0].consume(); // 커피 1 소모
		tong[1].consume(); // 물 1소모
		tong[1].consume(); // 물 1소모 (총 물 2 소모)
		cout << "아메리카노 드세요" << endl;
	}
	else { // 하나라도 잔량이 부족하면,
		cout << "원료가 부족합니다" << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) { // 커피 1이상 존재, 물 2이상 존재, 설탕 1이상 존재하면,
		tong[0].consume(); // 커피 1소모
		tong[1].consume(); // 물 1소모
		tong[1].consume(); // 물 1소모 (총 물 2소모 )
		tong[2].consume(); // 설탕 1소모
		cout << "설탕커피 드세요" << endl; 
	}
	else { // 하나라도 잔량이 부족하면,
		cout << "원료가 부족합니다" << endl;
	}
}
void CoffeeVendingMachine::show() { // 각각의 통에 든 값들 출력
	cout << "커피 " << tong[0].getSize();
	cout << ", 물 " << tong[1].getSize();
	cout << ", 설탕 " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run() { // 커피자판기 작동
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (1) { // 무한 루프
		int menuNum;
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>)";
		cin >> menuNum;
		switch (menuNum) { // switch문으로 어떤 메뉴가 눌렸는지 확인.
		case 1: // 에스프레소 이면,
			selectEspresso();
			break;
		case 2: // 아메리카노 이면,
			selectAmericano();
			break;
		case 3: // 설탕커피 이면,
			selectSugarCoffee();
			break;
		case 4: // 잔량보기 이면,
			show();
			break;
		case 5: // 채우기 이면,
			fill();
			break;
		default:
			cout << "잘못 누르셨습니다." << endl;
			break;
		}
	}
}

int main() {
	CoffeeVendingMachine* coffee = new CoffeeVendingMachine; // 메모리 동적할당 
	coffee->run(); // run으로 자판기 작동
	delete coffee; // 메모리 반환

	return 0;
}

*/