/*******************************************************************************
This program will take a sentence, or string input, and user the toupper function
to evaluate each letter of the string in an array. Each element of the array is
evaluated  and used to count the number of vowels in the sentence. The program
will also use the length() function to determine how many characters are in the
sentence input.
*******************************************************************************/

#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main()
{
  char letter;
  string sentence;
  int vowelCount = 0;

  //Get string, sentence input from user
  cout << "Please enter a sentence and I will tell you how many vowels it contains." << endl;
  getline(cin, sentence);

  //Initialize array and loop through each character of input
  for(int i = 0; i < sentence.length(); i++){

    //Use toupper function to capitalize letter in array
    letter = toupper(sentence[i]);

    //Increase vowel count if uppercase letter is a vowel
    switch(letter){
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': vowelCount++;
    }
  }

  //Show number of vowels in sentence
  cout << "There are " << vowelCount << " vowels in the sentence." << endl;

  return 0;
}
