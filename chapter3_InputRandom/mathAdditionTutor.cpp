/*******************************************************************************
 This program will randomly generate two integers (1-9) and prompt the user to
 enter the sum. The user may enter an input up to 3 times before the program
 will show the correct answer.
 *******************************************************************************/

#include <iostream>
#include <iomanip>
#include <ctime>

int main()
{
    //Initialize variables
    unsigned int randomInteger1, randomInteger2;
    int sum, answer;

    //Use the time function to get a "seed" value for srand
    randomInteger1 = time(0);
    randomInteger2 = time(0);
    srand(randomInteger1);
    srand(randomInteger2);

    //Randomly generate 2 numbers with values (1 - 9)
    randomInteger1 = rand() % 8 + 1;
    randomInteger2 = rand() % 8 + 1;

    //Calculate sum of randomly generated numbers
    sum = randomInteger1 + randomInteger2;

    //Solve equation output
    std::cout << "Solve the following equation." << std::endl;

    //Generate and format the random integers display
    std::cout << std::setw(2) << randomInteger1 << std::endl;
    std::cout << std::setw(1) << "+" << std::setw(1) << randomInteger2 << std::endl;
    std::cout << "–––" << std::endl;

    //Repeat input up to 3 times to get correct answer, or show answer after 3 attempts
    for (int i = 0; i <= 2; i++)
    {
        //Enter answer
        std::cin >> answer;

        //Condition if input is incorrect
        if(answer != sum)
        {
            std::cout << "Incorrect. Please try again." << std::endl;
            //insert condition for number of attempts
            if(i == 2)
                std::cout << "The correct answer is: " << sum << std::endl;
        }

        //Condition if input is correct
        if (answer == sum)
        {
            std::cout << "Correct! Great job!" << std::endl;
            break;
        }
    }

    return 0;
}
