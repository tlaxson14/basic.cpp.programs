/******************************************************************
This program will take input for the number of seconds an object
falls to the ground. This value will be used in functions to
calculate and show the distance the object fell. The distance
formula uses the gravitational constant (9.8m/s^2) and the time
input in seconds rounded to the nearest hundredth. There are also
2 functions that will show in table format the distance the object
fell for the previous 5sec and 5sec after the user-input.
*******************************************************************/

#include<iostream>
#include<iomanip>
#include<cmath>

//Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::setw;

//Function prototypes
double getTime();
double getFallDistance(double time);
void getPreviousFive(double time);
void getNextFive(double time);

int main()
{
    double time,                 //Time in seconds
           fallDistance = 0.0;   //Distance object fell

    //Format output to hundredths place
    cout << fixed << showpoint << setprecision(2) << endl;

    //Return time in s, and assign to variable
    time = getTime();

    //Call getFallDistance function using argument time, assign to var
    fallDistance = getFallDistance(time);

    //Call getLastFive function and pass argument time
    getPreviousFive(time);

    //Call getNextFive function and pass argyment time
    getNextFive(time);

    return 0;
}

/********************** getTime function **********************
 This function will get input from the user for the total time
 an object fell.
 ***************************************************************/
double getTime()
{
    double timeInSeconds;     //Time object fell

    //Get time fell in seconds
    cout << "How many seconds did the object fall?" << endl;
    cin >> timeInSeconds;

    //Input validation
    while(timeInSeconds <= 0)
    {
        cout << "Please enter a valid time greater than 0." << endl;
        cin >> timeInSeconds;
    }

    //Return time to main function
    return timeInSeconds;
}

/******************* getFallDistance function *******************
 This function will pass an argument for time in seconds in order
 to calculate and return the fall distance in meters.
 *****************************************************************/
double getFallDistance(double timeInSeconds)
{
    double distanceInMeters = 0.0;      //Distance object fell

    //Calculate distance object fell
    distanceInMeters = 0.5 * 9.8 * pow(timeInSeconds, 2.0);

    //Show distance fell in time seconds
    cout << "The object fell " << distanceInMeters << " meters in "
    << timeInSeconds << " seconds." << endl;

    //Return distance to main function
    return distanceInMeters;
}

/****************** getPreviousFive function *******************
This function will use a loop to calculate and show the distance
the object fell for 5 iterations before the user-entered time.
 ***************************************************************/
void getPreviousFive(double timeInSeconds)
{
    double distance = 0.0;      //Distance object fell

    //Show previous 5 seconds
    cout << "\n -- 5 seconds before -- \n" << endl;

    //Show distance object fell - table format
    cout << "Time (s)" << "    " << "Distance (m)" << endl;
    cout << "-------------------------" << endl;

    //Loop for 5 iterations less than user-entered time
    for(double i = timeInSeconds - 1.0; i > (timeInSeconds - 6.0); --i)
    {
        //Input validation for positive time values
        if(i >= 0)
        {
            //Calculate the distance the object fell
            distance = (0.5) * 9.8 * pow(i, 2.0);

            //Show time and distance in format
            cout << i << setw(16) << distance << endl;
        }
        else
            break;
    }
}

/******************* getNextFive function ********************
This function will perform the exact same operations as the
getLastFive function. This function however will calculate and
show the distance the object will fall 5 iterations after the
user-entered time.
**************************************************************/
void getNextFive(double timeInSeconds)
{
    double distance = 0.0;      //Distance object fell

    //Show next 5 seconds
    cout << "\n -- 5 seconds after -- \n" << endl;

    //Show distance object fell - table format
    cout << "Time (s)" << "    " << "Distance (m)" << endl;
    cout << "-------------------------" << endl;

    //Loop for 5 iterations less than user-entered time
    for(double i = timeInSeconds + 1.0; i < (timeInSeconds + 6.0); ++i)
    {
        //Calculate the distance the object fell
        distance = (0.5) * 9.8 * pow(i, 2.0);

        //Show time and distance in format
        cout << i << setw(16) << distance << endl;
    }
}
