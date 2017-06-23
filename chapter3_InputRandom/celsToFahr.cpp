/*********************************************************************************
 This program takes input in degrees Celsius and converts into degrees Fahrenheit.
**********************************************************************************/

#include <iostream>

//Function prototype
double getCelsiusToFahrenheit(double degreeCelsius);


int main()
{
    double celsius;

    //Enter degrees Celsius to convert to Fahrenheit
    std::cout << "Enter a temperature in degrees Celsius: " << std::endl;
    std::cin >> celsius;

    //Show conversion by calling getCelsiusToFahrenheit function
    std::cout << celsius << " degrees Celsius = " <<  getCelsiusToFahrenheit(celsius) << " degrees Fahrenheit." << std::endl;

    return 0;
}

/*************** getCelsiusToFahrenheit function ************************
This function takes the input in degrees Celsius and applies a formula to
convert and return the temperature into degrees Fahrenheit.
*************************************************************************/

double getCelsiusToFahrenheit(double degreeCelsius)
{
    double fahrTemperature;

    //Convert celsius to fahrenheit
    fahrTemperature = (9.0/5.0) * degreeCelsius + 32;

    return fahrTemperature;
}
