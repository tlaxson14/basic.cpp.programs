/***********************************************************************
This program behaves as a basic geometry calculator that will calculate
the area of a circle, rectangle, and triangle. The desired area will be
displayed based on user input from a list.
***********************************************************************/

#include <iostream>
#include <iomanip>

/*********************** getCircleArea function *************************
This function will get the area of a circle using a constant value for pi.
*************************************************************************/
void getCircleArea()
{
    double const PI = 3.14159;  //Selected constant for PI
    double radius,              //Radius of the circle
           area;                //Area of the circle

    //Get radius of circle
    std::cout << "Enter the radius of the circle: " << std::endl;
    std::cin >> radius;

    if (radius < 0)
        std::cout << "Please re-run the program and enter a radius greater than zero." << std::endl;
    else
    {
    //Calculate area of circle
    area = PI * radius * radius;

    //Show area of circle
    std::cout << "Area of the circle = " << std::fixed << std::showpoint << std::setprecision(2) << area << std::endl;
    }
}

/*********************** getRectangleArea function **********************
This function will get the calculate the area of rectangle using inputs
for length and width.
*************************************************************************/
void getRectangleArea()
{
    double length,      //Length of the rectangle
           width,       //Width of the rectangle
           area;        //Area of the rectangle

    //Get length
    std::cout << "Please enter a length: " << std::endl;
    std::cin >> length;

    //Get width
    std::cout << "Please enter a width: " << std::endl;
    std::cin >> width;

    //Calculate area
    area = length * width;

    //Area output validation
    if (area <= 0)
        std::cout << "Re-run the program and select valid inputs." << std::endl;
    else
    {
        //Show area of rectangle
        std::cout << "Rectangular area = "
        << std::fixed << std::showpoint << std::setprecision(1) << area << std::endl;
    }
}

/************************ getTriangleArea function *********************
This function will get the area of triangle using inputs for the length
of the triangle base and the height.
************************************************************************/
void getTriangleArea()
{
    double base,      //Base of the triangle
           height,    //Height of the triangle
           area;      //Area of the triangle

    //Get base
    std::cout << "Please enter a base: " << std::endl;
    std::cin >> base;

    //Get height
    std::cout << "Please enter a height: " << std::endl;
    std::cin >> height;

    //Calculate area
    area = (base * height) / 2;

    //Area output validation
    if (area <= 0)
        std::cout << "Re-run the program and select valid inputs." << std::endl;
    else
    {
        //Show area of triangle
        std::cout << "Area of the triangle = " << std::fixed << std::showpoint << std::setprecision(1) << area << std::endl;
    }
}


int main()
{
    int choice;

    //Show Purpose
    std::cout << "Geometry Calculator\n"
    << std::endl;

    //Show options to select from list
    std::cout << "1. Calculate the area of a circle." << std::endl;
    std::cout << "2. Calculate the area of a rectangle." << std::endl;
    std::cout << "3. Calculate the area of a triangle." << std::endl;
    std::cout << "4. Quit" << std::endl;


    //Get choice selection from list using input validation
    std::cout << "Please enter your choice (1 - 4):" << std::endl;
    std::cin >> choice;

    //Switch to functions based on user input
    switch (choice)
    {
        case 1:
        {
            //Call function to get area of circle
            getCircleArea();
            break;
        }
        case 2:
        {
            //Call function to get area of rectangle
            getRectangleArea();
            break;
        }
        case 3:
        {
            //Call function to get area of triangle
            getTriangleArea();
            break;
        }
        case 4:
        {
            //End program
            break;
        //Input validation for values outside of accepted range
        default:
            {
                std::cout << "You must enter a value between 1 - 4." << std::endl;
            }
        }
    }

return 0;
}
