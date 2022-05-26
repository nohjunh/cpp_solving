/*
// 헤더파일 중복 include를 피하기 위한
// 조건 컴파일 문 선언
#ifndef RAM_H
#define RAM_H

class Ram {
	char mem[100 * 1024]; // 100KB 메모리. 한 번지는 한 바이트이므로 char 타입 사용
	int size;
public:
	Ram(); // mem 배열을 0으로 초기화하고 size를 100*1204로 초기화
	~Ram(); // " 메모리 제거됨 " 문자열 출력
	char read(int address); // address 주소의 메모리 바이트 리턴
	void write(int address, char value); // address 주소에 한 바이트로 value 저장
};

#endif // ! 조건 컴파일문 end
*/