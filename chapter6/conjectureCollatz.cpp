/*************************************************************
This program will take some integer input and perform a series
of steps to eventually reach the value 1 -- more formally known
as the Collatz conjecture.
The conjecture says take any positive integer n, such that n
is greater than 1, and there exists a finite number of steps
to arrive back at the integer 1. If n is even then
the input value will be halfed. If n is odd the value will be
entered into the 3x+1 problem for the value x.
**************************************************************/

#include<iostream>
#include<iomanip>

//Function prototype
int getHailstone(int value);

int main()
{
  long int value = 0;         //Integer input value
  int count;                  //Number of iterations to reach 1

  //Get integer value n
  std::cout << "Please enter some integer n: ";
  std::cin >> value;

  //Input validation greater than 1
  while(value <= 0)
  {
    std::cout << "Please enter a positive integer greater than 1. ";
    std::cin >> value;
  }

  //Call hailstone function and return number of steps to reach 1
  count = getHailstone(value);

  //Show how many steps to reach integer value 1
  //Count - 1 because count initialized to 1 in function for formatting output
  std::cout << "It took " << count - 1 << " steps to reach 1." << std::endl;

  return 0;
}

/******************** getHailstone function *****************
This function will take the input integer value and use it to
perform a series of calculations in order to end up at 1.
*************************************************************/
int getHailstone(int valuePassed)
{
  int iterations = 1;    //Number of steps to reach 1
                         //Initialized to 1 for output formatting

  //Condition to continue sequence until value is equal to 1
  while(valuePassed != 1)
  {
    //If value is even
    if(valuePassed % 2 == 0)
    {
      //Divide by 2
      valuePassed = (valuePassed / 2);
    }
    //If value is odd
    else
    {
      //Multiply by 3 and add 1 to value
      valuePassed = (valuePassed * 3) + 1;
    }

    //Display number of iterations and current integer value in sequence
    std::cout << iterations << " - "<< std::setw(3) << std::right << valuePassed << std::endl;

    //Increment
    ++iterations;
  }

  //Return number of iterations to main function
  return iterations;
}
