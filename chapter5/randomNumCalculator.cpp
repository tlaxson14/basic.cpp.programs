/********************************************************************************
 This program will randomly select two integers (10-50) and wait for the user to
 enter a value. If incorrect, the program allows three attempts before displaying
 the correct answer.
 ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <ctime>

/*************************** getMenu function *****************************
Show menu of operations to perform. Addition, Multiplication, Division and
a sentinel value to end the program.
***************************************************************************/
int getMenu()
{
  int choice;

  //Show menu of available functions
  std::cout << "Choose one of the operations from the menu:" << std::endl;
  std::cout << "1.Addition\n" << "2.Subtraction\n" << "3.Multiplication\n" << "4.Division\n" << "5.Quit\n"
  << std::endl;

  //Get operation to perform
  std::cin >> choice;

  //Input validation
  while(choice < 1 || choice > 5)
  {
    std::cout << "Please enter a valid selection 1 - 5" << std::endl;
    std::cin >> choice;
  }

  return choice;
}


/****************************** getSum function ******************************
This function will randomly generate two numbers and ask the user to input the
answer. If the entry is incorrect the loop will allow 3 attempts before showing
the correct answer. The randomly generated integers range 10 - 100.
******************************************************************************/
void getSum()
{
  int randInt1,       //First random integer
      randInt2,       //Second random integer
      sum,            //Sum of random integers 1 & 2
      answer;         //Input for sum

  //Use the time function to get a "seed" value for srand
  randInt1 = static_cast<unsigned int>(time(0));
  randInt2 = static_cast<unsigned int>(time(0));
  srand(randInt1);
  srand(randInt2);

  //Randomly select 2 numbers with values between 10 - 100
  randInt1 = rand() % 90 + 10;
  randInt2 = rand() % 90 + 10;

  //Calculate sum of randomly generated numbers
  sum = randInt1 + randInt2;

  //Solve equation output
  std::cout << "Solve the following problem by addition." << std::endl;

  //Generate and format the random integers display
  std::cout << std::setw(3) << randInt1 << std::endl;
  std::cout << std::setw(1) << "+" << std::setw(1) << randInt2 << std::endl;
  std::cout << "–––-" << std::endl;

  //Repeat input up to 3 times to get correct answer, or show answer after 3 attempts
  for (int i = 0; i <= 2; ++i)
  {
      //Enter answer
      std::cin >> answer;

      //Condition if input is incorrect
      if(answer != sum)
      {
        //Show answer after 3 attempts
        if(i == 2)
        {
          std::cout << "The correct answer is " << sum << std::endl;
        }
        else
        {
          std::cout << "Incorrect. Please try again." << std::endl;
        }
      }
      //Condition if input is correct
      else
      {
          std::cout << "Correct! Excellent job!" << std::endl;
          break;
      }
    }
  }

/************************ getSubtraction function *****************************
This function will randomly generate two numbers and ask the user to input the
correct answer. If the entry is incorrect the loop will allow 3 attempts before
showing the correct answer. The randomly generated integers range 1 - 10.
*******************************************************************************/
void getSubtraction()
{
  int randInt1,       //First random integer
      randInt2,       //Second random integer
      minus,          //Subtraction of random integers 1 & 2
      answer;         //Input for sum

  //Use the time function to get a "seed" value for srand
  randInt1 = static_cast<unsigned int>(time(0));
  randInt2 = static_cast<unsigned int>(time(0));
  srand(randInt1);
  srand(randInt2);

  while(true)
  {
    //Randomly select 2 numbers with values between 10 - 100
    randInt1 = rand() % 100;  //Number between 1 - 100
    randInt2 = rand() % 99 + 1;   //Number between 1 - 99

    //Calculate sum of randomly generated numbers
    minus = randInt1 - randInt2;

    if((randInt1 > randInt2) && (minus > 0))
    {
      break;
    }
  }

  //Solve equation output
  std::cout << "Solve the following problem using subtraction." << std::endl;

  //Generate and format the random integers display
  std::cout << std::setw(3) << randInt1 << std::endl;
  std::cout << std::setw(1) << "-" << randInt2 << std::endl;
  std::cout << "–––" << std::endl;

  //Repeat input up to 3 times to get correct answer, or show answer after 3 attempts
  for (int i = 0; i <= 2; ++i)
  {
    //Enter answer
    std::cin >> answer;

    //Condition if input is incorrect
    if(answer != minus)
    {
      //Show answer after 3 attempts
      if(i == 2)
      {
        std::cout << "The correct answer is " << minus << std::endl;
      }
      else
      {
        std::cout << "Incorrect. Please try again." << std::endl;
      }
    }
    //Condition if input is correct
    else
    {
        std::cout << "Correct! Excellent job!" << std::endl;
        break;
    }
  }
}

