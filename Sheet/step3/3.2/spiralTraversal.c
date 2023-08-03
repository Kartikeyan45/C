
/*

Spiral Traversal of Matrix

Problem Statement: Given a Matrix, print the given matrix in spiral order.

Example 1:
Input: Matrix[][] = { { 1, 2, 3, 4 },
		      { 5, 6, 7, 8 },
		      { 9, 10, 11, 12 },
	              { 13, 14, 15, 16 } }

Outhput: 1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10.
Explanation: The output of matrix in spiral form.

Example 2:
Input: Matrix[][] = { { 1, 2, 3 },
	              { 4, 5, 6 },
		      { 7, 8, 9 } }

Output: 1, 2, 3, 6, 9, 8, 7, 4, 5.
Explanation: The output of matrix in spiral form.

*/

#include<stdio.h>

void printSpiral(int arr[][3], int row, int col){
	
	int top = 0, left = 0, bottom = row - 1, right = col - 1;

	while(top <= bottom && left <= right){
		
		for(int i = left; i <= right; i++){
			
			printf("%d ", arr[top][i]);
		}

		top++;

		for(int i = top; i <= bottom; i++){
			
			printf("%d ", arr[i][right]);
		}

		right--;

		if(top <= bottom){
			
			for(int i = right; i >= left; i--){
				
				printf("%d ", arr[bottom][i]);
			}

			bottom--;
		}

		if(left <= right){
			
			for(int i = bottom; i >= top; i--){
				
				printf("%d ", arr[i][left]);
			}

			left++;
		}
	}
}

void main(){
	
	int row = 3, col = 3;	

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	printSpiral(arr, row, col);

	printf("\n");

	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){
			
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}
