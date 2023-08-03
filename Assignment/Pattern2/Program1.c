/*	Program 1 : Take no. of rows from the user
 *		    
 *		    4 3 2 1
 *		    5 4 3 2
 *		    6 5 4 3 
 *		    7 6 5 4
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows :\n");
	scanf("%d", &row);

	int col;
	printf("Enter no. of col :\n");
	scanf("%d", &col);

	int x, y = 4;

	for(int i = 1; i <= row; i++){
	
		x = y;

		for(int j = 1; j <= col; j++){
		
			printf("%d ", x);
			x--;
					
		}

		printf("\n");
		y++;
	}
}
