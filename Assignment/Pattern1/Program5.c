/*	Program 5 : If possible take no. of rows from the user
 *		    
 *		    A B C D
 *		    B C D E
 *		    C D E F
 *		    D E F G
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter the no. of rows :\n");
	scanf("%d", &row);

	int col;
	printf("Enter the no. of col :\n");
	scanf("%d", &col);

	char ch1 = 'A';
	char ch2 = 'A';
	
	for(int i = 1; i <= row; i++){
		
		ch1 = ch2;

		for(int j = 1; j <= col; j++){
		
			printf("%c ", ch1);
			ch1++;
		}

		printf("\n");
		ch2++;
	}
}
