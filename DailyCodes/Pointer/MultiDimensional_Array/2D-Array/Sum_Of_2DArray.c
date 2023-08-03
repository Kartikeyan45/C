/*	Program 6 : WAP to print the sum of 2D-Array elements.
 *		    Take array size and elements from the user.
*/		    

#include<stdio.h>

void main(){

	int row, col;
	printf("Enter row and col :\n");
	scanf("%d %d", &row, &col);

	int arr[row][col];

	int sum = 0;

	printf("Enter Array Elements:\n");
	for(int i = 0; i < row; i++){

		for(int j = 0; j < col; j++){
			
			scanf("%d", &arr[i][j]);

			sum = sum + arr[i][j];
		}
	}

	printf("Sum is :%d\n", sum);
}
