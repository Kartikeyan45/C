/*	PRogram 7 : WAP to print Diagonal elements sum in 2D array.
 *		    Take array size and elements from the user.
*/

#include<stdio.h>

void main(){

	int row, col;
	printf("Enter row and col :\n");
	scanf("%d %d", &row, &col);

	int arr[row][col];

	printf("Enter Array Elements :\n");

	int sum = 0;

	for(int i = 0; i < row; i++){
	
		for(int j = 0; j < col; j++){
		
			scanf("%d", &arr[i][j]);
			
			//left diagonal sum
			if(i == j){
			
				sum = sum + arr[i][j];		//15
			}
			
			//left diagonal sum without repeating middle element
			if(i+j == 2 && i != j){
				sum = sum + arr[i][j];
			}
		}
	}

	printf("Sum is :%d\n", sum);

}
