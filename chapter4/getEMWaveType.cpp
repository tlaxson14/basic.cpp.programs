/******************************************************************
This simple program will take input for the wavelength (in meters)
for an electromagnetic wave. The program will display what type of
EM wave it is based on the wavelength input. The spectral analysis
chart is an EM spectrum that shows the different types of radiation
- ranging from long wavelengths and lower frequency radio waves or
micro up to high frequency, short wavelength xray and/or gamma rays.
*******************************************************************/

#include <iostream>

/***************** getWavelength function ******************
This function will get and return the wavelength in meters.
************************************************************/
double getWavelength()
{
    double wavelength;     //Wavelength in meters

    std::cout << "Please enter the wavelength in meters: " << std::endl;

    std::cin >> wavelength;

    return wavelength;  //Return to main function
}

/***************** getWaveType function *******************
This function will compare the input for the wavelength and
use it to select the right type of wave.
***********************************************************/
void getWaveType(double wavelength)
{


    if (wavelength >= 1E-2)
        std::cout << "This is a Radio wave." << std::endl;
    else if (wavelength < 1E-2 && wavelength >= 1E-3)
        std::cout << "This is a Microwave." << std::endl;
    else if (wavelength < 1E-3 && wavelength >= 7E-7)
        std::cout << "This is an Infrared (IR) wave." << std::endl;
    else if (wavelength < 7E-7 && wavelength >= 4E-7)
        std::cout << "This wave is within the visible spectrum of light." << std::endl;
    else if (wavelength < 4E-7 && wavelength >= 1E-8)
        std::cout << "This is an Ultraviolet (UV) wave." << std::endl;
    else if (wavelength < 1E-8 && wavelength >= 1E-11)
        std::cout << "This is an X-ray." << std::endl;
    else if (wavelength <= 1E-11)
        std::cout << "This is a Gamma ray." << std::endl;
    else
        std::cout << "Re-run the program and please enter a valid wavelength in meters." << std::endl;
}



int main()
{
    double wavelength;

    //Get wavelength in meters
    wavelength = getWavelength();

    //Compare and show what type of EM wave
    getWaveType(wavelength);

    return 0;
}
