/********************************************************************************
 This program will randomly select two integers (10-50) and wait for the user to
 enter a value. If incorrect, the program allows three attempts before displaying
 the correct answer.
 ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <ctime>

int main()
{
    //Initialize variables
    unsigned int randomInteger1, randomInteger2;
    int sum, answer;

    //Use the time function to get a "seed" value for srand
    randomInteger1 = static_cast<unsigned int>(time(0));
    randomInteger2 = static_cast<unsigned int>(time(0));
    srand(randomInteger1);
    srand(randomInteger2);

    //Randomly select 2 numbers with values between 10 - 50
    randomInteger1 = rand() % 40 + 10;
    randomInteger2 = rand() % 40 + 10;

    //Calculate sum of randomly generated numbers
    sum = randomInteger1 + randomInteger2;

    //Solve equation output
    std::cout << "Solve the following equation by addition." << std::endl;

    //Generate and format the random integers display
    std::cout << std::setw(3) << randomInteger1 << std::endl;
    std::cout << std::setw(1) << "+" << std::setw(1) << randomInteger2 << std::endl;
    std::cout << "–––-" << std::endl;

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
            std::cout << "Correct! Excellent job!" << std::endl;
            break;
        }
    }

    return 0;
}
