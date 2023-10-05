#include <iostream>

using namespace std;

// function that counts the number of even digits in a number
int evenCount(int value)
{
    static int count = 0; // to keep track if we've run the function or not for the 0 case

    if(value == 0 & count > 0) // check if the value has reached 0 and this isn't the first time the function has ran
        return 0;
    else if(value % 2 == 0) // even digit case
    {
        count++;
        return 1 + evenCount(value / 10);
    }
    else // odd digit case
    {
        count++;
        return evenCount(value / 10);
    }

}

// implementation of the function
int main() 
{
    int input; // store user input

    // get user input
    cout << "Enter the number: ";
    cin >> input;

    // print the number of even digits
    cout << "The number of even digits is " << evenCount(input) << endl;
    
    return 0;
}