/******************************************************************************
This is a simple program that will initialize a variable and store the address
of the variable in a pointer. A pointer variable is a variable that stores or
holds an address and provides an alternate way to access memory locations. In
addition, the program will demonstrate use of the indirection operator to
indirectly access and modify the variable being pointed to. When the indirection
operator is placed in front of the pointer variable name it dereferences the
pointer and therefore allows the value the pointer is pointing to to be modified.
******************************************************************************/

#include<iostream>

using namespace std;

int main()
{
  int x = 120;      //integer variable
  int* pointer;     //pointer variable that points to an integer variable

  //Store the address of the integer variable 'x' in pointer variable
  pointer = &x;

  //Show the address of the integer variable 'x' using ampersand (1)
  cout << "The address of x is " << &x << endl;

  //Show the value stored in the integer variable 'x' (2)
  cout << "The value stored in x is " << x << endl;
  cout << "The value stored in x is " << *pointer << endl;

  //Show the address of 'x' using pointer variable -- same as (1) above
  cout << "The address of x is " << pointer << endl;

  //Demonstrate use of indirection operator (*)
  //Assign the dereferenced pointer a new value
  *pointer = 100;

  //Show both 'x' and pointer variable values -- same values!
  cout << "The value of x is " << x << endl;
  cout << "The value of x is " << *pointer << endl;

  return 0;
}
