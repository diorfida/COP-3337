#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string input; // stores the user input

    cout << "Enter a string: ";
    getline(cin, input); // get the string from the user

    // use a loop to go through the odd indexes of the string and print them
    for(int i = 1; i < input.length(); i += 2)
    {
        cout << input[i];
    }

    cout << endl; // for readability :)
    
    return 0;
}