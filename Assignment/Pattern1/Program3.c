/*	Program 3 : If possible take no. of rows from the user
 *		    
 *		    1 1 1 1
 *		    2 2 2 2
 *		    3 3 3 3
 *		    4 4 4 4
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter the number of rows :\n");
	scanf("%d", &row);

	int col;
	printf("Enter the number of columns :\n");
	scanf("%d", &col);

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= col; j++){
		
			printf("%d ", i);
	
		}

		printf("\n");
	}
}
