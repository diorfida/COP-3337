#include <iostream>
#include <cmath> // for the square root function

using namespace std;

int main ()
{
    int input; // variable to store the user input

    // get the number from  the user
    cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    cin >> input;

    if(input < 0) // check if the number is negative
        cout << "The program does not accept negative numbers." << endl;
    else if(input <= 100) // make sure the number is within bounds
    {
        // find quotient and remainder
        int quotient = input / 4;
        int remainder = input % 4;

        // if remainder is zero, the number is divisible
        if(remainder == 0)
            cout << "The given number (" << input << ") is divisible by 4." << endl;
        else
            cout << "The given number (" << input << ") is not divisible by 4." << endl;

        // print the calcualted quotient and remainder
        cout << "Quotient: " << quotient << " Remainder: " << remainder << endl;
    }
    else // the number would have to be greater than 100 to get to this point
        cout << "The entered number is greater than 100 and square root of the number is " << sqrt(input) << endl;

    return 0;
}