/**********************************************************
This simple program shows use of a while-loop to print out
the ASCII characters with integer values 32 - 127.
***********************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int code = 32;      //Starting integer for loop header
    char asciiCode;     //ASCII character

    //Show ASCII values 32 - 47
    cout << "ASCII values 32 - 47:" << endl;

    //Loop through ASCII values 32 - 47
    while (code >= 32 && code <= 47)
    {
        //Assign asciiCode to the ASCII character
        asciiCode = static_cast<char>(code);

        //Show ASCII value
        std::cout << asciiCode << " ";

        //Incrementer for each iteration
        code += 1;
    }

    //Show ASCII values 48 - 63
    cout << "\n\nASCII values 48 - 63:" << endl;

    //Loop through ASCII values 48 - 63
    while (code > 47 && code <= 63)
    {
      //Assign asciiCode to the ASCII character
      asciiCode = static_cast<char>(code);

      //Show ASCII value
      std::cout << asciiCode << " ";

      //Incrementer for each iteration
      code += 1;
    }

    //Show ASCII values 64 - 79
    cout << "\n\nASCII values 64 - 79:" << std::endl;

    //Loop through ASCII values 64 - 79
    while (code > 63 && code <= 79)
    {
      //Assign asciiCode to the ASCII character
      asciiCode = static_cast<char>(code);

      //Show ASCII value
      std::cout << asciiCode << " ";

      //Incrementer for each iteration
      code += 1;
    }

    //Show ASCII values 80 - 95
    cout << "\n\nASCII values 80 - 95:" << std::endl;

    //Loop through ASCII values 80 - 95
    while (code > 79 && code <= 95)
    {
      //Assign asciiCode to the ASCII character
      asciiCode = static_cast<char>(code);

      //Show ASCII value
      std::cout << asciiCode << " ";

      //Incrementer for each iteration
      code += 1;
    }

    //Show ASCII values 96 - 111
    cout << "\n\nASCII values 96 - 111:" << std::endl;

    //Loop through ASCII values 96 - 111
    while (code > 95 && code <= 111)
    {
      //Assign asciiCode to the ASCII character
      asciiCode = static_cast<char>(code);

      //Show ASCII value
      std::cout << asciiCode << " ";

      //Incrementer for each iteration
      code += 1;
    }

    //Show ASCII values 112 - 127
    cout << "\n\nASCII values 112 - 127:" << std::endl;

    //Loop through ASCII values 112 - 127
    while (code > 111 && code <= 127)
    {
      //Assign asciiCode to the ASCII character
      asciiCode = static_cast<char>(code);

      //Show ASCII value
      std::cout << asciiCode << " ";

      //Incrementer for each iteration
      code += 1;
    }

    return 0;
}
