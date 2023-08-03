/*	Program 9 : If possible take no. of rows from the user
 *		    
 *		    2  5  10
 *		    17 26 37
 *		    50 65 82
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows :\n");
	scanf("%d", &row);

	int col;
	printf("Enter no. of col :\n");
	scanf("%d", &col);

	int x = 1;

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= col; j++){
		
			printf("%d ", (x * x) + 1);
			x++;
		}

		printf("\n");
	}
}
