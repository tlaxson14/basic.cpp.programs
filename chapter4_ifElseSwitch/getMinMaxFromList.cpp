/*************************************************************************
This program takes any number of user value inputs and will determine and
show the maximum and minimum number from the set of inputs.
**************************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    int integerCount,   //Number of ints to enter
        num1,           //Input number 1
        num2,           //Input number 2
        maxNum,         //Maximum number
        minNum;         //Minimum number

    //Get number of inputs
    std::cout << "Please enter the number of integers you would like to determine max and min." << std::endl;
    std::cin >> integerCount;

    //Input validation
    if (integerCount <= 0)
        std::cout << "Please run the program again and enter a valid integer greater than zero." << std::endl;

    //Get first value
    std::cout << "Number 1: " << std::endl;
    std::cin >> num1;

    //Set initial conditions
    maxNum = num1;
    minNum = num1;

    //Determine max and min from number of inputs
    for (int i = 1; i <= integerCount - 1; i++)
    {
        std::cout << "Number " << i + 1 << ":" << std::endl;

        //Get input for condition comparison
        std::cin >> num2;

        //Condition for max
        if (num2 >= maxNum)
        {
            maxNum = num2;
        }

        if (num2 <= minNum)
        {
            minNum = num2;
        }
    }

    //Show min number entered
    std::cout << "Min. number: " << std::setw(2) << minNum << std::endl;

    //Show max number entered
    std::cout << "Max. number: " << std::setw(2) << maxNum << std::endl;

    return 0;
}
