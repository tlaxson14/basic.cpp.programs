/*******************************************************************************
 This program initializes and calculates gross and net revenue under a given set
 of conditions, namely an 80% revenue for the movie theater with 20% of gross
 box office revenue going to the distributor--in addition to cost per ticket for
 children and adults.
 ******************************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
    //intialize fixed constant variables
    const double DISTRIBUTOR_REVENUE_PERCENT = 0.2;
    const double BOX_OFFICE_REVENUE_PERCENT = 0.8;
    const double ADULT_TICKET_PRICE = 10.0;
    const double CHILD_TICKET_PRICE = 6.0;
    //initialize continous variables
    int adultTicketSold, childTicketSold;
    double grossBoxOfficeRevenue, distributorRevenue, netBoxOfficeRevenue;

    //Enter name of movie
    std::string movieName;
    std::cout << "Movie name: " << std::endl;
    //Enter the complete movie title -- getline(cin, variable)
    std::getline(std::cin, movieName);

    //Enter number of adult tickets sold
    std::cout << "Adult tickets sold: " << std::endl;
    std::cin >> adultTicketSold;

    //Enter number of child tickets sold
    std::cout << "Child tickets sold: " << std::endl;
    std::cin >> childTicketSold;

    //Calculate gross box office revenue
    grossBoxOfficeRevenue = (ADULT_TICKET_PRICE * adultTicketSold) + (CHILD_TICKET_PRICE * childTicketSold);

    //Calculate distributor revenue
    distributorRevenue = grossBoxOfficeRevenue * DISTRIBUTOR_REVENUE_PERCENT;

    //Calculate net box office revenue
    netBoxOfficeRevenue = grossBoxOfficeRevenue * BOX_OFFICE_REVENUE_PERCENT;

    //Show gross box office revenue
    std::cout << "Gross total box office revenue: $" << std::fixed << std::showpoint << std::setprecision(2) <<grossBoxOfficeRevenue << std::endl;

    //Show distributor revenue
    std::cout << "Distributor revenue: $" << std::fixed << std::showpoint << std::setprecision(2) << distributorRevenue << std::endl;

    //Show net total box office revenue
    std::cout << "Net box office revenue: $" << std::fixed << std::showpoint << std::setprecision(2) << netBoxOfficeRevenue << std::endl;

    return 0;
}
