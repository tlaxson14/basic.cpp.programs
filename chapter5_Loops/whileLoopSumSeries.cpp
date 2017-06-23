/***********************************************************
This program will take a positive number and validate the
input using a while loop. This number will also be used to
calculate and show the sum using a while loop. The program
will calculate the sum for every positive integer between 1
and n, where n is some integer greater than or equal to 1.
************************************************************/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int count,          //Positive integer variable
        sum = 0;        //Sum of integers

    //Get positive integer
    cout << "Please enter any positive integer." << endl;
    cin >> count;

    //Loop input validation - int var must be > 0
    while(count < 0)
    {
        cout << "Please enter an integer greater than 0." << endl;
        cin >> count;
    }

    //Loop initializer variable
    int number = 1;

    //Calculate sum of every integer until number is equal to count
    while(number <= count)
    {
        //Calculate sum
        sum = sum + number;

        //Increment
        number++;
    }

    //Show sum
    cout << "The sum of all integers between 1 and " << count << " is equal to " << sum << endl;

    return 0;
}
