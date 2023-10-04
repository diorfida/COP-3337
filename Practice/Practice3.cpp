#include <iostream>
#include <string>

using namespace std;

string swapCase(const string & n)
{
    string newString;
    for(int i = 0; i < n.length(); i++)
    {
        if(isupper(n[i]))
            newString += tolower(n[i]);
        else
            newString += toupper(n[i]);
    }
    return newString;
}

int main()
{
    // PART 1
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string swapped = swapCase(input);

    cout << swapped << endl;

    cout << endl;

    // PART 2
    int num = 5;
    int *p = &num;

    cout << "The value of the num is " << num << endl;
    cout << "The value of the num is " << *p << endl;
    cout << "The address of the num is " << &num << endl;
    cout << "The address of the num is " << p << endl;
    cout << "The value of the p pointer is " << p << endl;
    cout << "The address of the p pointer is " << &p << endl;
    
    return 0;
}