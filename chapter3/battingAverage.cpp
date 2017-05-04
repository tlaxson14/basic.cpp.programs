/**************************************************************
This program takes the number of at bats and the number of hits
to calculate and show the batting average.
***************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    //Initialize variables
    int hitsNum, atBatsNum;
    double battingAvg;

    //Get number of hits
    std::cout << "Enter the number of hits: \n";

    std::cin >> hitsNum;

    //Get number of at bats
    std::cout << "Enter the number of at bats: \n";

    std::cin >> atBatsNum;

    //Calculate batting average
    battingAvg = static_cast<double>(hitsNum) / static_cast<double>(atBatsNum);

    //Show batting average with 4 sig figs
    std::cout << "Batting average: " << std::fixed << std::showpoint << std::setprecision(4) << battingAvg << std::endl;

    return 0;
}
