/******************************************************************************
This program demonstrates several methods to access arrays using pointers. It
will process an array using pointer notation, utilize subscript notation with
a pointer variable, and use the address of each element in the array. The array
notation (- value[i] -) is equivalent to the pointer notation ()- *(value + i)-)
*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
  const int SIZE = 5;     //Size of the array
  int number[SIZE];       //Array of 5 integers

  //Loop to get values and store in array using pointer notation
  cout << "Please enter 5 numbers." << endl;

  for(int i = 0; i < SIZE; i++){
    cin >> *(number + i);
  }

  //Show values stored in array
  cout << "The numbers you entered are shown below." << endl;

  for(int j = 0; j < SIZE; j++){
    cout << *(number + j) << " ";
  }

  cout << endl;

  //Use subscript notation and pointer notation

  const int COINS_NUM = 4;
  double coins[COINS_NUM] = {0.50, 0.25, 0.75, 0.88};
  double *pointerDouble;    //Pointer to a double

  //Assign address of the coins array to the pointer variable
  pointerDouble = coins;

  //Show contents of array using subscripts with pointer variable
  cout << "The following values are stored in the array: ";

  for(int k = 0; k < COINS_NUM; k++){
    cout << pointerDouble[k] << " ";
  }

  cout << endl;

  //Show array elements again using pointer notation with array namespace
  cout << "Again, the following values stored in the array are: ";

  for(int l = 0; l < COINS_NUM; l++){
    cout << *(coins + l) << " ";
  }

  cout << endl;

  //Use the address of each element in an array

  const int NUM_CARS = 6;
  double cars[NUM_CARS] = {12.5, 13.4, 8.9, 4.5, 3.2, 1.1};
  double *doublePointer;      //Pointer to a double

  //Display the values in the array using pointer
  cout << "The values stored in this cars array are: ";

  for(int m = 0; m < NUM_CARS; m++){
    doublePointer = &cars[m];
    cout << *doublePointer << " ";
  }

  cout << endl;

  return 0;
}
