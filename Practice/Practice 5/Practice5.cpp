#include <iostream>

#include "Complex.cpp"

using namespace std;

int main()
{
    Complex num1;
    num1.setReal(2.4);
    num1.setImg(4.1);

    Complex num2(3.2, -3.6);

    num1.addition(num2);
    num1.printComplex();

    Complex num3 = additionTwo(num1, num2);
    num3.printComplex();
    
    return 0;
}