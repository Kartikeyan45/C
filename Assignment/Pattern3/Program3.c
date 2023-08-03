/*	Program 3 : Take no. of rows from the user
 *		    
 *		    4 a 3 b
 *		    4 a 3 b
 *		    4 a 3 b
 *		    4 a 3 b
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++){
	
		int x = 4;
		char ch = 'a';

		for(int j = 1; j <= row; j++){
		
			if(j % 2 == 0){
			
				printf("%c ", ch);
				ch++;
			}else{
			
				printf("%d ", x);
				x--;
			}
		}
		printf("\n");
	}
}
