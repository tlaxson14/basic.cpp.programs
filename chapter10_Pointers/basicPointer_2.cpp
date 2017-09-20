/******************************************************************************
Using the indirection operator (*) a pointer variable can indirectly access the
variable it is pointing to. (Example: *pointer) This program demonstrates that
a pointer can point to a different variable of the same data type.
*******************************************************************************/

#include<iostream>
using namespace std;

int main()
{

  int x = 100, y = 250, z = 75;     //Three integer variables
  int* pointer;                     //Pointer variable

  //Show the contents of integer variables x, y, z
  cout << "The values stored in x, y, and z are shown below." << endl;
  cout << "x = " << x << "\n" << "y = "<< y << "\n" << "z = " << z << endl;

  //Demonstrate pointer manipulation of integer values stored in x, y, z
  pointer = &x;       //Store the address of x in pointer variable
  *pointer *= 2;      //Double the value stored in x

  pointer = &y;       //Store the address of y in pointer variable
  *pointer += 5;      //Add 5 to the value stored in y

  pointer = &z;       //Store the address of z in pointer variable
  *pointer -= 50;     //Subtract 50 from the value stored in z

  //Show the contents of integer variables x, y, z
  cout << "The NEW values stored in x, y, and z are shown below." << endl;
  cout << "x = " << x << "\n" << "y = "<< y << "\n" << "z = " << z << endl;

  return 0;
}
