/*	Program 10 : If possible take no. of rows from the user
 *		     
 *		     D4 C3 B2 A1
 *		     D4 C3 B2 A1
 *		     D4 C3 B2 A1
 *		     D4 C3 B2 A1
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows :\n");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++){
	
		for(int j = row; j >= 1; j--){
		
			printf("%c%d ", (64+j), (j));
		}

		printf("\n");
	}
	
}
