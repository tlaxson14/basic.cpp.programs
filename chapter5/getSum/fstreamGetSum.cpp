/*************************************************
This program will use a file called numbers.txt
that contains a series of numbers. The program
will ask how many numbers the file contains and
takes this input to calculate and show the sum of
the values in the numbers.txt file.
***************************************************/

#include<iostream>
#include<fstream>
#include<iomanip>

//Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::setw;
using std::right;

int main()
{
  ifstream inputFileNumbers;    //File stream object for numbers.txt
  int intValue;                 //Number of numbers in .txt file
  double number,                //String object variable for one value
         sum = 0.0;             //Sum of values in .txt file, initialized to 0

  //Get number of values in .txt file
  cout << "How many values are stored in the file?" << endl;
  cin >> intValue;

  //Input validation
  while(intValue <= 0)
  {
    cout << "Please enter a positive integer value." << endl;

    //Get number of values in .txt file
    cout << "How many values are stored in the file?" << endl;
    cin >> intValue;
  }
  //Open document
  inputFileNumbers.open("./basic.cpp.programs/chapter5/getSum/numbers.txt");

  //Loop to calculate sum for number of values stored in .txt file
  for(int i = 1; i <= intValue; ++i)
  {
    //Assign numbers to var
    inputFileNumbers >> number;

    //Format output for values in numbers.txt file
    cout << "No." << i << ": " << setw(6) << right << number << endl;

    //Calculate sum
    sum = sum + number;
  }

  //Show sum
  cout << "Sum of " << intValue << " numbers from numbers.txt = " << sum
  << endl;

  //Close file
  inputFileNumbers.close();

  return 0;
}
