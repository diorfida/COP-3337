#include <iostream>

#include "Account.h"

using namespace std;

int main()
{
    Account acc1;

    Account acc2(1122, 20000, 4.5);

    cout << acc2.getMonthlyInterestRate() << endl;
    cout << acc2.getBalance() << endl;

    Account acc3(1123, 15000, 8);

    cout << acc3.getBalance() << endl;

    return 0;
}