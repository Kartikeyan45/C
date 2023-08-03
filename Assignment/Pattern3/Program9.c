/*	Program 9 : Take no. of rows from the user
 *		    
 *		    0   1   1   2
 *		    3   5   8   13
 *		    21  34  55  89
 *		    144 233 377 610
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	int n1 = 0;
	int n2 = 1;
	int n3 = 0;

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= row; j++){
		
			printf("%d ", n3);
			n3 = n1 + n2;
			n2 = n1;
			n1 = n3;
		}

		printf("\n");
	}
}
