#pragma once
#include <iostream>
#include "DivisionExeption.h"
using namespace std;
class RealNumber
{
	double value;
public:
	RealNumber(double value);
	
	RealNumber operator+(RealNumber& number);
	RealNumber operator-(RealNumber& number);
	RealNumber operator*(RealNumber& number);
	RealNumber operator/(RealNumber& number);
	bool operator>(RealNumber& number);
	bool operator<(RealNumber& number);

	double getValue();

	friend ostream& operator<<(ostream& output, const RealNumber& number);

};

