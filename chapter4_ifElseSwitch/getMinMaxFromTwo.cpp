/*************************************************************************
This program takes two integer value inputs and uses conditional operators
to show the maximum and minimum value input.
**************************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    int num1,       //First number
        num2,       //Second number
        maxNum,     //Maximum number
        minNum;     //Minimum number

    //Purpose
    std::cout << "Please enter two integers and I will give you the max and min." << std::endl;

    //Get first number
    std::cout << "First: " << std::endl;
    std::cin >> num1;

    //Get second number
    std::cout << "Second: " << std::endl;
    std::cin >> num2;

    //Find max and min
    if(num1 <= num2)
    {
        minNum = num1;
        maxNum = num2;
    }
    else
    {
        minNum = num2;
        maxNum = num1;
    }

    //Show min number entered
    std::cout << "Minimum number: " << std::setw(2) << minNum << std::endl;

    //Show max number entered
    std::cout << "Maximum number: " << std::setw(2) << maxNum << std::endl;

    return 0;

}
