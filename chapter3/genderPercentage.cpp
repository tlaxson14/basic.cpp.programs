/**********************************************************************************
This program takes the values for number of boys and girls in a classroom and
computes the percentages of boys and girls relative to the total class size.
**********************************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    //Initialize variables
    int numberOfBoys, numberOfGirls, classSize;
    double boysPercent, girlsPercent;

    //Get number of boys in class
    std::cout << "Enter the number of boys in the classroom: " << std::endl;
    std::cin >> numberOfBoys;

    //Get number of girls in class
    std::cout << "Enter the number of girls in the classroom: " << std::endl;
    std::cin >> numberOfGirls;

    //Total number of kids in class
    classSize = numberOfBoys + numberOfGirls;

    //Calculate Boys %
    boysPercent = (static_cast<double>(numberOfBoys) / classSize) * 100;

    //Calculate Girls %
    girlsPercent = (static_cast<double>(numberOfGirls) / classSize) * 100;

    //Show number of students in class
    std::cout << "The total number of students in the class is " << classSize << ".\n";

    //Show percent of boys in class
    std::cout << std::setw(5) << "Percentage of class that are boys: " << std::showpoint << std::setprecision(3) << boysPercent << "%" << std::endl;

    //Show percent of girls in class
    std::cout << "Percentage of class that are girls: " << std::showpoint << std::setprecision(3) << girlsPercent << "%" << std::endl;

    return 0;
}
