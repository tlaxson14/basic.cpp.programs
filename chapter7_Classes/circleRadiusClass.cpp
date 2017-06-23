/*******************************************************************************
This simple program will use a class called Circle with one private member
variable, or attribute, and two public member functions to set the radius of
a circle and calculate the radius based on the user input. In this program the
accessor aka "getters or get functions" will only use the member variable for
radius whereas the mutator aka "setters or set functions" will modify the
contents of the private member variable by storing or changing the value within
the member function.
*******************************************************************************/

#include<iostream>
#include<iomanip>
#include<cmath>

//Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;

//Circle class declaration
class Circle
{
    private:
        double radius;    //Radius of circle

    public:
        void setRadius(double rad)
        {
            //Set radius = rad to work with private member variable
            radius = rad;
        }
        double calcAreaOfCircle()
        {
            //Simple public member function that returns area of circle from rad input
            //using the equation to calculate area of a circle: Area = pi * r^2
            return 3.14159 * pow(radius, 2.0);
        }
};

int main()
{
    Circle areaOfCircle;    //Instantiating class Circle creating instance of the class, or object of class Circle
    double radiusOfCircle;  //Radius input for circle

    //Get radius
    cout << "Enter radius: ";
    cin >> radiusOfCircle;

    //Access setRadius public member function by passing argument radius from user input
    areaOfCircle.setRadius(radiusOfCircle);

    //Calculate and show area of the circle to three decimal places
    cout << "The area of a circle with radius " << radiusOfCircle << " units is "
    << fixed << showpoint << setprecision(3) << areaOfCircle.calcAreaOfCircle() << " units."
    << endl;

    return 0;
}
