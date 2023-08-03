/*	Program 4 : Take no. of rows from the user
 *		    
 *		    I H G
 *		    F E D
 *		    C B A
*/

#include<stdio.h>

void main(){

	int row, col;
	printf("Enter no. of row and col :\n");
	scanf("%d %d", &row, &col);

	char ch = 'I';

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= col; j++){
		
			printf("%c ", ch);
			ch--;
		}

		printf("\n");
	}
}
