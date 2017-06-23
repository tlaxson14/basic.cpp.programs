/*********************************************************************
This program will demonstrate use of a switch statement by displaying
the Roman numeral using an integer input (0-10) from the user.
**********************************************************************/
#include <iostream>

int main()
{
    int numVal;

    //Get integer value 0-10
    std::cout << "Enter number: " << std::endl;
    std::cin >> numVal;

    //Input validation
    if (numVal >= 0 && numVal <= 10)
    {
        switch (numVal)
        {
            case 0:     //input 0
                std::cout << "Roman numeral: " << "nulla" << std::endl;
                break;

            case 1:     //input 1
                std::cout << "Roman numeral: " << "I" << std::endl;
                break;

            case 2:     //input 2
                std::cout << "Roman numeral: " << "II" << std::endl;
                break;

            case 3:     //input 3
                std::cout << "Roman numeral: " << "III" << std::endl;
                break;

            case 4:     //input 4
                std::cout << "Roman numeral: " << "IV" << std::endl;
                break;

            case 5:     //input 5
                std::cout << "Roman numeral: " << "V" << std::endl;
                break;

            case 6:     //input 6
                std::cout << "Roman numeral: " << "VI" << std::endl;
                break;

            case 7:     //input 7
                std::cout << "Roman numeral: " << "VII" << std::endl;
                break;

            case 8:     //input 8
                std::cout << "Roman numeral: " << "VIII" << std::endl;
                break;

            case 9:     //input 9
                std::cout << "Roman numeral: " << "IX" << std::endl;
                break;

            case 10:    //input 10
                std::cout << "Roman numeral: " << "X" << std::endl;
                break;
        }
    }
    //Input validation
    else
    {
        std::cout << "Invalid answer. Run the program again with a valid input." << std::endl;
    }

    return 0;
}
