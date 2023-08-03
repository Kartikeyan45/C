/*	Program 6 : Take no. of rows from the user
 *		    
 *		    = = = = = = 
 *		    $ $ $ $ $ $
 *		    @ @ @ @ @ @
 *		    = = = = = = 
 *		    $ $ $ $ $ $
 *		    @ @ @ @ @ @
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= row; j++){
		
			if(i % 3 == 0){
				
				printf("= ");
			}else if(i % 3 == 1){
				
				printf("$ ");
			}else{
			
				printf("@ ");
			}
		}

		printf("\n");
	}
}
