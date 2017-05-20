/****************************************************
This program will take input for the speed in MPH
and the amount of time traveled in hours. The output
of the program will use a loop to calculate how much
distance was covered for every hour of the trip.
*****************************************************/

#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main()
{
  double speed,
         distance,
         time;

  //Get speed in MPH
  cout << "Enter speed in MPH:" << endl;
  cin >> speed;

  //Input validation for speed if negative input entered
  while(speed < 0)
  {
    cout << "Please enter a positive value." << endl;
    cin >> speed;
  }

  //Get duration of trip
  cout << "Enter time traveled in hours:" << endl;
  cin >> time;

  //Input validation for time if negative input entered
  while(time < 0)
  {
    cout << "Please enter a positive value." << endl;
    cin >> time;
  }

  //while-loop initializer
  int hour = 1;

  //Table format display hour = (1,2,3,..time)
  cout << "Hour " << "    " << " Miles Traveled" << endl;
  //Table format
  cout << "------------------------" << endl;

  //Get distance for each hour of trip
  while (hour <= time)
{
  //Calculate distance
  distance = speed * hour;

  //Show hour and distance formatted by category
  cout << setw(2) << hour << setw(14) << distance << endl;

  //Incrementer
  hour++;
}

  return 0;
}
