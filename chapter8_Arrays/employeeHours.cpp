/******************************************************************************
This program will take input for the number of employees and create an integer
array of employees. One loop will ask for the number of hours each employee
worked and the other loop will display the hours worked for each employee.
*******************************************************************************/

#include<iostream>

using namespace std;

int main()
{
    int employeeNum;    //Number of employees

    //Get number of employees to enter
    cout << "How many employees would you like to enter?" << endl;
    cin >> employeeNum;

    //Input validation
    while(employeeNum < 0) {
      cout << "Please enter a valid number greater than 0." << endl;
      cin >> employeeNum;
    }

    //Initialize array and store number of hours worked for employees
    int employeeHours[employeeNum];

    //Show number of employees to enter hours
    cout << "You will now enter the number of hours worked by " << employeeNum << " employees." << endl;

    //Enter hours worked for each employee
    for(int i = 0; i < employeeNum; i++) {
        cout << "Please enter hours worked by employee " << i + 1 << ": ";
        cin >> employeeHours[i];

        while(employeeHours[i] < 0 || employeeHours[i] > 168) {
          cout << "Please enter a valid number of hours worked." << endl;
          cin >> employeeHours[i];
        }
    }

    //Show number of hours worked by employees
    for(int i = 0; i < employeeNum; i++) {
        cout << "Hours worked by employee " << i + 1 << ": ";
        cout << employeeHours[i] << endl;
    }

    return 0;
}
