/**********************************************************************
This program will display three contract options for a mobile phone
service. The user will input which service package service they have
and the number of minutes used. The program will then calculate and
display the monthly bill using these inputs. It will also calculate
and show the amount of savings based on the different package services.
***********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

//Global variables
double const PACKAGE_A = 39.99;
double const PACK_A_FEES = 0.45;
double const PACKAGE_B = 59.99;
double const PACK_B_FEES = 0.40;
double const PACKAGE_C = 69.99;

/************** getPackageList function ******************
This function will display the different package options.
**********************************************************/
void getPackageList()
{
    //Get package
    std::cout << "Please select your plan (A, B, or C):" << std::endl;

    //Package A
    std::cout << "Package A: For $39.99 per month, 450 minutes are provided."
    << " Additional minutes costs $0.45 per minute.\n"
    << std::endl;

    //Package B
    std::cout << "Package B: For $59.99 per month, 900 minutes are provided."
    << " Additional minutes costs $0.40 per minute.\n"
    << std::endl;

    //Package C
    std::cout << "Package C: For $69.99 per month, unlimited minutes are provided."
    << " No additional charges.\n" << std::endl;
}

/***************** getName function ******************
This function takes the full name and returns to main.
******************************************************/
std::string getName()
{
    std::string name;   //String variable

    //Get name
    std::cout << "Please enter your name." << std::endl;

    //Allow full name entry
    std::getline(std::cin, name);

    return name;
}

/****************** getPackageType function ***********************
This function will take input for the package service and return
the character of the package: A, B, or C.
*******************************************************************/
char getPackageType()
{
    char packageType;       //Package A, B, or C

    //Get service package
    std::cout << "Please enter your service provider package:" << std::endl;

    std::cin >> packageType;

    //Input validation for characters
    if (packageType == 'a' || packageType == 'A')
        return packageType;
    else if (packageType == 'b' || packageType == 'B')
        return packageType;
    else if (packageType == 'c' || packageType == 'C')
        return packageType;
    else
    {
        std::cout << "Please re-run the program and enter a valid value." << std::endl;
        return 0;
    }
}

/******************** getMinutes function **********************
This function will get input for the total number of minutes used
for the month and return the value.
****************************************************************/
double getMinutes()
{
    double minutes;

    //Get minutes
    std::cout << "Please enter the number of minutes used: " << std::endl;

    std::cin >> minutes;

    //Input validation
    if (minutes < 0)
    {
        std::cout << "Please enter a valid number of minutes used." << std::endl;
        return 0;
    }
    else
    return minutes;
}


/************************ getMonthlyBill_A ***************************
This function will calculate and show the monthly bill for Package A.
**********************************************************************/
void getMonthlyBill_A(double minutes)
{
    double totalSavePrice_B = 0.0,      //Savings on Package B
           totalSavePrice_C = 0.0,      //Savings on Package C
           totalPriceOfBill = 0.0;      //Monthly bill total

    //Condition for no overage fees
    if (minutes > 0 && minutes <= 450)
    {
        //Calculate monthly bill with no overage fees
        totalPriceOfBill = PACKAGE_A;

        //Show monthly total formatted to 2 decimal places
        std::cout << "Total cost: $"
        << std::fixed << std::showpoint << std::setprecision(2) << totalPriceOfBill
        << std::endl;

        //Show no savings by switching to Package B or C
        std::cout << "You do not save any money by switching to Package B or C."
        << std::endl;
    }
    //Show savings by switching to Package B and C
    else if (minutes > 450 && minutes <= 900)
    {
        //Calculate bill with overage fee
        totalPriceOfBill = (PACKAGE_A + (PACK_A_FEES * (minutes - 450)));

        //Show monthly total + fees
        std::cout << "Total cost: $"
        << std::fixed << std::showpoint << std::setprecision(2) << totalPriceOfBill
        << std::endl;

        //Calculate savings if on Package B
        totalSavePrice_B = totalPriceOfBill - PACKAGE_B;

        //Calculate savings if on Package C
        totalSavePrice_C = totalPriceOfBill - PACKAGE_C;

        //Show savings on Package B
        //Input validation
        if (totalSavePrice_B < 0)
        {
            std::cout << "You are losing $" << std::abs(totalSavePrice_B)
            << " by switching to Package B."
            << std::endl;
        }
        else
        {
            std::cout << "You will save $" << totalSavePrice_B
            << " by switching to Package B."
            << std::endl;
        }

        //Show savings on Package C
        //Input validation
        if (totalSavePrice_C < 0)
        {
            std::cout << "You are losing $" << std::abs(totalSavePrice_C)
            << " by switching to Package C."
            << std::endl;
        }
        else
        {
            std::cout << "You will save $" << totalSavePrice_C
            << " by switching to Package C."
            << std::endl;
        }
    }
    //Show savings for Package C only since minutes > 900
    else if (minutes > 900)
    {
        //Calculate bill with overage fee
        totalPriceOfBill = (PACKAGE_A + (PACK_A_FEES * (minutes - 450)));

        //Show monthly total + fees
        std::cout << "Total cost: $"
        << std::fixed << std::showpoint << std::setprecision(2) << totalPriceOfBill
        << std::endl;

        //Calculate savings if on Package C
        totalSavePrice_C = totalPriceOfBill - PACKAGE_C;

        //Show savings on Package C
        //Input validation
        if (totalSavePrice_C < 0)
        {
            std::cout << "You are losing $" << std::abs(totalSavePrice_C)
            << " by switching to Package C."
            << std::endl;
        }
        else
        {
            std::cout << "You will save $" << totalSavePrice_C
            << " by switching to Package C."
            << std::endl;
        }
    }
    //Input validation
    else
        std::cout << "Please re-run the program and enter a valid number." << std::endl;
}

