/*******************************************************************************
Determinant function source file with function definition and return statement
for either the 2x2 or 3x3 matrix determinant.
********************************************************************************/
#include"determinant.hpp"

int determinant(int **arr, int num){

	int determinant = 0;

	//Calculate determinant for 2x2 matrix
	if(num == 4){
		determinant = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
	}
	//Calculate determinant for 3x3 matrix
	else{
		determinant = ((arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1]))) - (arr[0][1] * ((arr[1][0] * arr[2][2]) - (arr[1][2] * arr[2][0]))) - (arr[0][2] * ((arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0]))));
	}

	return determinant;
}
