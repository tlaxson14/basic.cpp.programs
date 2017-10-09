/******************************************************************************
ReadMatrix function source file with function definition. The function will
take the number of rows and columns from user input and get user input for
each of the elements of the selected matrix.
*******************************************************************************/
#include<iostream>
#include"readMatrix.hpp"

using namespace std;

//Function definition
void readMatrix(int **arr, int num){

	//Initialize rows and columns
	int rows = 0, cols = 0;

	//Condition for 2x2 or 3x3 selection
	if(num == 4){
		rows = 2;
		cols = 2;
	}
	else if(num == 9){
		rows = 3;
		cols = 3;
	}

	//Get values for chosen array from user
	cout << "You will enter " << num << " values." << endl;

	//Get matrix elements from user
 	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << "[" << i<< "]" << "[" << j << "] = ";
			cin >> arr[i][j];

			//Input validation for matrix
			while(cin.fail()){
				cout << "Please enter a valid integer value." << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "[" << i<< "]" << "[" << j << "] = ";
				cin >> arr[i][j];
			}
		}
	}
}
