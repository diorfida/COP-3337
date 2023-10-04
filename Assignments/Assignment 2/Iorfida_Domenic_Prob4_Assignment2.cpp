#include <iostream>
#include <cstdlib> // for the random function
#include <ctime> // to seed the random generator

using namespace std;

// function for randomly rolling a 6-sided dice
int roll()
{
    return rand() % 6 + 1;
}

// prints the value of the roll
void printRoll(int roll1, int roll2)
{
    cout << "You rolled " << roll1 << " + " << roll2 << " = " << roll1 + roll2 << endl;
}

// function for checking the first roll only
int checkCraps(int sum)
{
    if(sum == 2 || sum == 3 || sum == 12) // lose cases
    {
        cout << "You lose" << endl;
        return -1;
    }
    else if(sum == 7 || sum == 11) // win cases
    {
        cout << "You win" << endl;
        return -1;
    }
    else // point case
    {
        cout << "Point is " << sum << endl;
        return sum;
    }
}

int checkPoint(int sum, int point)
{
    if(sum == point) // win case
    {
        cout << "You win" << endl;
        return -1;
    }
    else if(sum == 7) // lose case
    {
        cout << "You lose" << endl;
        return -1;
    }
    else // keep rolling case
    {
        cout << "Keep rolling" << endl;
        return point;
    }
}

int main()
{
    srand(time(0)); // seed the random generator

    // get the first roll and print it
    int roll1 = roll();
    int roll2 = roll();
    printRoll(roll1, roll2);

    // check for the point and assign that vale to a point variable
    int point = checkCraps(roll1 + roll2);

    // if there is a point, keep rolling until one of the conditions is met
    while(point > 0)
    {
        // roll and print it
        roll1 = roll();
        roll2 = roll();
        printRoll(roll1, roll2);

        // check if one of the point conditions is met
        point = checkPoint(roll1 + roll2, point);
    }

    return 0;
}