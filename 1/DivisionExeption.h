#pragma once
#include <string>

using namespace std;

class DivisionExeption
{
	string message;
public:
	DivisionExeption(string message);
	string getMessage();
};

