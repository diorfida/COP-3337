#include <iostream>
#include "Complex.h"
#include <string>
#include <cmath>
using namespace std;

Complex::Complex()
{
    real = 0;
    img = 0;
}

Complex::Complex(double _real, double _img)
{
    real = _real;
    img = _img;
}

// get methods
double Complex::getReal()
{
    return real;
}

double Complex::getImg()
{
    return img;
}

// set methods
void Complex::setReal(double _real)
{
    real = _real;
}

void Complex::setImg(double _img)
{
    img = _img;
}

//other methods
void Complex::printComplex()
{
    string plusMinus;
    if(img < 0)
        plusMinus = " - ";
    else
        plusMinus = " + ";
    cout << real << plusMinus << abs(img) << "i" << endl;
}

Complex Complex::addition(Complex & comp)
{
    Complex result;

    result.setReal(comp.getReal() + real);
    result.setImg(comp.getImg() + img);

    return result;
}

Complex additionTwo (Complex & comp1, Complex & comp2)
{
    Complex result;

    result.setReal(comp1.getReal() + comp2.getReal());
    result.setImg(comp1.getImg() + comp2.getImg());

    return result;
}

Complex additionArray (Complex complexArray[], int size)
{
    Complex result;

    for(int i = 0; i < size; i++)
    {
        result.setReal(complexArray[i].getReal() + result.getReal());
        result.setImg(complexArray[i].getImg() + result.getImg());
    }

    return result;
}