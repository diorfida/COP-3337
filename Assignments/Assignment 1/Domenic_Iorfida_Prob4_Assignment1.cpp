#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // variable for storing user input
    float side;

    cout << "Enter the side: ";
    cin >> side; // get the side length

    // calculate and display the hexagon area
    cout << "The area of the hexagon is " << fixed << setprecision(2) << (6 * side * side) / (4 * tan(M_PI / 6)) << endl;
    
    return 0;
}