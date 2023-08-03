/*	Program 8 : Take no. of from the user
 *		    
 *		    18 16 14
 *		    12 10 8
 *		    6  4  2
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	int x = 18;
	
	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= row; j++){
			
			printf("%d ", x);
			x -= 2;
		}
		printf("\n");
	}
}
