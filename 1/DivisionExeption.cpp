#include "DivisionExeption.h"

DivisionExeption::DivisionExeption(string message)
{
	this->message = message;
}

string DivisionExeption::getMessage()
{
	return message;
}
