/***********************************************************
This program is a modified program to show the conversions
tables for Celsius to Fahrenheit and vice versa. The global
variables are used for negative input. The ouput will show a
table with the calculated conversions.
************************************************************/

#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::showpoint;
using std::setprecision;

//Global constant
const int CELSIUS_LOW = -273;
const int FAHR_LOW = -467;

/******************* getList() function ********************
This function will display the list of available conversions
to select from.
************************************************************/
int getList()
{
    int choice;     //Menu choice

    //Show menu
    cout << "Please select one of the following conversions (1-2):" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;

    //Get selection
    cin >> choice;

    //Input validation
    while(choice < 1 || choice > 2)
    {
        cout << "Please select 1 or 2." << endl;
        cin >> choice;
    }

    return choice;
}

/****************** getCels function ********************
 This function will calculate and show the conversion table
 from 0 up to the fahrenheit input into degrees Celsius.
 *********************************************************/
void getCels()
{
    int fahr;      //Degrees Fahrenheit
    double cels;   //Degrees Celsius conversion

    //Get degrees Fahrenheit temperature
    cout << "Enter temperature in degrees Fahrenheit:" << endl;
    cin >> fahr;

    //Format table
    cout << "Fahrenheit" << setw(12) << "Celsius" << endl;
    cout << "----------------------" << endl;

    if(fahr > 0)
    {
        //Show conversion table with initializer temp = 0
        for(int temp = 0; temp <= fahr; temp++)
        {
            //Calculate degrees Celsius from Fahrenheit
            cels = (5/9.0) * (temp - 32);

            //Show degrees Celsius from 0 to fahr input
            cout << setw(4) << temp << "       "
            << fixed << showpoint << setprecision(1) << setw(10) << cels
            << endl;
        }
    }
    else if(fahr < 0)
    {
        //Show conversion table with initializer temp = 0
        for(int temp = FAHR_LOW; temp <= fahr; temp++)
        {
            //Calculate degrees Celsius from Fahrenheit
            cels = (5/9.0) * (temp - 32);

            //Show degrees Celsius from 0 to fahr input
            cout << setw(4) << temp << "       "
            << fixed << showpoint << setprecision(1) << setw(10) << cels
            << endl;
        }
    }
    else
        cout << "You did not enter a valid number. Re-run and try again." << endl;
}

/****************** getFahr function *********************
 This function will calculate and show the conversion table
 in degrees Fahrenheit--up to the Celsius input.
 **********************************************************/
void getFahr()
{
    int celsius;   //Degrees Celsius output
    double fahr;   //Degrees Fahrenheit shown in table

    cout << "Enter temperature in degrees Celsius:" << endl;
    cin >> celsius;

    //Format table
    cout << "Celsius" << setw(15) << "Fahrenheit" << endl;
    cout << "----------------------" << endl;

    if(celsius > 0)
    {
        //Show conversion table with initializer temp = 0
        for(int temp = 0; temp <= celsius; temp++)
        {
            //Calculate degrees Celsius from Fahrenheit
            fahr = (9/5.0) * temp + 32;

            //Show degrees Celsius from 0 to fahr input
            cout << setw(4) << temp << "       "
            << fixed << showpoint << setprecision(1) << setw(8) << fahr
            << endl;
        }
    }
    else if(celsius < 0 && celsius > CELSIUS_LOW)
    {
        //Show conversion table with initializer temp = 0
        for(int temp = CELSIUS_LOW; temp <= celsius; temp++)
        {
            //Calculate degrees Celsius from Fahrenheit
            fahr = (9/5.0) * temp + 32;

            //Show degrees Celsius from 0 to fahr input
            cout << setw(4) << temp << "       "
            << fixed << showpoint << setprecision(1) << setw(10) << fahr
            << endl;
        }
    }
    else
        cout << "You did not enter a valid number. Re-run and try again." << endl;
}

int main()
{
    int choice;   //Choice from list

    //Show list of options
    choice = getList();

    //Show conversion table from choice
    switch (choice)
    {
        case 1:     //input '1'
        {
            //Get Celsius temperature
            getFahr();
            break;
        }
        case 2:     //input '2'
        {
            //Call function with fahrenheit input
            getCels();
            break;
        }
    }

    return 0;

}
