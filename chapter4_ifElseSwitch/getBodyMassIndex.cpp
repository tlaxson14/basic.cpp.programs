/*******************************************************************
This program will calculate and display the body mass index (BMI) of
a person using their weight as input. The program will then test BMI
conditions and display if you are underweight, healthy weight or
overweight.
********************************************************************/

#include <iostream>
#include <iomanip>

/*********************** getWeight function *************************
This function will get and return input for the weight of the person.
*********************************************************************/
double getWeight()
{
    double weight;

    //Get weight
    std::cout << "Please enter your weight in pounds." << std::endl;
    std::cin >> weight;

    return weight;
}

/********************** getHeight function ***************************
 This function will get and return input for the weight of the person.
 *********************************************************************/
double getHeight()
{
    double height;

    //Get height
    std::cout << "Please enter your height in inches." << std::endl;
    std::cin >> height;

    return height;
}



/************** getBodyMassIndex function *****************
This function passes the weight value into the expressions
and returns a body mass index score.
***********************************************************/
double getBodyMassIndex(double weight, double height)
{
    double bodyMassIndex;

    //Calculate BMI
    bodyMassIndex = weight * (703 / (height * height));

    return bodyMassIndex;
}

int main()
{
    double weight,          //Weight in pounds
           height,          //Height in inches
           bodyMassIndex;   //BMI

    //Get weight
    weight = getWeight();

    //Get height
    height = getHeight();

    //Input validation for height and weight - no negative inputs
    if (weight < 0 || height < 0)
        std::cout << "Please run the program again with a valid inputs."
        << std::endl;
    else
    {
        //Get BMI using function with weight and height inputs
        bodyMassIndex = getBodyMassIndex(weight, height);

        //Test if person is underweight
        if (bodyMassIndex > 0 && bodyMassIndex < 18.5)
        {
            //Show BMI
            std::cout << "You are underweight with a BMI of "
            << std::fixed << std::showpoint << std::setprecision(2) << bodyMassIndex << std::endl;
        }
        //Test if person is optimal weight
        else if (bodyMassIndex > 18.5 && bodyMassIndex < 25)
        {
            //Show BMI
            std::cout << "You are an optimal weight with a BMI of "
            << std::fixed << std::showpoint << std::setprecision(2) << bodyMassIndex << std::endl;
        }
        //Test if person is overweight
        else if (bodyMassIndex > 25)
        {
            //Show BMI
            std::cout << "You are overweight with a BMI of "
            << std::fixed << std::showpoint << std::setprecision(2) << bodyMassIndex << std::endl;
        }
        else
            //Test input validation
            std::cout << "You entered an invalid input. Try again." << std::endl;
    }

    return 0;
}
