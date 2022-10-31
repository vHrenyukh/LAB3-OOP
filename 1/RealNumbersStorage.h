#pragma once
#include <vector>
#include "RealNumber.h"



class RealNumbersStorage
{
	vector<RealNumber> realNumberList;

public:
	RealNumbersStorage();
	void addNumber(RealNumber number);

	RealNumber findMax();

	RealNumber findMin();
};


