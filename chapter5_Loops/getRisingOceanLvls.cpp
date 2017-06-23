/*************************************************
This program will take a constant that oceans are
rising at about 3.1 mm per year. With this, the
program will be able to forecast the amount the
ocean is expected to rise over the next 25 years
for both millimeters and inches per year.
**************************************************/

#include<iostream>
#include<iomanip>

//Namespaces being used
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::setw;

int main()
{
  //Constant for ocean rising/year in mm
  const double RISE_PER_YEAR_MM = 3.1;
  //Constant in inches conversion based on rise/year in mm
  const double RISE_PER_YEAR_INCH = (RISE_PER_YEAR_MM * 0.0393701);
  double oceanRiseMillim,   //Calculated variable in mm
         oceanRiseInches;   //Calculated variable in inches

  //Show outputs of years and rises in table format
  cout << setw(3) << "Year"
  << setw(15) << "Rise (mm)"
  << setw(18) << "Rise (inches)"
  << endl;
  cout << "-------------------------------------" << endl;

  //Increment variable start at 0
  int year = 0;

  //Show the total number of mm and inches the ocean will rise
  //for the next 25 years
  while(year <= 25)
  {
    //Calculate the ocean rise per year in mm
    oceanRiseMillim = RISE_PER_YEAR_MM * year;

    //Calculate the ocean rise per year in inches
    oceanRiseInches = RISE_PER_YEAR_INCH * year;

    //Show rising ocean numbers in table format
    cout << setw(3) << year
    << setw(15) << fixed << showpoint << setprecision(2) << oceanRiseMillim
    << setw(15) << fixed << showpoint << setprecision(2) << oceanRiseInches
    << endl;

    //Increment loop variable
    year++;
  }

  return 0;
}
