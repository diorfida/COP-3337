#include <iostream>

using namespace std;

int main () 
{
    int input = 0; // user input

    do
    {
        if(input < 0 || input > 1000000) // tell the user that what they entered is invalid
            cout << "Entered integer is not in range." << endl;

        cout << "Enter an integer between 0 and 1000000: ";
        cin >> input; // get user input

    } while(input < 0 || input > 1000000); // repeat until something valid is entered

    int sum = 0; // create a variable to store the sum
    int tracker = 0; // this essentially tracks if the do while loop has been run before
    
    do
    {
        // things to reset code for multiple iterations
        if(tracker > 0)
        {
            cout << "Sum has more than one digit. Repeating adding process." << endl;
            input = sum;
            sum = 0;
        }

        // keep excecuting until all of the digits are added
        while(input > 0)
        {
            sum += input % 10; // gets the digit for the sum
            input /= 10; // removes the digit from the input value
        }

        cout << "The sum of the digits is " << sum << "." << endl; // print result
        tracker++;
    } while (sum > 10);
    
    return 0;
}