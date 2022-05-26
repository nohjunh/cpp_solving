/*
#include <iostream>
using namespace std;

class CoffeeMachine {
	//멤버변수 선언부 private 
	int CoffeeData;
	int WaterData;
	int SugarData;
public:
	//멤버함수 선언부
	CoffeeMachine(int CoffeeData, int WaterData, int SugarData);
	//음료제조함수
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugerCoffee();
	//부가함수
	void fill(); // 각 data들 10으로 다시 셋팅
	void show(); // data 출력
};

CoffeeMachine::CoffeeMachine(int CoffeeData, int WaterData, int SugarData) { // 이번에는 this포인터로 멤버변수 초기화
	this->CoffeeData= CoffeeData;
	this->WaterData = WaterData;
	this->SugarData = SugarData;
}
void CoffeeMachine::drinkEspresso()
{
	CoffeeData -= 1; // 커피 1 소비
	WaterData -= 1; // 물 1 소비
}
void CoffeeMachine::drinkAmericano()
{
	CoffeeData -= 1; // 커피 1소비
	WaterData -= 2; // 물 2 소비
}
void CoffeeMachine::drinkSugerCoffee()
{
	CoffeeData -= 1; // 커피 1 소비
	WaterData -= 2; // 물 2 소비
	SugarData -= 1; // 설탕 1 소비
}
void CoffeeMachine::fill() // 각 data들 10으로 다시 셋팅
{
	CoffeeData = 10;
	WaterData = 10;
	SugarData = 10;
}
void CoffeeMachine::show()
{
	cout << "커피 머신 상태, 커피:" << CoffeeData << "  물:" << WaterData << "  설탕:" << SugarData << endl;
}

int main() {
	CoffeeMachine java(5, 10, 3); // 커피량: 5, 물량: 10; 설탕:6 으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현 상태 출력
	java.drinkSugerCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현 상태 출력
	java.fill(); // 커피량: 10  물량: 10  설탕 :10
	java.show(); // 현 상태 출력
	return 0;
}
*/