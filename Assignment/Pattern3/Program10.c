/*	Program 10 : Take no. of rows from the user
 *		     
 *		     D1 C2 B3 A4
 *		     e5 f4 g3 h2
 *		     F3 E4 D5 C6
 *		     g7 h6 i5 j4
 *
 *
 *		     Can't solve above try both separately
 *
 *		     1 2 3 4
 *		     5 4 3 2
 *		     3 4 5 6
 *		     7 6 5 4
 *
 *		     D C B A
 *		     e f g h
 *		     F E D C
 *		     g h i j
*/		     

#include<stdio.h>

void main(){

	int row;
	printf("Enter rows :\n");
	scanf("%d", &row);

	int x = 1;
	char ch = 64 + row;

	for(int i = 1; i <= row; i++){
		
		char temp = ch++;

		for(int j = 1; j <= row; j++){
		
			if(i % 2 != 0){
			
				printf("%c%d ", temp--, x++);
			}else{
			
				printf("%d ", y);
				y--;
			}
		//	x++;
		//	y++;
		}

		printf("\n");
	}
}
