#include <iostream>
using namespace std;

#include "Exp.h"

int k;
Exp::Exp() {
	itG1 = 1, itG2 = 1;
}

Exp::Exp(int a) {
	itG1 = a; itG2 = 1;
}

Exp::Exp(int a, int b) {
	itG1 = a; itG2 = b;
}

int Exp::getValue() {
	k = itG1;
	for (int i = 1; i < itG2; i++) {
		k*=itG1;
	}
	return k;
}

int Exp::getBase() {
	return itG1;
}

int Exp::getExp() {
	return itG2;
}

bool Exp::equals(Exp b) {
	return getValue() == b.getValue();
}

