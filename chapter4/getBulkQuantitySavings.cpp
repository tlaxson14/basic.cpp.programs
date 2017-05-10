/*************************************************************************
This program will validate input for number of units sold, calculate, and
display a total cost based on the item cost, the amount of discounted
savings, and the number of units needed to purchase to receieve a higher
discount. For this program the discounts start from 0% - 50% depenging on
the quantity purchased.
**************************************************************************/

#include <iostream>
#include <iomanip>

//Initialize global variable
double const ITEM_COST = 199.99;

/*********************** getNoDiscount function *****************************
This function will take input for the number of units purchased and use the
double constant to calculate the discount while displaying the number of
units needed to reach the next discount percentage.
***************************************************************************/
int getNoDiscount(int numBought)
{
    //Initialize constant and discount variable
    double discount;

    //Calculate discount - none
    discount = numBought * ITEM_COST;

    //Show total price
    std::cout << "Total price: $" << discount << std::endl;

    return discount;
}

/********************* getUnitsNeeded20 function *************************
This function calculates and shows the difference between the number of
units until the 20% discount and the number of units purchased.
**************************************************************************/
int getUnitsNeeded20(int numBought)
{
    int unitsNeeded;

    //Calculate units needed - low num is 10
    unitsNeeded = 10 - numBought;

    //Show units needed to save$
    std::cout << "Only " << unitsNeeded << " more units needed for a 20% discount." << std::endl;

    return unitsNeeded;
}

/******************************** getDiscount20 function *******************************
This function takes input ranges 10 - 19, calculates, and shows the 20% discount and
new total balance with discount.
***************************************************************************************/
double getDiscount20(int numBought)
{
    const double DISCOUNT_PERCENT = 0.2;    //Twenty percent discount
    double discount,    //Discount from purchase
           total;       //Total amount of purchase

    //Calculate discount
    discount = (numBought * ITEM_COST) * DISCOUNT_PERCENT;

    //Calculate total
    total = (numBought * ITEM_COST) - discount;

    //Show total
    std::cout << "Total cost: $" << std::setw(5) << std::fixed << std::showpoint << std::setprecision(2) << total << std::endl;

    //Show discount
    std::cout << "Discount: " << std::setw(3) << "$" << discount << std::endl;

    return total;

}

/****************************** getUnitsNeeded30 function ********************************
This function determines how many more units are needed to be eligible for a 30% discount.
******************************************************************************************/
int getUnitsNeeded30(int numBought)
{
    int unitsNeeded;

    //Calculate units needed - low num is 20
    unitsNeeded = 20 - numBought;

    //Show units needed to save$
    std::cout << "Only " << unitsNeeded << " more units needed for a 30% discount." << std::endl;

    return unitsNeeded;
}

/******************************** getDiscount30 function *******************************
 This function takes input ranges 20 - 49, calculates, and shows the 30% discount and
 new total balance with discount.
 ***************************************************************************************/
double getDiscount30(int numBought)
{
    const double DISCOUNT_PERCENT = 0.3;    //Thirty percent discount
    double discount,        //Discount from purchase
    total;                  //Total amount of purchase

    //Calculate discount
    discount = (numBought * ITEM_COST) * DISCOUNT_PERCENT;

    //Calculate total
    total = (numBought * ITEM_COST) - discount;

    //Show total
    std::cout << "Total cost: $" << std::setw(5) << std::fixed << std::showpoint << std::setprecision(2) << total << std::endl;

    //Show discount
    std::cout << "Discount: " << std::setw(3) << "$" << discount << std::endl;

    return total;
}

/****************************** getUnitsNeeded40 function ********************************
 This function determines how many more units are needed to be eligible for a 40% discount.
 ******************************************************************************************/
int getUnitsNeeded40(int numBought)
{
    int unitsNeeded;

    //Calculate units needed - low num is 50
    unitsNeeded = 50 - numBought;

    //Show units needed to save$
    std::cout << "Only " << unitsNeeded << " more units needed for a 40% discount." << std::endl;

    return unitsNeeded;
}

/******************************** getDiscount40 function *******************************
 This function takes input ranges 50 - 99, calculates, and shows the 40% discount and
 new total balance with discount.
 ***************************************************************************************/
