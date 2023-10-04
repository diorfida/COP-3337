#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int getDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count ++;
    }
    return count;
}

inline double metersToFeet(int meter)
{
    return meter * 3.280;
}

void selection(int sel, bool comp)
{
    if(comp)
        cout << "Computer is ";
    else
        cout << "You are ";

    switch(sel)
    {
        case 0: cout << "scissor. "; break;
        case 1: cout << "rock. "; break;
        case 2: cout << "paper. "; break;
    }
}

void checkWinner(int user, int comp)
{
    if(user == comp)
        cout << "Tie." << endl;
    else if((user == 0 && comp == 1) || (user == 1 && comp == 2) || (user == 2 && comp == 0))
        cout << "You lose." << endl;
    else
        cout << "You win." << endl;
}

int main () 
{
    // part A
    cout << "Part A" << endl;
    cout << getDigit(39) << endl << getDigit(5232) << endl << endl;

    // part B
    cout << "Part B" << endl;
    cout << setw(10) << left << "Meters" << setw(10) << fixed << "Feet" << endl;
    for(int i = 1; i <= 15; i++)
    {
        cout << setw(10) << left << i << setw(10) << fixed << setprecision(3) << metersToFeet(i) << endl;
    }
    cout << endl;

    // part C
    cout << "Part C" << endl;

    int input = 0;

    do
    {
        if(input < 0 || input > 2)
            cout << "Invalid Input" << endl;
        
        cout << "scissor (0), rock (1), paper (2): ";
        cin >> input;
    } while (input < 0 || input > 2);

    srand(time(0));
    int computer = rand() % 3;
    selection(computer, true);
    selection(input, false);

    checkWinner(input, computer);


    return 0;
}