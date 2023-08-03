/*	Program 7 : Take no. of rows from the user
 *		    
 *		    1   2   3   4
 *		    25  36  49  64
 *		    9   10  11  12
 *		    169 196 225 256
*/

#include<stdio.h>

void main(){

	int row, col;
	printf("Enter no. of row and col :\n");
	scanf("%d %d", &row, &col);

	int x = 1;

	for(int i = 1; i <= row; i++){
	
		for(int j = 1; j <= col; j++){
		
			if(i % 2 != 0){
				
				printf("%d ", x);
			}else{
			
				printf("%d ", x * x);
			}
			x++;
		}

		printf("\n");
	}

}
