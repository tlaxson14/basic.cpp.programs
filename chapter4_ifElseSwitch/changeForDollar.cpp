/*************************************************************
This program will take the number of pennies, nickels, dimes,
and quarters entered and test whether the total is one dollar.
The game is won by entering the right number of coins to
equal one dollar.
**************************************************************/

#include <iostream>

/****************** getPenny function **********************
This function will get input for the number of pennies.
************************************************************/

int getPenny()
{
    int penny;

    //Get number of pennies
    std::cout << "Please enter the number of pennies:" << std::endl;

    std::cin >> penny;

    //Input validation
    if (penny < 0 || penny > 100)
        std::cout << "Please restart the program and enter a valid number of quarters."
        << std::endl;

    return penny;
}

/****************** getNickel function *********************
This function will get input for the number of nickels.
************************************************************/
int getNickel()
{
    int nickel;

    //Get number of nickels
    std::cout << "Please enter the number of nickels:" << std::endl;

    std::cin >> nickel;

    //Input validation
    if (nickel < 0 || nickel > 20)
        std::cout << "Please restart the program and enter a valid number of nickels."
        << std::endl;

    return nickel;
}

/****************** getDime function *********************
 This function will get input for the number of dimes.
**********************************************************/
int getDime()
{
    int dime;

    //Get number of dimes
    std::cout << "Please enter the number of dimes:" << std::endl;

    std::cin >> dime;

    //Input validation
    if (dime < 0 || dime > 10)
        std::cout << "Please restart the program and enter a valid number of dimes."
        << std::endl;

    return dime;
}

/****************** getQuarter function *******************
 This function will get input for the number of quarters.
 **********************************************************/
int getQuarter()
{
    int quarter;

    //Get number of quarters
    std::cout << "Please enter the number of quarters:" << std::endl;

    std::cin >> quarter;

    //Input validation
    if (quarter < 0 || quarter > 4)
        std::cout << "Please restart the program and enter a valid number of quarters."
        << std::endl;

    return quarter;
}

/************************ geDollarChange function ***********************
This function will take the number of inputs for pennies, nickels, dimes,
and quarters and calculate the total amount from the inputs.
*************************************************************************/
double getDollarChange(int pennyNum, int nickelNum, int dimeNum, int quarterNum)
{
    const double PENNY_VALUE = 0.01,    //Penny value
                 NICKEL_VALUE = 0.05,   //Nickel value
                 DIME_VALUE = 0.10,     //Dime value
                 QUARTER_VALUE = 0.25;  //Quarter value
    double changeTotal;

    //Calculate the total change from number of inputs for pennies, nickels, dimes, quarters
    changeTotal = (pennyNum * PENNY_VALUE) + (nickelNum * NICKEL_VALUE) + (dimeNum * DIME_VALUE) + (quarterNum * QUARTER_VALUE);

    return changeTotal;
}



int main()
{
    int pennyCount, nickelCount, dimeCount, quarterCount;
    double totalChange;

    //Get number of quarters
    quarterCount = getQuarter();

    //Get number of dimes
    dimeCount = getDime();

    //Get number of nickels
    nickelCount = getNickel();

    //Get number of pennies
    pennyCount = getPenny();

    //Get total change from number of pennies, nickels, dimes, and quarters
    totalChange = getDollarChange(pennyCount, nickelCount, dimeCount, quarterCount);

    //Test condition if change is equal to one dollar
    if (totalChange == 1.00)
        std::cout << "Great job! The change you entered is equal to $1.00." << std::endl;
    //Show what change entered if not equal to 1.00
    else
    {
        std::cout << "The total number of coins does not equal $1.00." << std::endl;
        std::cout << "The total change you entered: $" << totalChange << std::endl;
        std::cout << "Please try again." << std::endl;
    }

    return 0;
}
