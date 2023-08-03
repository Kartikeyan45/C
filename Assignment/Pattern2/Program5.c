/*	Program 5 : Take no. of rows from the user
 *		    
 *		    D C B A
 *		    e d c b
 *		    F E D C
 *		    g f e d
*/

#include<stdio.h>

void main(){

	int row, col;
	printf("Enter no. of row and col :\n");
	scanf("%d %d", &row, &col);

	int x = 68, y = 68;

	for(int i = 1; i <= row; i++){
		
		x = y;

		for(int j = 1; j <= col; j++){
		
			if(i % 2 != 0){
				
				printf("%c ", x);
			}else{
			
				printf("%c ", x + 32);
			}
			
			x--;
		}

		printf("\n");
		y++;
	}
}
