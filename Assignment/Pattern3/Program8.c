/*	Program 8 : Take no. of rows from the user
 *		    
 *		    16 15 14 13
 *		    L  K  J  I
 *		    8  7  6  5
 *		    D  C  B  A
*/

#include<stdio.h>
void main(){

	int row;
	printf("ENter rows :\n");
	scanf("%d", &row);

	int x = row * 4;

	char ch  = 64 + (row * 4);

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= row; j++){
		
			if(i % 2 != 0){
			
				printf("%d ", x);
			}else{
			
				printf("%c ", ch);	
			}

			x--;
			ch--;
		}
		printf("\n");
	}
}
