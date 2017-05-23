/*********************************************
This program will show a table displaying the
areas of a circle each time the radius doubles.
The radius will double from 1 to 128 and display
the corresponding areas in table format.
**********************************************/

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
using std::left;

int main()
{
  const double PI = 3.14;  //Constant for PI
  double area;             //Area of circle
  int radius = 1;

  //Format table display
  cout << setw(3) << "Radius" << setw(6) << "Area" << endl;
  cout << "----------------" << endl;

  //Calculate and get area for radius doubling up to 128
  for(int radius = 1; radius <= 128; radius *= 2)
  {
    //Calculate area of circle
    area = radius * radius * PI;

    //Show radius 1 to 128 and calculated area of circle in table with data formatted to left
    cout << left << setw(2) << radius << fixed << showpoint << setprecision(2) << "\t" << area << endl;
  }

  return 0;
}
