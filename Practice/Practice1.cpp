#include <iostream>
using namespace std;

int main() {
  // Practice Problem A
  cout << "Practice A" << endl;
  
  cout << "First Name: Domenic" << endl << "Last Name: Iorfida" << endl;

  int hours = 1.25*2*16 + 2 + 2 + 2.5*16;
  
  cout << "I am supposed to spend " << hours * 60 * 60 << " seconds studying C++ Programming" << endl;

  // Practice Problem B
  cout << endl << "Practice B" << endl;
  float distance;
  float mpg;
  float ppg;

  cout << "Enter the driving distance: ";
  cin >> distance;
  cout << "Enter miles per gallon: ";
  cin >> mpg;
  cout << "Enter price per gallon: ";
  cin >> ppg;

  float cost = distance / mpg * ppg;

  cout << "The cost of driving is $" << cost;
  
}