/******************************************************************************
This program will display the number of days in each month. It will initialize
two arrays: One integer array for the number of days in a month and one string
array for the names of the months. Both arrays are initialized with their
respective lists upon being created.
*******************************************************************************/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
  const int MONTHS_NUMBER = 12;   //Number of months

  //Initialize string array with names of months
  string monthName[MONTHS_NUMBER] =
              {"January", "February", "March", "April",
               "May",     "June",     "July",  "August",
               "September", "October", "November", "December"};

  //Initialize array for days in each month
  int days[MONTHS_NUMBER] = {31, 28, 31, 30,
                             31, 30, 31, 31,
                             30, 31, 30, 31};

  //Show number of days for each month with uniform output formatting
  for(int month = 0; month < MONTHS_NUMBER; month++){
    cout << setw(9) << left << monthName[month] << " has " << days[month] << " days." << endl;
  }

  return 0;
}
