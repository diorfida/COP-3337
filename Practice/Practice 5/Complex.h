#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    private:
        double real;
        double img;
    
    public:
        Complex();
        Complex(double _real, double _img);

        // get methods
        double getReal();
        double getImg();

        // set methods
        void setReal(double _real);
        void setImg(double _img);

        //other methods
        void printComplex();
        Complex addition(Complex & comp);
};

Complex additionTwo (Complex & comp1, Complex & comp2);

Complex additionArray (Complex complexArray[], int size);

#endif