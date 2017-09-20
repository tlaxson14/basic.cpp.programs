/*******************************************************************************
This program will demonstrate using pointers as function parameters. There are
three requirements to use a pointer as a function paramter:
    1. (*) Asterisk must be used on parameter in function prototype
    2. (*) Asterisk must be used in body to dereference the pointer
    3. Address (&) must be used in the function call
In this program, two functions will be defined and used that accept addresses
of variables as function arguments. A value will be entered and the resulting
doubleNum function will double the number and display the value.
*******************************************************************************/

#include<iostream>
using namespace std;

//Function prototypes
void getNum(int *);
void doubleNum(int *);

int main(){

  int num;

  //Call getNum function and pass the address of num to the function
  getNum(&num);

  //Call doubleNum function and pass the address of num to the function
  doubleNum(&num);

  //Show address of num and value stored in num -- i.e. "num" is the 2x value
  cout << "The address of num is: " << &num << endl;
  cout << "The value stored in num is: " << num << endl;

  //Show the values returned from getNum and doubleNum functions
  cout << "The value doubled is " << num << endl;

  return 0;
}

/******************************* getNum function ******************************
This function will use the parameter, value, as a pointer and ask the user for
an integer input. The value entered will be stored in the variable pointed to
by the value and returned to main function.
*******************************************************************************/
void getNum(int *value){

  //Get value input from user
  cout << "Please enter an integer number." << endl;
  cin >> *value;
}

/****************************** doubleNum function *****************************
This function will use the paramter, val, as a pointer. The function will double
the variable that val points to.
*******************************************************************************/
void doubleNum(int *val){

  //Multiply the value by two
  *val *= 2;
}
