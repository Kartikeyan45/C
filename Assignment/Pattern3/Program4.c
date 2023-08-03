/*	Program 4 : Take no. of rows from the user
 *		    
 *		    a B c D
 *		    b C d E
 *		    c D e F
 *		    d E	f G
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++){

		char ch = 64 + i;
	
		for(int j = 1; j <= row; j++){
		
			if(j % 2 != 0){
			
				printf("%c ", ch+32);
			}else{
				
				printf("%c ", ch);
			}
			ch++;
		}
		printf("\n");
	}
}
