/***********************************************************************************************
This program will take several inputs related to opening and closing position price per share
as well as the number of shares purchased and sold. These inputs are then used to compute the
total cost of the purchase, total cost of the sell, broker fees reductions, and the net profits
based on number of shares sold.
***********************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    //Initialize fixed variable
    const double BROKER_COMMISSION = 0.02;

    //Initialize variables
    double pricePerShareBuy, pricePerShareSell, numberOfSharesBuy, numberOfSharesSell,
           brokerFeeBuy, brokerFeeSell, profit, totalCostBuy, totalCostSell;

    //Get price per share at purchase
    std::cout << "Enter purchased price per share: " << std::endl;
    std::cin >> pricePerShareBuy;

    //Get number of shares purchased
    std::cout << "Enter the number of shares: " << std::endl;
    std::cin >> numberOfSharesBuy;

    //Get closing position price per share
    std::cout << "Enter sold price per share: " << std::endl;
    std::cin >> pricePerShareSell;

    //Get number of shares sold
    std::cout << "Number of shares sold: " << std::endl;
    std::cin >> numberOfSharesSell;

    //Get profit for condition when shares bought = shares sold
    if(numberOfSharesBuy == numberOfSharesSell)
    {
        //Calculate the total costs for number of shares at price/share
        totalCostBuy = pricePerShareBuy * numberOfSharesBuy;

        //Show total cost
        std::cout << "Total cost (" << numberOfSharesBuy << " shares): $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << totalCostBuy << std::endl;

        //Calculate brokerage fee
        brokerFeeBuy = totalCostBuy * BROKER_COMMISSION;

        //Show total cost + brokerage fees
        std::cout << "Total cost (" << numberOfSharesBuy << " shares including 2% broker fees): $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << (brokerFeeBuy + totalCostBuy) << std::endl;

        //Calculate total amount for closing position
        totalCostSell = numberOfSharesSell * pricePerShareSell;

        //Show total amount
        std::cout << "Total sell price of " << numberOfSharesSell << " shares: $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << totalCostSell << std::endl;

        //Calculate broker fee
        brokerFeeSell = totalCostSell * BROKER_COMMISSION;

        //Show total cost + brokerage fees
        std::cout << "Total amount for " << numberOfSharesBuy << " shares minus 2% broker fees: $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << (totalCostSell - brokerFeeSell) << std::endl;

        //Calculate margin profit/loss on transaction
        profit = (totalCostSell - brokerFeeSell) - (brokerFeeBuy + totalCostBuy);

            if(profit < 0)
            {
                std::cout << "Net loss: $" <<
                std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << profit << std::endl;
            }
            else
            {
                std::cout << "Net profit: +$" <<
                std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << profit << std::endl;
            }
    }
    //Get condition for profit-taking without closing position
    else if (numberOfSharesBuy != numberOfSharesSell)
    {
        //Calculate the total costs for number of shares at price/share
        totalCostBuy = pricePerShareBuy * numberOfSharesBuy;

        //Show total cost
        std::cout << "Total cost (" << numberOfSharesBuy << " shares): $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << totalCostBuy << std::endl;

        //Calculate brokerage fee
        brokerFeeBuy = totalCostBuy * BROKER_COMMISSION;

        //Show total cost + brokerage fees
        std::cout << "Total cost (" << numberOfSharesBuy << " shares including 2% broker fees): $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(5) << (brokerFeeBuy + totalCostBuy) << std::endl;

        //Calculate total amount for closing position
        totalCostSell = numberOfSharesSell * pricePerShareSell;

        //Show total amount
        std::cout << "Total sell price (" << numberOfSharesSell << " shares): $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(4) << totalCostSell << std::endl;

        //Calculate broker fee
        brokerFeeSell = totalCostSell * BROKER_COMMISSION;

        //Show total cost + brokerage fees
        std::cout << "Total amount (" << std::fixed << numberOfSharesSell << " shares minus 2% broker fees): $"
        << std::fixed << std::showpoint << std::setprecision(2) << std::setw(4) << (totalCostSell - brokerFeeSell) << std::endl;

        //Calculate margin profit/loss on transaction how much sold vs. how much bought of sold share amount
        profit = (numberOfSharesSell * pricePerShareSell) - (totalCostBuy * (numberOfSharesSell / numberOfSharesBuy));

        //If profit negative, show net loss -- else net profit
        if(profit < 0)
        {
                std::cout << "Net loss: $" <<
                std::fixed << std::showpoint << std::setprecision(2) << std::setw(4) << profit << std::endl;
        }
        else
        {
            std::cout << "Net profit on " << numberOfSharesSell << " shares: +$" <<
            std::fixed << std::showpoint << std::setprecision(2) << std::setw(4) << profit << std::endl;
        }
    }

    return 0;
}
