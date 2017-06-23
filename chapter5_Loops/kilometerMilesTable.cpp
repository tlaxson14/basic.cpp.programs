/*******************************************
This program will display a table of speed
conversions from 40 - 120Km/hr all into MPH.
********************************************/

#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::setw;

int main()
{
  double milesPerHour;  //Conversion variable to be calculated

  //Format table output
  cout << setw(3) << "KPH" << setw(11) << "MPH" << endl;
  cout << "----------------" << endl;

  //Show speed conversion for every 10Km/hr increase in speed
  for(int kiloPerHour = 40; kiloPerHour <= 120; kiloPerHour += 10)
  {
      //Calculate miles per hour conversion from KPH
      milesPerHour = static_cast<double>(kiloPerHour) * 0.6214;

      //Show KPH and conversion to MPH in table format
      cout  << setw(3) << kiloPerHour
      << setw(12) << fixed << showpoint << setprecision(2) << milesPerHour
      << endl;
  }

  return 0;
}
