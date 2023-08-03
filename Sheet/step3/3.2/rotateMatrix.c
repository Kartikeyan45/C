
/*
 	Rotate Image by 90 degree
 
 	Problem Statement: Given a matrix, your task is to rotate the matrix 90 degrees clockwise.
 
 	Example 1:

	Input: [[1,2,3],[4,5,6],[7,8,9]]

	Output: [[7,4,1],[8,5,2],[9,6,3]]

	Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix.

	Example 2:

	Input: [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

	Output:[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
	Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix
*/

/*

#include<stdio.h>

void rotateMatrix(int arr[][3], int size, int new[][3]){

	for(int i = 0; i < size; i++){
		
		for(int j = 0; j < size; j++){
			
			new[j][size-i-1] = arr[i][j];
		}
	}
}
 
void main(){
	
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int new[3][3];

	rotateMatrix(arr, 3, new);

	for(int i = 0; i < 3; i++){

		for(int j = 0; j < 3; j++){
		
			printf("%d\n", new[i][j]);
		}
	}
}

	Time Complexity: O(N*N) to linearly iterate and put it into some other matrix.

	Space Complexity: O(N*N) to copy it into some other matrix.
 
*/

/*
Solution 2: Optimized approach

Approach:

Step 1: Transpose the matrix. (transposing means changing columns to rows and rows to columns)

Step 2: Reverse each row of the matrix.

*/

#include<stdio.h>

void swap(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
}

void rotateMatrix(int arr[][3], int size){
	
	// 1 - transpose
	for(int i = 0; i < size; i++){
		
		for(int j = 0; j < i; j++){
			
//			swap(arr[i][j], arr[j][i]);
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}

	// 2 - reverse each row of matrix
	
	for(int i = 0; i < size; i++){
		
		int start = 0, end = size - 1;

		while(start < end){

			swap(&arr[i][start], &arr[i][end]);

			start++;
			end--;
		}
	}
}

void main(){
	
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	rotateMatrix(arr, 3);

	for(int i = 0; i < 3; i++){

		for(int j = 0; j < 3; j++){
			
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}

/*

Time Complexity: O(N*N) + O(N*N).One O(N*N) is for transposing the matrix and the other is for reversing the matrix.

Space Complexity: O(1).

*/