double getDiscount40(int numBought)
{
    const double DISCOUNT_PERCENT = 0.4;    //Fourty percent discount
    double discount,        //Discount from purchase
    total;                  //Total amount of purchase

    //Calculate discount
    discount = (numBought * ITEM_COST) * DISCOUNT_PERCENT;

    //Calculate total
    total = (numBought * ITEM_COST) - discount;

    //Show total
    std::cout << "Total cost: $" << std::setw(5) << std::fixed << std::showpoint << std::setprecision(2) << total << std::endl;

    //Show discount
    std::cout << "Discount: " << std::setw(3) << "$" << discount << std::endl;

    return total;
}

/****************************** getUnitsNeeded50 function ********************************
 This function determines how many more units are needed to be eligible for a 40% discount.
 ******************************************************************************************/
int getUnitsNeeded50(int numBought)
{
    int unitsNeeded;

    //Calculate units needed - low num is 100
    unitsNeeded = 100 - numBought;

    //Show units needed to save$
    std::cout << "Only " << unitsNeeded << " more units needed for a 50% discount." << std::endl;

    return unitsNeeded;
}

/******************************** getDiscount50 function ********************************
 This function takes input ranges greater than or equal to 100, calculates, and shows the
 50% discount and new total balance with discount.
 ****************************************************************************************/
double getDiscount50(int numBought)
{
    const double DISCOUNT_PERCENT = 0.5;    //Fourty percent discount
    double discount,        //Discount from purchase
    total;                  //Total amount of purchase

    //Calculate discount
    discount = (numBought * ITEM_COST) * DISCOUNT_PERCENT;

    //Calculate total
    total = (numBought * ITEM_COST) - discount;

    //Show total
    std::cout << "Total cost: $" << std::setw(5) << std::fixed << std::showpoint << std::setprecision(2) << total << std::endl;

    //Show discount
    std::cout << "Discount: " << std::setw(3) << "$" << discount << std::endl;

    return total;
}


int main()
{
    //Initialize quantity purchased
    double purchaseQuant;

    //Get number purchased
    std::cout << "How many units did you purchase?" << std::endl;
    std::cin >> purchaseQuant;

    //Input validation less than 0
    if (purchaseQuant < 0)
        std::cout << "Please re-run the program and enter a valid number." << std::endl;

    //Input validation for 0 - 9 units sold - no discount
    else if (purchaseQuant < 10)
    {
        //Call function for 0-9 input
        getNoDiscount(purchaseQuant);

        //Call function to get number of units to 20% discount
        getUnitsNeeded20(purchaseQuant);
    }
    //Input validation for 10 - 19 units sold - 20% discount
    else if (purchaseQuant >= 10 && purchaseQuant < 20)
    {
        std::cout << "Congratulations! You are eligible for a 20% discount." << std::endl;

        //Call function for 20% discount
        getDiscount20(purchaseQuant);

        //Call function for units to 30% discount
        getUnitsNeeded30(purchaseQuant);

    }
    //Input validation for 20 - 49 units sold - 30% discount
    else if (purchaseQuant >= 20 && purchaseQuant < 50)
    {
        std::cout << "Congratulations! You are eligible for a 30% discount." << std::endl;

        //Call function for 30% discount
        getDiscount30(purchaseQuant);

        //Call function for units to 40% discount
        getUnitsNeeded40(purchaseQuant);
    }
    //Input validation for 50 - 99 units sold - 40% discount
    else if (purchaseQuant >= 50 && purchaseQuant < 100)
    {
        std::cout << "Congratulations! You are eligible for a 40% discount." << std::endl;

        //Call function for 40% discount
        getDiscount40(purchaseQuant);

        //Call function for units to 50% discount
        getUnitsNeeded50(purchaseQuant);
    }
    else if (purchaseQuant >= 100)
    {
        std::cout << "Congratulations! You are eligible for a 50% discount." << std::endl;

        //Call function for 50% discount
        getDiscount40(purchaseQuant);
    }
    else
        std::cout << "You did not enter a valid number. Re-run the program and enter a valid number." << std::endl;

    return 0;

}
