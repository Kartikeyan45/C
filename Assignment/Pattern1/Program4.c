/*	Program 4 : If possible taake no. of rows from the user
 *
 *		    A B C
 *		    D E F
 *		    G H I
*/

#include<stdio.h>

void main(){
	
	int row;
	printf("Enter the no. of rows :\n");
	scanf("%d", &row);

	int col;
	printf("Enter the no. of cols :\n");
	scanf("%d", &col);

	char ch = 'A';

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= col; j++){
		
			printf("%c ", ch);
			ch++;
		}

		printf("\n");

	}
}
