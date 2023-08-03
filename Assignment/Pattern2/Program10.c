/*	Program 10 : Take no. of rows from user
 *		     
 *		     D4 C3 B2 A1
 *		     A1 B2 C3 D4 
 *		     D4 C3 B2 A1
 *		     A1 B2 C3 D4
*/

#include<stdio.h>

void main(){
	
	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++){

		for(int j = row; j >= 1; j--){
		
			if(i % 2 != 0){
				
				printf("%c%d ", (64+j), (j));
			}else{
			
				printf("%c%d ", (64+x), (x));
				x++;
			}
		}

		printf("\n");
	}
}
