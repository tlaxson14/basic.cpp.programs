/*******************************************************************************
This program will take two inputs from the user and pass the inputs as arguments
to a function. Both inputs are initialized as integer variables, but are passed
by reference, rather the memory addresses of the variables are passed to the
swap function. The swap function will accept the pointer variables for type int
and logically reorder the inputted values to be read in the reverse order they
were inputted. It will do this by dereferencing the pointer variables passed as
arguments to the swap function.
*******************************************************************************/

#include<iostream>
using namespace std;

//Function prototype
void swap(int *, int *);

int main(){

    int value1, value2;

    //Get two integer inputs from user
    cout << "Enter two values and I will swap them." << endl;
    cout << "Value 1: ";
    cin >> value1;
    cout << "Value 2: ";
    cin >> value2;

    //Display inputs from user
    cout << "You entered " << value1 << " first and " << value2 << " second." << endl;
    cout << "I will now pass these values to a function and swap them." << endl;

    //Pass the memory addresses of the integer variables to swap function
    swap(&value1, &value2);

    return 0;
}

/******************************* swap function ********************************
This function will accept two pointers to integer variables and dereference the
pointer variables to work with them. The dereferenced pointers will be swapped
with each other, and the function will show the first value entered as the
second value and the second value entered now the first value.
*******************************************************************************/
void swap(int *x, int *y){
    int swapNum;

    //Assign first value to second value and vice-versa
    swapNum = *x;
    *x = *y;
    *y = swapNum;

    //Show newly swapped values using dereferenced pointers
    cout << "New Value 1: " << *x << "\n";
    cout << "New Value 2: " << *y << endl;
}
