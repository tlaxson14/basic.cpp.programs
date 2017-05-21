/***********************************************************
This program is a modified program to show the conversions
of degrees Celsius and the corresponding degrees Fahrenheit
beginning at 0 degrees Fahrenheit up until the input number.
************************************************************/

#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::showpoint;
using std::setprecision;

int main()
{
  int fahr;       //Fahrenheit input (i.e. iteration count)
  double cels;    //Degrees Celsius

  //Get Fahrenheit temperature
  cout << "Enter temperature in degrees Fahrenheit:" << endl;
  cin >> fahr;

  //Format table
  cout << "Fahrenheit" << setw(12) << "Celsius" << endl;
  cout << "----------------------" << endl;

  //Show conversion table with initializer temp = 0
  for(int temp = 0; temp <= fahr; temp++)
  {
    //Calculate degrees Celsius from Fahrenheit
    cels = (5/9.0) * (temp - 32);

    //Show degrees Celsius from 0 to fahr input
    cout << setw(4) << temp << "       "
    << fixed << showpoint << setprecision(1) << setw(10) << cels
    << endl;
  }

return 0;

}
