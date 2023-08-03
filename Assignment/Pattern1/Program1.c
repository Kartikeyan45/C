/*	Program 1 : If possible take no. of rows from the user
 *		    1 2 3 4
 *		    2 3 4 5
 *		    3 4 5 6
 *		    4 5 6 7
*/		    

#include<stdio.h>

void main(){
	
	int row;
	printf("Enter the number of rows : \n");
	scanf("%d", &row);

	int col;
	printf("Enter the number of cols :\n");
	scanf("%d", &col);

	int x = 1, y = 1;

	for(int i = 1; i <= row; i++){
		
		x = y;

		for(int j = 1; j <= col; j++){
		
			printf("%d ", x);
			x++;
		}
		printf("\n");
		y++;
	}
}
