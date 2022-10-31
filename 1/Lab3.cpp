#include "RealNumbersStorage.h"

int main()
{
	RealNumbersStorage storage = RealNumbersStorage();
	RealNumber number1(0.45);
	RealNumber number2(3);
	RealNumber number3(1.2);

	storage.addNumber(number1);
	storage.addNumber(number2);
	storage.addNumber(number3);

	cout << "1 number: " << number1 << endl;
	cout << "2 number: " << number2 << endl;
	cout << "3 number: " << number3 << endl << endl;

	cout << "MAX number: " << storage.findMax() << endl;
	cout << "MIN number: " << storage.findMin() << endl << endl;

	cout <<"Adding 1 and 2 numbers: " << number1 + number2 << endl;
	cout << "Substraction  1 and 3 numbers: " << number1 - number3 << endl;
	cout << "Multiplication 2 and 3 numbers: " << number2 * number3 << endl;
	try
	{
		cout << "Division 1 and 2 numbers: " << number1 / number2 << endl;
	}
	catch (DivisionExeption& e)
	{
		cout << e.getMessage() << endl;
	}
	

}