/************************** getProduct function *******************************
This function will randomly generate two numbers and ask the user to input the
correct answer. If the entry is incorrect the loop will allow 3 attempts before
showing the correct answer. The randomly generated integers range 1 - 10.
*******************************************************************************/
void getProduct()
{
  int randInt1,     //First randomly generated integer 1 - 10
      randInt2,     //Second randomly generated integer 1 - 10
      product,      //Product of randInt1 * randInt2
      answer;       //User input for product

  //Use time function to seed values for srand function
  randInt1 = static_cast<unsigned int>(time(0));
  randInt2 = static_cast<unsigned int>(time(0));
  srand(randInt1);
  srand(randInt2);

  //Randomly select 2 numbers with values between 1 - 10
  randInt1 = rand() % 9 + 1;
  randInt2 = rand() % 9 + 1;

  //Calculate sum of randomly generated numbers
  product = randInt1 * randInt2;

  //Solve equation output
  std::cout << "Solve the following problem using multiplication." << std::endl;

  //Generate and format the random integers display
  std::cout << std::setw(3) << randInt1 << std::endl;
  std::cout << std::setw(1) << "x" << std::setw(2) << randInt2 << std::endl;
  std::cout << "–––-" << std::endl;

  //Repeat input up to 3 times to get correct answer, or show answer after 3 attempts
  for (int i = 0; i <= 2; ++i)
  {
      //Enter answer
      std::cin >> answer;

      //Condition if input is incorrect
      if(answer != product)
      {
        //Show answer after 3 attempts
        if(i == 2)
        {
          std::cout << "The correct answer is " << product << std::endl;
        }
        else
        {
          std::cout << "Incorrect. Please try again." << std::endl;
        }
      }
      //Condition if input is correct
      else
      {
          std::cout << "Correct! Excellent job!" << std::endl;
          break;
      }
  }
}

/*************************** getDivision function ******************************
This function will randomly generate two number and ask the user to enter the
correct answer. If the entry is incorrect the loop will allow 3 attempts before
showing the correct answer. The randomly generated integers range 0 - 100.
********************************************************************************/
void getDivision()
{
  int randInt1,     //First randomly generated integer
      randInt2,     //Second randomly generated integer
      divisor,      //Product of randInt1 * randInt2
      answer;       //User input for product

  //Use time function to seed values for srand function
  randInt1 = static_cast<unsigned int>(time(0));
  randInt2 = static_cast<unsigned int>(time(0));
  srand(randInt1);
  srand(randInt2);

  //Ensure top integer is evenly divided by bottom integer with 0 remainder
  while(true)
  {
    //Randomly select 2 numbers with values
    randInt1 = rand() % 100;      //0-100
    randInt2 = rand() % 99 + 1;   //1-99

    //Calculate sum of randomly generated numbers
    divisor = randInt1 / randInt2;

    if((randInt1 % randInt2 == 0) && (randInt1 > randInt2))
    {
      break;
    }
  }

  //Solve equation output
  std::cout << "Solve the following problem by division." << std::endl;

  //Generate and format the random integers display
  std::cout << randInt1 << "/" << randInt2 << " = ?" << std::endl;

  //Repeat input up to 3 times to get correct answer, or show answer after 3 attempts
  for (int i = 0; i <= 2; ++i)
  {
      //Enter answer
      std::cin >> answer;

      //Condition if input is incorrect
      if(answer != divisor)
      {
        //Show answer after 3 attempts
        if(i == 2)
        {
          std::cout << "The correct answer is " << divisor << std::endl;
        }
        else
        {
          std::cout << "Incorrect. Please try again." << std::endl;
        }
      }
      //Condition if input is correct
      else
      {
          std::cout << "Correct! Excellent job!" << std::endl;
          break;
      }
  }
}

int main()
{
    int choice;

    //Switch to each case from user input unless 4 is entered to quit program
    do
    {
      //Assign choice to return value from getMenu function
      choice = getMenu();

      //Switch choices based on menu input
      switch(choice)
      {
        //Menu choice '1'
        case 1:
        {
          //Call getSum function
          getSum();
          break;
        }
        //Menu choice '2'
        case 2:
        {
          //Call getSubtraction function
          getSubtraction();
          break;
        }
        //Menu choice '3'
        case 3:
        {
          //Call getProduct function
          getProduct();
          break;
        }
        //Menu choice '4'
        case 4:
        {
          //Call getDivision function
          getDivision();
          break;
        }
      }
    }
    //If menu choice equals '5' quit program
    while(choice != 5);

    return 0;
}
