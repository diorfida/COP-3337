#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger 
{
    private:
        int value;
        static double averageOfIntegers;
        static int sumOfIntegers;
        static int numOfObjects;

    public:
        MyInteger(int _value);

        int getValue() const;
        bool isEven() const;
        static bool isOdd(int num);
        bool equals(int num) const;
        bool equals(const MyInteger & myInt) const;
        static double getAverageOfIntegers();
};

#endif