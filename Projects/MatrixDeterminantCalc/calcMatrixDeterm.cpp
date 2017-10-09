/******************************************************************************
Source file for a matrix determinant calculator. The program will take accept
input for a 2x2 or 3x3 matrix, take input for each of the elements, and calc
the determinant from the matrix. It will do this by dynamically allocating
memory for the arrays. The input validation will test for any inputs that will
cause the program to crash. The program will display the inputted elements in
formatted matrix. The result of the determinant will also be shown.
*****************************************************************************/
#include<iostream>
#include<iomanip>
#include"readMatrix.hpp"
#include"determinant.hpp"

using namespace std;

int main()
{
	int choice = 0;		//User selection

	//Show options and get selection
	cout << "Select one of the following arrays. \n1. 2x2\n2. 3x3" << endl;
	cin >> choice;


	//Input validation
	while(choice != 1 && choice != 2){
		cout << "Select one of the following arrays. (1 or 2)" << endl;
		cin >> choice;

		//Integer input validation
		if(cin.fail()){
			cout << "Please enter a valid integer. (1 or 2)" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}

	//Show input
	if(choice == 1){
		cout << "You selected a 2x2 matrix." << endl;
	}
	else if(choice == 2){
		cout << "You selected a 3x3 matrix." << endl;
	}

	//Run process using switch if array is 2x2 or 3x3
	switch(choice){
		case 1:{
			int rows = 2, cols = 2;

			//Initialize dynamic 2D array
			int **arr2x2 = new int *[rows];
			for(int i = 0; i < rows; i++){
				arr2x2[i] = new int[cols];
			}

			//Call function to read matrix input from user
			readMatrix(arr2x2, (rows * cols));

			//Format output for 2x2 matrix
			cout << "\n" << rows << "x" << cols << " array" << endl;
			cout << "---------" << endl;

			//Show matrix
			for(int i = 0; i < rows; i++){
				for(int j = 0; j < cols; j++){
					cout << setw(3) << arr2x2[i][j] << " ";
				}

				cout << endl; //Add matrix style
			}

			//Call determinant function and display determinant
			cout << "\nDeterminant = " << determinant(arr2x2, (rows * cols)) << endl;

			//Deallocate the memory
			for(int i = 0; i < rows; i++){
				delete [] arr2x2[i];
			}
			delete [] arr2x2;
			break;
		}

		case 2:{
			int rows = 3, cols = 3;

			//Initialize dynamic 2D array
			int **arr3x3 = new int *[rows];
			for(int i = 0; i < rows; i++){
				arr3x3[i] = new int[cols];
			}

			//Call function to read matrix input from user
			readMatrix(arr3x3, rows * cols);

			//Format output for 3x3 matrix
			cout << "\n" << rows << "x" << cols << " array" << endl;
			cout << "---------" << endl;

			//Show matrix
			for(int i = 0; i < rows; i++){
				for(int j = 0; j < cols; j++){
					cout << setw(2) << arr3x3[i][j] << " ";
				}

				cout << endl; //Add matrix style
			}

			//Call determinant function and display determinant
			cout << "\nDeterminant = " << determinant(arr3x3, rows * cols) << endl;

			//Deallocate the memory
			for(int i = 0; i < rows; i++){
				delete [] arr3x3[i];
			}
			delete [] arr3x3;
			break;
		}
	}

	return 0;
}
