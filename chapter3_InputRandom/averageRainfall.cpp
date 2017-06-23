/*******************************************************************
This program takes the number of inches in rain for three separate
months and then displays the average rainfall over that time period.
********************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    //Initialize variables
    double inchesOfRainJune, inchesOfRainJuly, inchesOfRainAugust, averageRainfall;

    //June average rainfall
    std::string month1;
    month1 = "June";
    std::cout << "Enter rainfall in inches for " << month1 << ":" <<  std::endl;
    std::cin >> inchesOfRainJune;

    //July average rainfall
    std::string month2;
    month2 = "July";
    std::cout << "Enter rainfall in inches for " << month2 << ":" << std::endl;
    std::cin >> inchesOfRainJuly;

    //August average rainfall
    std::string month3;
    month3 = "August";
    std::cout << "Enter rainfall in inches for " << month3 << ":" << std::endl;
    std::cin >> inchesOfRainAugust;

    //Calculate average rainfall
    averageRainfall = (inchesOfRainJune + inchesOfRainJuly + inchesOfRainAugust) / 3.0;

    //Show average rainfall
    std::cout << "The average rainfall for " << month1 << " - " << month3 << " was " << std::setprecision(4) << averageRainfall << " inches." <<std::endl;

    return 0;
}
