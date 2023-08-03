/*	Program 1 : Take no. of rows from the user
 *		    
 *		    1 2 3 4
 *		    1 3 5 7
 *		    1 4 7 10
 *		    1 5 9 13
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++){
			
		int x = 1;

		for(int j = 1; j <= row; j++){
		
			printf("%d ", x);
			x += i;
		}
		printf("\n");
	}
}
