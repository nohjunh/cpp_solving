/*
#include <iostream>
#include <string>
#include "Ram.h" // Ram 헤더파일 include
using namespace std;

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) { // 모든 배열값에 대해 초기화 
		mem[i] = 0; // 배열을 0으로 초기화
	}
	size = 100 * 1024; // size를 100*1024로 초기화
}
Ram::~Ram() {
	cout << "메모리 제거됨" << endl; // "메모리 제거됨" 문자열 출력
}
char Ram::read(int address) { // address 주소의 메모리 바이트 리턴
	return mem[address]; // address값=해당 배열 index
}
void Ram::write(int address, char value) { // address 주소에 한 바이트로 value 저장
	mem[address] = value; // value값을 해당 address값= index인 배열공간에 저장
}

*/
