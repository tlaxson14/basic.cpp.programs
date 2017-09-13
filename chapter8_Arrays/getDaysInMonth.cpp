/******************************************************************************
This program is a variation of monthsDays.cpp program in which the difference
is the user is asked for input. The program will ask for which month the user
would like to know the number of days and then display the number of days for
the month the user requested.
*******************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main()
{
  const int MONTHS_NUMBER = 12;   //Number of months
  int month;                      //User month selection

  //Initialize string array with names of months
  string monthName[MONTHS_NUMBER] =
              {"January", "February", "March", "April",
               "May",     "June",     "July",  "August",
               "September", "October", "November", "December"};

  //Initialize array for days in each month
  int days[MONTHS_NUMBER] = {31, 28, 31, 30,
                             31, 30, 31, 31,
                             30, 31, 30, 31};

  cout << "This program will tell you how many days are in any month sans leap year." << endl;

  //Show list of months
    for(int i = 0; i < MONTHS_NUMBER; i++){
      cout << i + 1 << "." << monthName[i] << endl;
    }

  //Get month from user
  cout << "Please select the number of the month. (1-12)" << endl;
  cin >> month;

  //Input validation
  while(month <= 0 || month > 12){
    cout << "Please enter a valid month number 1 - 12." << endl;
    cin >> month;
  }

  //Show number of days for the month selected
  cout << left << monthName[month-1] << " has " << days[month-1] << " days." << endl;

  return 0;
}
