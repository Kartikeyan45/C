/*	Program 2 : Take no. of rows from the user
 *		    
 *		    3 2 1
 *		    c b a
 *		    3 2 1
 *		    c b a
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of row :\n");
	scanf("%d", &row);

	int col;
	printf("Enter no. of col :\n");
	scanf("%d", &col);

	for(int i = 1; i <= row; i++){
	
		char ch = 'c';
		int x = 3;

		for(int j = 1; j <= col; j++){
			
			if(i % 2 == 0){
				printf("%c ", ch);
				ch--;
			}else{
			
				printf("%d ", x);
				x--;
			}
		}

		printf("\n");
	}
}
