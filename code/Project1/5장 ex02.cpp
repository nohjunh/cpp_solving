/*
#include <iostream>
using namespace std;

int main() {
	char ch;
	int count = 0;
	cout << "한 라인 입력: ";
	while (true) {
		cin.get(ch); // 키를 ch에 읽어옴
		if (cin.eof()) break; // EOF 문자 즉 ctrl-z키가 입력된 경우, 입력 종료
		cout.put(ch); // 읽은 문자 출력
		if (ch == '\n') { // <Enter> 키가 입력된 경우 읽기 중단
			break;
		}
		else if (ch == ' ') // ' ' (빈칸)이 입력된 경우
			count++; // count 증가 
	}
	cout << count << endl; // count값 출력
	return 0;
}
*/

#include <stdio.h>
#include <crtdbg.h>
#include <corecrt_malloc.h>
typedef struct Node {
	int data;
	struct Node* link;

}Node;

void printfNOde(Node* head) {
	Node* p = head;
	if (p == NULL) return;
	while (p->link != NULL) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("\n");
}

int main() {
	Node* first = NULL;
	int result=0, i;
	int array[5] = { 1,6,7,9,4 };

	for (i = 4; i >= 0; i--) {
		Node* p = (Node*)malloc(sizeof(Node));
		p->data = array[i];
		p->link = first;
		first = p;
		result += array[i];
	}

	printf("%d ", result);
	printfNOde(first);
	return 0;
}
