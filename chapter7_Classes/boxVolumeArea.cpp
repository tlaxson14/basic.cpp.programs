/*******************************************************************************
This programs declares a class named Box that takes private member variables
(length, width, & height) and public member setter/getter functions to calculate
volume and surface area. The individual setter values may be edited to test
instances of class Box for all numbers greater than or equal to zero.
********************************************************************************/

#include<iostream>
#include<iomanip>

//Not a good habit
using namespace std;

class Box {
private:
    double length, width, height;

public:
    void setLength(double new_Length);
    void setWidth(double new_Width);
    void setHeight(double new_Height);
    double getLength();
    double getWidth();
    double getHeight();
    double getVolume();
    double getSurfaceArea();
};

int main()
{
    Box box1;   //Initialize object for Box class
    double length1, width1, height1, volume1, surfaceArea1;

    //Set length
    box1.setLength(4.50);
    length1 = box1.getLength();

    //Show length
    cout << "Length: " << length1 << endl;

    //Set width
    box1.setWidth(3.25);
    width1 = box1.getWidth();

    //Show width
    cout << "Width: " << width1 << endl;

    //Set height
    box1.setHeight(5.50);
    height1 = box1.getHeight();

    //Show height
    cout << "Height: " << height1 << endl;

    //Calculate volume
    volume1 = box1.getVolume();

    //Show volume
    cout << "Volume: " << volume1 << endl;

    //Calculate surface area
    surfaceArea1 = box1.getSurfaceArea();

    //Show surface area
    cout << "Surface area: " << surfaceArea1 << endl;

    return 0;
}

/****************** Box::setLength function ***********************
This public member "setter" function for class Box will allow:
  1. Access to the private member var for length
  2. Set length equal to new length var greater than or equal to 0
******************************************************************/

void Box::setLength(double new_Length) {
    if(new_Length >= 0.0) {
        length = new_Length;
    }
    else
        cout << "Enter a positive value" << endl;
}

/****************** Box::getLength function ***********************
This public member "getter" function for class Box will return the
length entered from setter function, setLength
******************************************************************/
double Box::getLength() {
    return length;
}

/****************** Box::setWidth function ***********************
This public member "setter" function for class Box will allow:
  1. Access to the private member var for width
  2. Set width equal to new width var greater than or equal to 0
******************************************************************/
void Box::setWidth(double new_Width) {
    if(new_Width >= 0.0) {
        width = new_Width;
    }
    else
        cout << "Enter a positive value" << endl;
}

/****************** Box::getWidth function ***********************
This public member "getter" function for class Box will return the
width entered from setter function, setWidth
******************************************************************/
double Box::getWidth() {
    return width;
}

/****************** Box::setHeight function ***********************
This public member "setter" function for class Box will allow:
  1. Access to the private member var for height
  2. Set height equal to new height var greater than or equal to 0
******************************************************************/
void Box::setHeight(double new_Height) {
    if(new_Height >= 0.0) {
        height = new_Height;
    }
    else
        cout << "Enter a positive value" << endl;
}

/****************** Box::getHeight function ***********************
This public member "getter" function for class Box will return the
height entered from setter function, setHeight
******************************************************************/
double Box::getHeight() {
    return height;
}

/****************** Box::getVolume function ***********************
This public member "getter" function for class Box will return the
volume using data entered from member vars for length, width, height
******************************************************************/
double Box::getVolume() {
    return length * width * height;
}

/***************** Box::getSurfaceArea function *******************
This public member "getter" function for class Box will return the
surface area using data entered from member vars for length, width,
height and the equation: 2 x (lw + lh + wh)
******************************************************************/
double Box::getSurfaceArea() {
    return 2 * (length * width + length * height + height * width);
}
