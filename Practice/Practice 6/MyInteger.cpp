#include "MyInteger.h"

double MyInteger::averageOfIntegers = 0;
int MyInteger::sumOfIntegers = 0;
int MyInteger::numOfObjects = 0;

MyInteger::MyInteger(int _value)
{
    value = _value;
    numOfObjects++;
    sumOfIntegers += value;
    averageOfIntegers = sumOfIntegers / (double)numOfObjects;
}

int MyInteger::getValue() const
{
    return value;
}

bool MyInteger::isEven() const
{
    if(value % 2 == 0)
        return true;
    else
        return false;
}

bool MyInteger::isOdd(int num)
{
    if(num % 2 == 0)
        return false;
    else
        return true;
}

bool MyInteger::equals(int num) const
{
    if(value == num)
        return true;
    else
        return false;
}

bool MyInteger::equals(const MyInteger & myInt) const
{
    if(myInt.getValue() == value)
        return true;
    else
        return false;
}

double MyInteger::getAverageOfIntegers()
{
    return averageOfIntegers;
}