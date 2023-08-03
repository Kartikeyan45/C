/*	Program 2 : If Possible take no. of rows from user
 *
 *		    1 2 3
 *		    a b c
 *		    1 2 3
 *		    a b c
*/	

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows :\n");
	scanf("%d", &row);

	int col;
	printf("Enter number of columns :\n");
	scanf("%d", &col);

	for(int i = 1; i <= row; i++){
		
		char ch = 'a';
		int x = 1;

		for(int j = 1; j <= col; j++){
		
			if(i % 2 == 0){
				
				printf("%c ", ch);
				ch++;
			}else{
			
				printf("%d ", x);
				x++;
			}
		}

		printf("\n");
	}
}
