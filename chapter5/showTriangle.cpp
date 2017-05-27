/****************************************************
This program will demonstrate a knowledge of nested
loop syntax by creating a display of asterisks in a
similar triangle pattern to the one shown below. It
will spell the word 'TRIANGLES' using one letter for
every row of asterisks.

T*
R***
I*****
A*******
N*********
G*******
L*****
E***
S*

****************************************************/

#include<iostream>

//Namespaces
using std::cout;
using std::endl;

int main()
{
  //Initial loop
  for(int i = 0; i < 1; i++)
  {
    //Show letter 'T'
    cout << "T";

    //Show initial asterisk
    cout << "*" << endl;

    //Show letter 'R'
    cout << "R";

    //Loop for 3 asterisks
    for(int j = 0; j < 3; j++)
    {
      cout << "*";
    }

    //New line - flush buffer
    cout << endl;

    //Show letter 'I'
    cout << "I";

    //Loop for 5 asterisks
    for(int k = 0; k < 5; k++)
    {
      cout << "*";
    }

    //New line - flush buffer
    cout << endl;

    //Show letter 'A'
    cout << "A";

    //Loop for 7 asterisks
    for(int l = 0; l < 7; l++)
    {
      cout << "*";
    }

    //New line - flush buffer
    cout << endl;

    //Show letter 'N'
    cout << "N";

    //Loop for 9 asterisks
    for(int m = 0; m < 9; m++)
    {
      cout << "*";
    }

    //New line - flush buffer
    cout << endl;

    //Show letter 'G'
    cout << "G";

    //Loop for 7 asterisks
    for(int l = 0; l < 7; l++)
    {
      cout << "*";
    }

    //New line - flush buffer
    cout << endl;

    //Show letter 'L'
    cout << "L";

    //Loop for 5 asterisks
    for(int k = 0; k < 5; k++)
    {
      cout << "*";
    }

    //New line - flush buffer
    cout << endl;

    //Show letter 'E'
    cout << "E";

    //Loop for 3 asterisks
    for(int j = 0; j < 3; j++)
    {
      cout << "*";
    }

    //Show letter 'S' with final asterisk
    cout << "\nS*" << endl;
  }

  return 0;
}
