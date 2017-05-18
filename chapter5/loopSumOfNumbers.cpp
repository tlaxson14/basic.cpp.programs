/***********************************************************
This program will take a positive integer and validate the
integer using a while loop. The number will also be used to
calculate and show the sum. (i.e. if a number input is 4, the
program will calculate the sum of 1 + 2 + 3 + 4, for any
integer input > 0. There are no limits to integer input so
long as number > 0.
************************************************************/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int number,         //Positive integer variable - loop header
        sum = 0;        //Sum of integers

    //Get positive integer
    cout << "Please enter any positive integer." << endl;
    cin >> number;

    //Loop input validation - int must be > 0
    while (number < 0)
    {
        cout << "Please enter an integer greater than 0." << endl;
        cin >> number;
    }

    //For loop to calculate the sum of the series until count equals number
    for (int count = 1; count <= number; count++)
    {
        //Calculate sum
        sum = sum + count;
    }

    //Show sum
    cout << "The sum of all integers between 1 and " << number << " is equal to " << sum << endl;

    return 0;
}
