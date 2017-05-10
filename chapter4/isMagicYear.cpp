/*********************************************************************
This program will determine if the product of inputs for the month and
the day are equal to the inputted two-digit year. In order for a magic
day to happen the month and day of the month must have a product that
is equal to the last two digits of the year. (e.g. 2/20/40, 3/12/36)
**********************************************************************/

#include <iostream>

/********************** getMonth function ****************************
This function will ask the user to enter a month (1-12) and validate
this input before returning the value back to main.
**********************************************************************/
int getMonth(int month)
{
    //Get month
    std::cout << "Enter the month number: " << std::endl;
    std::cin >> month;

    //Input validation
    if (month <= 0 || month > 12)
    {
        std::cout << "Please re-run the program and enter a valid input." << std::endl;
    }

    return month;
}

/*********************** getDay function ******************************
This function will ask for and take input for the day of the month
before validating the input and returning the value back to main.
***********************************************************************/
int getDay(int day)
{
    //Get day
    std::cout << "Enter the day number: " << std::endl;
    std::cin >> day;

    //Input validation
    if (day <= 0 || day > 31)
    {
        std::cout << "Please re-run the program and enter a valid input." << std::endl;
    }

    return day;
}

/************************* getYear function ***************************
This function will take input for the final two digits of the year and
return this value back to main.
***********************************************************************/
int getYear(int year)
{
    //Get year
    std::cout << "Enter the last two digits of the year: " << std::endl;
    std::cin >> year;

    return year;
}

/************************ getMagicYear function ********************
This function will take the inputs for month, days, and years and
calculate the magic year needed for the conditional expression.
********************************************************************/
int getMagicYear(int month, int day, int magicYear)
{
    magicYear = month * day;

    return magicYear;
}


int main()
{
    //Initialize variables
    int month = 0,
        day = 0,
        years = 0;

    int magicMonth,
        magicDay,
        magicYear;

    //Get month
    magicMonth = getMonth(month);

    //Get day
    magicDay = getDay(day);

    //Get last two digits of year
    years = getYear(years);

    //Calculate magic year
    magicYear = getMagicYear(magicMonth, magicDay, years);

    //Conditional expression if a magic year is calculated
    if (magicYear == years)
    {
        std::cout << "This is a magic year!" << std::endl;
    }
    else
        std::cout << "This is not a magic year." << std::endl;

    //Show date
    std::cout << magicMonth << "/" << magicDay << "/" << years << std::endl;

    return 0;
}
