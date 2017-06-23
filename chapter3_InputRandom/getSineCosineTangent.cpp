/****************************************************************************************
This program will take an integer values in degrees and convert from degrees into radians
using the getRadians function. The program will then calculate and show the sine, cosine,
and tangent function values for any input in degrees.
*****************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

//Function prototype
double getRadians(double degree);

//Main function
int main()
{
    //Initialize variables
    int degreeAngle;
    double radians, sine, cosine, tangent;

    //Get angle in degrees
    std::cout << "Enter angle in degrees: " << std::endl;

    //Enter angle in degrees
    std::cin >> degreeAngle;

    //Call function to convert degrees into radians and assign to variable
    radians = getRadians(degreeAngle);


    //Calculate and assign sine
    sine = sin(radians);

    //Show sine function value
    std::cout << "sin(" << degreeAngle << ")" << " =" << std::setw(7) << std::fixed <<
    std::showpoint << std::setprecision(4) << sine << std::endl;

    //Calculate and assign cosine
    cosine = cos(radians);

    //Show cosine function value
    std::cout << "cos(" << degreeAngle << ")" << " =" << std::setw(7) << std::fixed <<
    std::showpoint << std::setprecision(4) << cosine << std::endl;

    //Calculate and assign tangent
    tangent = tan(radians);

    //Show tangent function value
    std::cout << "tan(" << degreeAngle << ")" << " =" << std::setw(7) << std::fixed <<
    std::showpoint << std::setprecision(4) << tangent << std::endl;

    return 0;
}

/****************** getRadians Function ***********************
This function takes input in degrees and calculates the radians
from the degrees input and returns the value.
***************************************************************/
double getRadians(double degree)
{
    //Initialize variables
    const double PI = 3.14159;
    double angleInRadians;

    //Calculate angle in radians
    angleInRadians = (degree / 180) * PI;

    return angleInRadians;
}

    
