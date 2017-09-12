/******************************************************************************
 This program will accept up to 20 integer values between 0 - 100 and store the
 test scores in an array. The main function will report how many perfect test
 scores were achieved and display them.
********************************************************************************/

#include<iostream>

using namespace std;

//Function prototype
int perfectScores(int students);

int main() {

    //Initialize number of students (max 20) and number of perfect scores
    int students, perfect;

    //Get number of students with test scores
    cout << "Please enter the number of scores you would like to enter: (20 max)" << endl;
    cin >> students;

    //Input validation
    while(students <= 0 || students > 20) {
        cout << "Please enter a valid number 1 - 20." << endl;
        cin >> students;
    }

    //Set number of perfect scores to function perfectScores using number of students
    //as parameters to initialize the array inside function perfectScores
    perfect = perfectScores(students);

    //Show number of perfect scores
    cout << "The number of perfect scores: " << perfect << endl;

    return 0;
}

/********************** perfectScores function *****************************
This function will accept an argument for the number of scores to be
entered as determined from the main function for number of students. It
will take this input and create an array. The array will store all of
the test scores for each student. Finally, the function will keep a running
total of the perfect scores (i.e. 100) achieved before returning this number
back to main.
****************************************************************************/
int perfectScores(int students) {

    int testScores[students];       //Initialize array with number of test scores
    int perfectScores = 0;          //Initialize number of perfect scores achieved

    //Enter test scores for each student of array
    for(int i = 0; i < students; i++) {
        cout << "Enter the test scores for student " << i + 1 << endl;
        cin >> testScores[i];

        //Input validation
        while(testScores[i] < 0 || testScores[i] > 100) {
            cout << "Please enter a valid score between 0 - 100 for student " << i + 1 << endl;
            cin >> testScores[i];
        }

        //If student scores 100, add one to perfect score total
        if(testScores[i] == 100)
            perfectScores++;
    }

    return perfectScores;
}
