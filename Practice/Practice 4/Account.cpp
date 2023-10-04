#include "Account.h"


// constructors
Account::Account()
{
    balance = 0.0;
    id = 0;
    annualInterestRate = 0.0;
}

Account::Account(int _id, double _balance, double _annualInterestRate)
{
    balance = _balance;
    id = _id;
    annualInterestRate = _annualInterestRate;
}

// get methods
int Account::getId()
{
    return id;
}

double Account::getBalance()
{
    return balance;
}

double Account::getAnnualInterestRate()
{
    return annualInterestRate;
}

// set methods
void Account::setAnnualInterestRate(double _annualInterestRate)
{
    annualInterestRate = _annualInterestRate;
}

// other methods
double Account::getMonthlyInterestRate()
{
    return annualInterestRate / 12;
}

void Account::withdraw(double amount)
{
    balance -= amount;
}

void Account::deposit(double amount)
{
    balance += amount;
}