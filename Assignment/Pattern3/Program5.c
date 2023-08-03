/*	Program 5 : Take no. of rows from the user
 *		    
 *		    1  4  3
 *		    16 5  36
 *		    7  64  9
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	int x = 1;

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= row; j++){
		
			if(x % 2 != 0){
			
				printf("%d ", x);
				x++;
			}else{
			
				printf("%d ", x * x);
				x++;
			}
		}

		printf("\n");
	}
}
