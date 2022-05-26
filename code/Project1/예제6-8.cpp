/*
#include <iostream>
using namespace std;

char c = 'A';
char& find() {
	return c;
}

int main() {
	char a = find();
	printf("%c\n", a);

	char& ref = find();
	printf("%x\n", &c);
	printf("%x\n", &ref);

	find() = 'B';
	printf("%c\n", c);
}



#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int& b) {
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t);
}

*/