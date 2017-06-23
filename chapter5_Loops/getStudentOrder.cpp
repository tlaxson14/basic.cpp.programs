/***************************************************
 This program will take the input for the number
 of students in the class, allow first name input
 for each student, and then organize the students
 alphabetically by their first name. The output of
 the program will show who will stand at the front
 and end of the line. For simplicity, assume no
 two students have the same first name. The program
 will end by asking if user would like to enter
 another list.
****************************************************/

#include <iostream>
#include <cctype>       //toupper function library
#include <string>       //getline function library

//Namespaces being used
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string firstName,      //First name of student to initialize
           name,           //Loop string var to enter additional student names
           frontLine,      //Student assigned to front of the line
           backLine;       //Student assigned to the back of the line
    int numOfStudents;     //Number of students in class (1-20)
    char repeat;           //Repeat order

    do
    {
      //Get number of students in the class
      cout << "How many students are in the class?" << endl;
      cin >> numOfStudents;

      //Input validation for number of students to ensure (1-20)
      while (numOfStudents < 1 || numOfStudents > 20)
      {
        //Display error message
        cout << "Please enter a value 1-20." << endl;

        //Get number of students in class
        cin >> numOfStudents;
      }

      //Get first name of student for initial conditions (i = 1)
      cout << "Name of student no.1:" << endl;
      cin >> firstName;

      //Set initial condition using input from line 50
      frontLine = backLine = firstName;

      //Get names of students (from i = 2) until equal to number of students input
      for (int i = 2; i <= numOfStudents; i++)
      {
        //Get the name of the student
        cout << "Name of student no." << i << endl;
        cin >> name;

        //Condition if entered 'name' is less than front of line
        //name then replace the front of the line with entered name
        if (name < frontLine)
        {
            frontLine = name;
        }
        //Condition if entered 'name' is greater than back of line
        //name then replace the back of the line with entered name
        if (name > backLine)
        {
            backLine = name;
        }
      }

    //Show students at the front and back of the line arranged by alphabetical order
    cout << frontLine << " will stand at the front of the line and "
         << backLine << " will stand at the end of the line."
         << endl;

    //Ask to enter another list of students
    cout << "Would you like to enter another class of students? (Y/N)" << endl;
    cin >> repeat;
    }
    //Condition "to upper" any input to equal 'Y' - be it 'y' or 'Y'
    while(toupper(repeat) == 'Y');

    return 0;
}
