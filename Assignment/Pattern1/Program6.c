/*	Program 6 : IF possible take no. of rows from the user
 *		    
 *		    $ = $ =
 *		    $ = $ =
 *		    $ = $ =
 *		    $ = $ = 
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter the no. of rows :\n");
	scanf("%d", &row);

	int col;
	printf("Enter the no. of cols :\n");
	scanf("%d", &col);

	for(int i = 1; i <= row; i++){
		
		for(int j = 1; j <= col; j++){
		
			if(j % 2 == 0){
			
				printf("= ");
			}else{
			
				printf("$ ");
			}
		}

		printf("\n");
	}
}
