#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    private:
        int id;
        double balance, annualInterestRate;

    public:
        // constructors
        Account();
        Account(int _id, double _balance, double _annualInterestRate);

        // get methods
        int getId();
        double getBalance();
        double getAnnualInterestRate();

        // set methods
        void setAnnualInterestRate(double _annualInterestRate);

        // other methods
        double getMonthlyInterestRate();
        
        void withdraw(double amount);

        void deposit(double amount);

};

#endif