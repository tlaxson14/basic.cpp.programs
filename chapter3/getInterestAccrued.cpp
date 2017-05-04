/*******************************************************************************
 This program accepts inputs for principal loan amount, interest rate, and how
 many times compounded. The resulting output is the interest accrued and the new
 total balance.
 *******************************************************************************/

#include <iostream>
#include <cmath>

//Function Prototype
void getInterestBalance(double principalBalance, double interestRate, double interestCompounded);

int main()
{
    //Initialize variables
    double principalBalance, interestRate, interestCompounded;

    //Get inputs for principle, interest rate, and interest compounded
    std::cout << "Enter principal balance: " << std::endl;

    std::cin >> principalBalance;

    std::cout << "Enter interest rate percentage: " << std::endl;

    std::cin >> interestRate;

    std::cout << "Enter number of times compounded: " << std::endl;

    std::cin >> interestCompounded;

    //Call function to calculate total accrued interest balance
    getInterestBalance(principalBalance, interestRate, interestCompounded);

    return 0;
}
/************************* getInterestBalance function *************************
This function takes inputs for principal amount, interest rate, and interest
compounded, calculates, and displays the interest accrued and total balance.
********************************************************************************/
void getInterestBalance(double principalBalance, double interestRate, double interestCompounded)
{
    double totalAmount, interestAmount;

    //Calculate total balance from interest rate compounding
    totalAmount = principalBalance * pow(1 + ((interestRate/100) / interestCompounded), interestCompounded);

    //Calculate accrued interest
    interestAmount = totalAmount - principalBalance;

    //Show accrued interest balance
    std::cout << "Accrued interest: $" << interestAmount << std::endl;

    //Show total balance
    std::cout << "Total balance: $" << totalAmount << std::endl;
}
