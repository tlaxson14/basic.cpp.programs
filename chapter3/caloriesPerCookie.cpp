//This program calculates and displays the calories per cookie in a fixed bag

#include <iostream>
#include <iomanip>

/************getCaloriesPerCookie function******************
This function initializes, calculates, and displays the
total calories consumed based on input from function
getCaloriesCount
************************************************************/
int getCaloriesPerCookie(int cookieNumberAte)
{
    //initialize constant fixed variables
    const int cookiesPerBag = 30;
    const int servingSize = 10;
    const int caloriesCountPerServing = 240;
    //initalize continuous variables
    int cookiesPerServing,caloriesPerServing, caloriesPerCookie, totalCaloriesConsumed;

    //calculate how many cookies in one serving
    cookiesPerServing = (cookiesPerBag / servingSize);
    //calculate how many calories in one serving
    caloriesPerServing = (caloriesCountPerServing / cookiesPerServing);
    //calculate how many calories per cookie
    caloriesPerCookie = (caloriesPerServing / cookiesPerServing);
    //calculate total number of calories consumed
    totalCaloriesConsumed = caloriesPerCookie * cookieNumberAte;

    //output statement
    std::cout << "Total calories consumed: " << totalCaloriesConsumed << std::endl;

    return totalCaloriesConsumed;
}
/******************function getCaloriesCount*******************
This function intializes and takes user input for number of
cookies ate before feeding entry into the getCaloriesPerCookie
function
***************************************************************/
void getCaloriesCount()
{
    int cookiesNumber;//, caloriesConsumed;

    std::cout << "Enter number of cookies ate: " << std::endl;
    std::cin >> cookiesNumber;

    getCaloriesPerCookie(cookiesNumber);
}
int main()
{
  //call getCaloriesCount function to determine how many calories consumed
  getCaloriesCount();   //has two functions

  return 0;
}
