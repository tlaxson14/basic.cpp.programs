/****************************************
This program will use the constant that
3.9 calories are burned for every minute
on the treadmill, and display how many
calories are burned after: 5, 10, 15, 20,
25, and 30 minutes.
*****************************************/

#include<iostream>
#include<iomanip>

//Namespaces used
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::setw;

int main()
{
  double const CALORIES_PER_MIN = 3.9;   //Calories burned/minute on treadmill
  double caloriesBurned;                 //Calculated calories burned/minute

  //Display constant calories lost per minute
  cout << "You burn "  << CALORIES_PER_MIN << " calories per minute on the treadmill."
  << endl;

  //Format output table for minutes and calories burned
  cout << "Minutes  " << "  Calories" << endl;
  cout << "-------------------" << endl;

  //Set increment variable to 0
  int minute = 0;

  //Loop until 30 minutes reached
  while(minute <= 30)
  {
    //Calculate calories burned every 5 minutes
    caloriesBurned = CALORIES_PER_MIN * minute;

    //Format and show the minutes and calories burned in 5 min intervals
    cout << setw(3) << minute
    << setw(15) << fixed << showpoint << setprecision(1) << caloriesBurned
    << endl;

    //Increment by 5's in table
    minute += 5;
  }

  return 0;
}
