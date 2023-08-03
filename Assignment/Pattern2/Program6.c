/*	Program 6 : Take no. of rows from the user
 *		    
 *		    = = = =
 *		    $ $ $ $
 *		    = = = =
 *		    $ $ $ $
*/

#include<stdio.h>

void main(){

	int row, col;
	printf("Enter no. of row :\n");
	scanf("%d %d", &row, &col);

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= col; j++){
		
			if(i % 2 != 0){
			
				printf("= ");
			}else{
			
				printf("$ ");
			}
		}

		printf("\n");
	}
}