/************************ getMonthlyBill_B ***************************
 This function will calculate and show the monthly bill for Package B.
 **********************************************************************/
void getMonthlyBill_B(double minutes)
{
    double totalSavePrice_C = 0.0,
           totalPriceOfBill = 0.0;

    //Condition for no overage fees
    if (minutes > 0 && minutes <= 900)
    {
        //Calculate monthly bill with no overage fees
        totalPriceOfBill = PACKAGE_B;

        //Show monthly total formatted to 2 decimal places
        std::cout << "Total cost: $"
        << std::fixed << std::showpoint << std::setprecision(2) << totalPriceOfBill
        << std::endl;

        //Show no savings by switching to Package C
        std::cout << "You do not save any money by switching to Package C."
        << std::endl;
    }
    //Condition for overage fees
    else if (minutes > 900)
    {
        //Calculate bill with overage fee
        totalPriceOfBill = (PACKAGE_B + (PACK_B_FEES * (minutes - 900)));

        //Calculate savings if on Package C
        totalSavePrice_C = totalPriceOfBill - PACKAGE_C;

        //Show monthly total
        std::cout << "Total cost: $"
        << std::fixed << std::showpoint << std::setprecision(2) << totalPriceOfBill
        << std::endl;

        //Show savings on Package B
        //Input validation
        if (totalSavePrice_C < 0)
        {
            std::cout << "You are losing $" << std::abs(totalSavePrice_C)
            << " by switching to Package C."
            << std::endl;
        }
        else
        {
            std::cout << "You will save $" << totalSavePrice_C
            << " by switching to Package C."
            << std::endl;
        }
    }
    else
        std::cout << "Please re-run the program and enter a valid number." << std::endl;
}

/************************ getMonthlyBill_C ***************************
 This function will calculate and show the monthly bill for Package C.
 **********************************************************************/
void getMonthlyBill_C(double minutes)
{
    double totalPrice;

    //Calculate monthly bill total - no overage fees
    totalPrice = PACKAGE_C;

    //Show monthly total formatted to 2 decimal places
    std::cout << "Total cost: $"
    << std::fixed << std::showpoint << std::setprecision(2) << totalPrice
    << std::endl;
}

/******************* getMonthlyBillTotal function ******************
This function will take input for the package type to calculate and
show the total cost of the monthly bill including overage fees for
packages A and B.
********************************************************************/
void getMonthlyBillTotal(char packageType, int minutesUsed)
{
    switch (packageType)
    {
        case 'a':
        case 'A':
        {
            //Show selected package type
            std::cout << "You selected Package A" << std::endl;

            //Show additional minutes used
            if (minutesUsed > 450)
            {
                std::cout << "Additional minutes: " << minutesUsed - 450
                << std::endl;
            }

            //Get monthly bill and savings for overage fees on Packages B, C
            getMonthlyBill_A(minutesUsed);
            break;
        }

        case 'b':
        case 'B':
        {
            //Show selected package type
            std::cout << "You selected Package B" << std::endl;

            //Show additional minutes used
            if (minutesUsed > 900)
            {
                std::cout << "Additional minutes: " << minutesUsed - 900
                << std::endl;
            }

            //Call function to calculate bill
            getMonthlyBill_B(minutesUsed);
            break;
        }
        case 'c':
        case 'C':
        {
            //Show selected package type
            std::cout << "You selected Package C" << std::endl;

            //Call function to calculate bill
            getMonthlyBill_C(minutesUsed);
            break;
        }
    }
}

int main()
{
    //Initialize variables
    std::string memberName;
    char packageType;
    double minutesUsed;

    //Show provider packages + fees
    getPackageList();

    //Get name and assign to string variable
    getName();

    //Get Package and assign to string variable
    packageType = getPackageType();

    //Get number of minutes used
    minutesUsed = getMinutes();

    //Get total monthly cost of bill plus savings
    getMonthlyBillTotal(packageType, minutesUsed);

    return 0;
}
