#pragma once

#ifndef EXP_H
#define EXP_H

class Exp {
private:
	int itG1;
	int itG2;
public:
	Exp(int a, int b);
	Exp(int a);
	Exp();

	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);

};

#endif // !EXP_H
