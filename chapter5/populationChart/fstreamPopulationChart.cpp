/*******************************************************************
This program will use the fstream STL to read from a doc People.txt
for the year and population over a 100 year period. The output will
show population -- recorded in asterisks -- for every 20 years between
1900 - 2000. Each asterisk represents approximately 1000 people; All
were rounded up to the nearest 1000.
*********************************************************************/

#include<iostream>
#include<fstream>
#include<iomanip>

//Namespaces
using namespace std;

int main()
{
  ifstream inputFilePeople;       //File stream object declare to read from .txt
  int population,                 //Population of the city
      year;                       //Time (Range 100 years)

  //Open the input file using location of saved text file
  inputFilePeople.open("./basic.cpp.programs/chapter5/populationChart/People.txt");

  //Show Organization of display variables
  cout << "Year" << " Population\n"
  << "(each * represents approx. 1000 people)" << endl;

  //Skip additional line for formatting output
  cout << endl;

  //Iterate through the file 6 times for number of inputs in file
  for(int count = 0; count <= 5; ++count)
  {
    //Read the year number first
    inputFilePeople >> year;

    //Read the population input second
    inputFilePeople >> population;

    //Show year
    cout << year << " ";

    //Show '*' for number of people using 1000's place to measure
    for (int i = 0; i <= population/1000; ++i)
    {
      cout << "*";
    }

    //New line for formatting
    cout << endl;
  }

  //Close file
  inputFilePeople.close();

  return 0;
}
