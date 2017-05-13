/**********************************************************************
This program will use the speed of sound through a user-selected medium
to calculate and show the amount of time the sound wave travels through
the selected medium. The program lists 3 options to select from a list:
Air, Water, and Steel. The progam will take this input and ouput a time
(in seconds) that the sound wave will take to pass through the medium.
Note: Generally, sound travels faster in rigid media (solids),
slower in liquid media, (water) and the slowest in gases. (air)
***********************************************************************/

#include <iostream>
#include <iomanip>

/************************* getMenu function **********************
This function will show all the menu options for available input.
******************************************************************/
void getMenu()
{
    //Show formatted menu with table format - \t
    std::cout << "\n\t Medium" << std::endl;

    std::cout << "\t --------" << std::endl;

    std::cout << "\t 1. Air" << std::endl;

    std::cout << "\t 2. Water" <<  std::endl;

    std::cout << "\t 3. Steel" <<  std::endl;
}

/********************* getGasMedium function ***********************
This function will calculate and show the time (s) for the sound wave
to travel through a gas -- air.
********************************************************************/
void getGasMedium(double feetTravel)
{
    //Declare constant variable for medium speed in ft/s
    const double AIR_SPEED_FeetPerSec = 1100.0;
    double time;

    //Calculate time required for sound wave to travel thru medium
    time = (feetTravel / AIR_SPEED_FeetPerSec);

    //Input validation
    if (time > 0.0)
    {
        //Show time
        std::cout << "It will take approx. "
        << std::fixed << std::showpoint << std::setprecision(4) << time
        << " seconds for the sound wave to travel thru steel."
        << std::endl;
    }
    else
        std::cout << "Re-run the program and enter a positive number." << std::endl;
}

/******************** getLiqMedium function ***********************
This function will calculate and show the time (s) required for the
sound wave to travel through a liquid media -- water.
*******************************************************************/
void getLiqMedium(double feetTravel)
{
    //Declare constant variable for medium speed in ft/s
    const double LIQ_SPEED_FeetPerSec = 4900.0;
    double time;

    //Calculate time required for sound wave to travel thru medium
    time = (feetTravel / LIQ_SPEED_FeetPerSec);

    //Input validation
    if (time > 0.0)
    {
        //Show time
        std::cout << "It will take approx. "
        << std::fixed << std::showpoint << std::setprecision(4) << time
        << " seconds for the sound wave to travel thru steel."
        << std::endl;
    }
    else
        std::cout << "Re-run the program and enter a positive number." << std::endl;
}

/******************* getSolidMedium function ************************
This function will calculate and show the time (s) for the sound wave
to travel through a solid medium -- steel.
*********************************************************************/
void getSolidMedium(double feetTravel)
{
    //Declare constant variable for medium speed in ft/s
    const double SOLID_SPEED_FeetPerSec = 16400.0;
    double time;

    //Calculate time required for sound wave to travel thru medium
    time = (feetTravel / SOLID_SPEED_FeetPerSec);

    //Input validation
    if (time > 0)
    {
        //Show time
        std::cout << "It will take approx. "
        << std::fixed << std::showpoint << std::setprecision(4) << time
        << " seconds for the sound wave to travel thru steel."
        << std::endl;
    }
    else
        std::cout << "Re-run the program and enter a positive number." << std::endl;
    }


int main()
{
    int medium = 0;     //Menu choices - initialized for input validation
    double distance;    //Distance thru medium
    enum Medium         //Data types for this program purpose
    {
        GAS_AIR = 1,
        LIQ_WATER,
        SOLID_STEEL
    };

    //Purpose
    std::cout << "Please select a medium to calculate how much time \n"
    << "the sound wave will take to travel a given distance." << std::endl;

    //Call function to show menu
    getMenu();

    //Get menu selection + input validation
    std::cin >> medium;
    if (medium > 0 && medium < 4)
    {
        //Get feet traveled by the sound wave
        std::cout << "Please enter the feet traveled by the sound wave." << std::endl;
        std::cin >> distance;

        //Get medium
        switch (medium)
        {
            //If input is 1, show time for sound to travel through gas medium
            case Medium(GAS_AIR):
            {
                getGasMedium(distance);
                break;
            }
            //If input is 2, show time for sound to travel through liquid medium
            case Medium(LIQ_WATER):
            {
                getLiqMedium(distance);
                break;
            }
            //If input is 3, show time for sound to tavel through solid medium
            case Medium(SOLID_STEEL):
            {
                getSolidMedium(distance);
                break;
            }

        }
    }
    else
        std::cout << "Please re-run the program and enter a valid number 1 - 3." << std::endl;

    return 0;
}
