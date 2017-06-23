/************************************************
This program will generate a random number from
1-100 and ask the user to guess the magic number.
The user will guess the number until correct using
the clues provided. After the magic number is
selected, a special message will appear along with
the number of attempts. The user may wish to re-run
the program & attempt to beat their previous score.
**************************************************/

#include<iostream>
#include<iomanip>
#include<ctime>

//Namespaces used
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int magicNum,      //Magic number to be randomized for guessing
      guess;         //Guess from user-input

  //Initialize with time to seed value for srand
  magicNum = time(0);
  srand(magicNum);

  //Generate a random number from 1 - 100 to guess
  magicNum = rand() % 100 + 1;

  //Get input for 'guess' from user
  cout << "Please enter your guess: " << endl;
  cin >> guess;

  //Input validation for guess
  while(guess < 0 || guess > 100)
  {
    cout << "Please enter a valid number between 1-100." << endl;
    cin >> guess;
  }
    
  //Guess count accumulator: value = 1 bec of line 37 input
  int guessCount = 1;

  //Do-While (Condition) - when guess is not equal to magic number
  do
  {
    if(guess < magicNum)   //Guess is lower than magic number
    {
      cout << "Your guess is too low." << endl;
      //Re-enter new guess
      cin >> guess;

      //Add one to the overall guess count
      guessCount += 1;
    }
    else if(guess > magicNum) //Guess is higher than magic number
    {
      cout << "Your guess is too high." << endl;
      cin >> guess;

      //Add one to the overall guess count
      guessCount += 1;
    }
    else  //Input validation
    {
      cout << "Please enter a valid number." << endl;
      cin >> guess;

      //Add one to the overall guess count
      guessCount += 1;
    }
  }
  while(guess != magicNum);

  //Condition if guess is equal to magic number 1 - 100
  if(guess == magicNum)
  {
      //Show special message and guess count for number of guesses
      cout << "Congratulations! You guessed my magic number!" << endl;

      //Show number of attempts to guess the magic number
      cout << "You guess the magic number in " << guessCount << " guesses!"
      << endl;

      //Show message to keep playing
      cout << "Play again and see if you can beat " << guessCount << "!"
      << endl;
  }

  return 0;
}
