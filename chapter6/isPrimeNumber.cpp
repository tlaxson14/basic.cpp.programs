/*****************************************************
This program will use a function to determine if a
value entered by the user is a prime number. Program
limitations are values from 0 - 100 billion. If the
program determines the value entered is a prime number
then it will display all of the multiples.
Note: A prime number is any number that is divisible by
1 and itself. For example: The value 3 is prime b/c
it is divisible by only 1 and itself. However, the
value 4 is not prime because it is divisible by 1,2,4.
******************************************************/

#include<iostream>
#include<iomanip>

//Namespaces
using std::cout;
using std::cin;
using std::endl;

//Function prototype
bool isPrimeNum(int number);

int main()
{
  long long int number;       //Integer value to enter
  bool primeNum;              //Prime number value

  //Get number from user
  cout << "Please enter a number greater than 0." << endl;
  cin >> number;

  //Input validation for unsigned long long int
  while(number <= 0 || number > 100000000000)
  {
    //Show error message
    cout << "You did not enter a valid number. \n";
    cout << "Please enter a number greater than 0 and less than 100 billion." << endl;
    cin >> number;
  }

  //Call boolean function isPrimeNum passing number as argument
  primeNum = isPrimeNum(number);

  //Show number as prime or non-prime
  if(primeNum)
  {
    //Show prime number statement
    cout << "The number " << number << " is prime since it can only be divided by 1 and itself." << endl;
  }
  else
    //Show non-prime number statement
    cout << "Therefore, the number " << number << " is not prime." << endl;

  return 0;
}

/***************** isPrimeNum function ******************
This function will accept an integer value argument and
determine if this value is a prime number. If it it prime
the function will return true and false, otherwise.
*********************************************************/
bool isPrimeNum(int number)
{
  bool isPrimeNum = true;      //Boolean var initialized

  //Loop through all numbers and check for non-prime status
  //Begin with 2 since all numbers are divisible by 1
  for(int i = 2; i < number; i++)
  {
    //Condition if remainder is zero
    if(number % i == 0)
    {
      //Assign isPrimeNum to boolean value false for prime number
      isPrimeNum = false;

      //Show number the input is divisible by
      cout << "The number is divisible by " << i << "." << endl;

      //Terminate loop
      break;
    }
    else
      continue;
  }
  //Return boolean value back to main function after loop completion
  return isPrimeNum;
}
