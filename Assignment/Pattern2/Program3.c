/*	Program 3 : Take no. of rows from user
 *		    
 *		    4 4 4 4
 *		    3 3 3 3
 *		    2 2 2 2
 *		    1 1 1 1
*/

#include<stdio.h>

void main(){
	
	int row;
	printf("Enter no. of row :\n");
	scanf("%d", &row);

	int col;
	printf("Enter no. of col :\n");
	scanf("%d", &col);

	int x = 4;

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= col; j++){
		
			printf("%d ", x);
		}

		x--;
		printf("\n");
	}
}
