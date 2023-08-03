/*	Program 7 : Take no. of rows from the user
 *		    
 *		    1  4  27
 *		    4  27 16
 *		    27 16 125
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++){
	
		for(int j = 0; j < row; j++){
			
			int num = i + j;

			if(num % 2 == 0){
				
				printf("%d ", num*num);
			}else{
			
				printf("%d ", num*num*num);
			}
		}
		printf("\n");
	}
}
