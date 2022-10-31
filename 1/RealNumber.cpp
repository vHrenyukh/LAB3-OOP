#include "RealNumber.h"

RealNumber::RealNumber(double value)
{
    this->value = value;
}

RealNumber RealNumber::operator+(RealNumber& number)
{
    return RealNumber(this->value + number.value);
}

RealNumber RealNumber::operator-(RealNumber& number)
{
 
    return RealNumber(this->value - number.value);
}

RealNumber RealNumber::operator*(RealNumber& number)
{
    return RealNumber(this->value * number.value);
}

RealNumber RealNumber::operator/(RealNumber& number)
{
    if (number.value == 0) {
        throw DivisionExeption("Trying to divide by zero");
    }
    return RealNumber(this->value / number.value);

}

bool RealNumber::operator>(RealNumber& number)
{
    return this->value > number.value;
}

bool RealNumber::operator<(RealNumber& number)
{
    return this->value < number.value;
}

double RealNumber::getValue()
{
    return value;
}

ostream& operator<<(ostream& output, const RealNumber& number)
{
    output << number.value;
    return output;
}
