


#include <iostream>

void getConversionCelsiusToFahrenheit()
{
    double celsius, fahrTemperature;

    std::cout << "Enter a temperature in degrees Celsius: " << std::endl;

    std::cin >> celsius;

    //Formula to convert celsius to fahrenheit
    fahrTemperature = (9.0/5.0) * celsius + 32;

    std::cout << celsius << " degrees Celsius = " << fahrTemperature << " degrees Fahrenheit." << std::endl;
}

int main()
{
  getConversionCelsiusToFahrenheit();

  return 0;
}
