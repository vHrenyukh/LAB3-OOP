#include "RealNumbersStorage.h"

RealNumbersStorage::RealNumbersStorage()
{
	this->realNumberList = vector<RealNumber>();
}

void RealNumbersStorage::addNumber(RealNumber number) {
	this->realNumberList.push_back(number);

}

RealNumber RealNumbersStorage::findMax()
{
	RealNumber currentMax = realNumberList[0];
	for (auto number : realNumberList) {
		if (number > currentMax) {
			currentMax = number;
		}

	}
	return currentMax;
}

RealNumber RealNumbersStorage::findMin()
{
	RealNumber currentMin = realNumberList[0];
	for (auto number : realNumberList) {
		if (number < currentMin) {
			currentMin = number;
		}

	}
	return currentMin;
}
