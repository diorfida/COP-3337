#include <iostream>
#include <string>

// some constants that are necessary to reference in the code
#define CONVERSION 97
#define SIZE 26

using namespace std;

int alphabet[26] = {0}; // array for storing the counts for each letter

// count function
void count (const string & s)
{
    for(int i = 0; i < s.length(); i++) // go through each character
    {
        char letter = tolower(s[i]); // make sure each letter is lowercase
        if(letter >= 97 && letter <= 122) // check that the character is a letter
            alphabet[letter - CONVERSION] ++; // increment the space in the alphabet counter array
    }
}

int main()
{
    string input; // user input variable

    // get the input from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // run the function
    count(input);

    // print all of the letters and their frequencies if they aren't zero
    for(int i = 0; i < SIZE; i++)
    {
        if(alphabet[i] > 0)
            cout << (char)(i + CONVERSION) << ": " << alphabet[i] << " times" << endl;
    }

    return 0;
}