/******************************************
This simple program will take the average
of three exam scores using a do-while loop
to allow the user to repeat as many times
as they want. The program shows the use of
a do-while loop in addition to a purposeful
use for the "to upper" function.
*******************************************/

#include <iostream>
#include <iomanip>

//Namespaces used
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int examScore1,       //First exam score input
      examScore2,       //Second exam score input
      examScore3;       //Third exam score input
  double examAverages;  //Average of exam scores
  char repeat;          //Variable to repeat the loop

  //Do-while loop to get scores and repeat if user chooses
  do
  {
    //Get exam score 1
    cout << "Score for Exam 1:" << endl;
    cin >> examScore1;

    //Get exam score 2
    cout << "Score for Exam 2:" << endl;
    cin >> examScore2;

    //Get exam score 3
    cout << "Score for Exam 3:" << endl;
    cin >> examScore3;

    //Calculate average of exam scores
    examAverages = (examScore1 + examScore2 + examScore3) / 3.0;

    //Show average exam score
    cout << "Exam average: " << examAverages << endl;

    //Ask if user would like to enter another set of exam scores
    cout << "Would you like to enter another set? (Y/N)" << endl;
    cin >> repeat;
  }
  //Use "to-upper" function in case of 'y' entry on lines 48-49
  while (toupper(repeat) == 'Y');

  return 0;
}
