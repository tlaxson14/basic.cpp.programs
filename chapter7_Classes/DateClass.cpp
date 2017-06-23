/********************************************************************************
 This program will use a class called Date with integer data members to store
 for month, day, and year. The class will have a three-parameter default
 constructor that allows the date to be set at the time a new Date object is
 created. The Date class also contains member functions to print the dates
 entered in various formats. It will have multiple input validations for month
 and the days of each month to ensure the appropriate number of days are entered.
 The three different date output formats will be:
        1. Month/Day/Year   (e.g. 1/1/2001)
        2. Month Day, Year  (e.g. January 1, 2001)
        3. Day Month Year   (e.g. 1 January 2001)
 ********************************************************************************/

#include<iostream>
#include<string>

//Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;

//Function prototypes
int getJanuary();
int getFebruary();
int getMarch();
int getApril();
int getMay();
int getJune();
int getJuly();
int getAugust();
int getSeptember();
int getOctober();
int getNovember();
int getDecember();

//Class Date
class Date
{
private:
    int m_month;
    int d_day;
    int y_year;

public:
    //Default constructor with three parameters
    Date(int month = 1, int day = 1, int year = 2001)
    {
        m_month = month;
        d_day = day;
        y_year = year;
    }

    //Date format: Month/Day/Year
    void printDate1(int month, int day, int year)
    {
        cout << month << "/" << day << "/" << year << endl;
    }

    //Date format: American standard
    void printDate2(string month, int day, int year)
    {
        cout << month << " " << day << ", " << year << endl;
    }

    //Date format: Rest of the world
    void printDate3(int day, string month, int year)
    {
        cout << day << " " << month << " " << year << endl;
    }
};

int main()
{
    Date showDate;          //Class member object
    int monthOfYear = 0;    //Month
    int dayOfMonth = 0;     //Day
    int year = 0;           //Year
    string m;               //String variable for month

    //Get month
    cout << "Enter month: ";
    cin >> monthOfYear;

    //Input validaton for month
    while(monthOfYear < 0 || monthOfYear > 12)
    {
        cout << "Please enter a valid month 1 - 12." << endl;
        cin >> monthOfYear;
    }

    //Switch conditions based on the month entered
    switch(monthOfYear)
    {
        //January
        case 1:
        {
            m = "January";
            dayOfMonth = getJanuary();
            break;
        }
        //February
        case 2:
        {
            m = "February";
            dayOfMonth = getFebruary();
            break;
        }
        //March
        case 3:
        {
            m = "March";
            dayOfMonth = getMarch();
            break;
        }
        //April
        case 4:
        {
            m = "April";
            dayOfMonth = getApril();
            break;
        }
        //May
        case 5:
        {
            m = "May";
            dayOfMonth = getMay();
            break;
        }
        //June
        case 6:
        {
            m = "June";
            dayOfMonth = getJune();
            break;
        }
        //July
        case 7:
        {
            m = "July";
            dayOfMonth = getJuly();
            break;
        }
        //August
        case 8:
        {
            m = "August";
            dayOfMonth = getAugust();
            break;
        }
        //September
        case 9:
        {
            m = "September";
            dayOfMonth = getSeptember();
            break;
        }
        //October
        case 10:
        {
            m = "October";
            dayOfMonth = getOctober();
            break;
        }
        //November
        case 11:
        {
            m = "November";
            dayOfMonth = getNovember();
            break;
        }
        //December
        case 12:
        {
            m = "December";
            dayOfMonth = getDecember();
            break;
        }
    }

    //Get year
    cout << "\nEnter year: ";
    cin >> year;

    //Input year validation
    while(year <= 0)
    {
        cout << "Please enter a valid year greater than 0." << endl;
        cin >> year;
    }

    //Call class member function to display in slashes format
    showDate.printDate1(monthOfYear, dayOfMonth, year);

    //Call class member function to display in American standard format
    showDate.printDate2(m, dayOfMonth, year);

    //Call class member function to display in the global standard format
    showDate.printDate3(dayOfMonth, m, year);

    return 0;
}

/***************************** getJanuary function ********************************
This function will get input for day in the month of January with input validation.
***********************************************************************************/
int getJanuary()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of January input validation
    while(d_day < 1 || d_day > 30)
    {
        cout << "The month of January contains 30 days. Please enter a valid day of the month for January." << endl;
        cin >> d_day;
    }

    return d_day;
}

/***************************** getFebruary function ********************************
This function will get input for day in the month of February with input validation.
************************************************************************************/
int getFebruary()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of February input validation
    while(d_day < 1 || d_day > 29)
    {
        cout << "February has at most 29 days in a leap year. Please enter a valid day of the month for February." << endl;
        cin >> d_day;
    }

    return d_day;
}

/****************************** getMarch function *******************************
This function will get input for day in the month of March with input validation.
*********************************************************************************/
int getMarch()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of March input validation
    while(d_day < 1 || d_day > 31)
    {
        cout << "The month of March contains 31 days. Please enter a valid day of the month for March." << endl;
        cin >> d_day;
    }

    return d_day;
}

/***************************** getApril function ********************************
This function will get input for day in the month of April with input validation.
*********************************************************************************/
int getApril()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of April input validation
    while(d_day < 1 || d_day > 30)
    {
        cout << "The month of April contains 30 days. Please enter a valid day of the month for April." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getMay function ******************************
This function will get input for day in the month of May with input validation.
*******************************************************************************/
int getMay()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of May input validation
    while(d_day < 1 || d_day > 31)
    {
        cout << "The month of May contains 31 days. Please enter a valid day of the month for May." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getJune function ******************************
This function will get input for day in the month of June with input validation.
********************************************************************************/
int getJune()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of June input validation
    while(d_day < 1 || d_day > 30)
    {
        cout << "The month of June contains 30 days. Please enter a valid day of the month for June." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getJuly function ******************************
This function will get input for day in the month of July with input validation.
********************************************************************************/
int getJuly()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of July input validaton
    while(d_day < 1 || d_day > 31)
    {
        cout << "The month of July contains 31 days. Please enter a valid day of the month for July." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getAugust function ******************************
This function will get input for day in the month of August with input validation.
**********************************************************************************/
int getAugust()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of August input validation
    while(d_day < 1 || d_day > 31)
    {
        cout << "The month of August contains 31 days. Please enter a valid day of the month for August." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getSeptember function ******************************
This function will get input for day in the month of September with input validation.
*************************************************************************************/
int getSeptember()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of September input validation
    while(d_day < 1 || d_day > 30)
    {
        cout << "The month of September contains 30 days. Please enter a valid day of the month for September." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getOctober function ******************************
This function will get input for day in the month of October with input validation.
***********************************************************************************/
int getOctober()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of October input validation
    while(d_day < 1 || d_day > 31)
    {
        cout << "The month of October contains 31 days. Please enter a valid day of the month for October." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getNovember function ******************************
This function will get input for day in the month of November with input validation.
************************************************************************************/
int getNovember()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of November input validation
    while(d_day < 1 || d_day > 30)
    {
        cout << "The month of November contains 30 days. Please enter a valid day of the month for November." << endl;
        cin >> d_day;
    }

    return d_day;
}

/******************************* getDecember function ******************************
This function will get input for day in the month of December with input validation.
************************************************************************************/
int getDecember()
{
    int d_day = 0;     //Day of month

    //Get day of the month
    cout << "\nEnter day: ";
    cin >> d_day;

    //Month of December input validation
    while(d_day < 1 || d_day > 31)
    {
        cout << "The month of December contains 31 days. Please enter a valid day of the month for December." << endl;
        cin >> d_day;
    }

    return d_day;
}
