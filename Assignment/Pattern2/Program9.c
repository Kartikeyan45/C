/*	Program 9 : Take no. of rows from the user
 *		    
 *		    0   3   8
 *		    15  24  35
 *		    48  63  80
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter rows:\n");
	scanf("%d", &row);

	int x = 1;

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= row; j++){
			
			printf("%d ", (x * x) - 1);
			x++;
		}

		printf("\n");
	}
}
