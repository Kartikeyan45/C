
/*

Input Format: N = 3
Result:
  *
  **
  ***
  **
  *
Input Format: N = 6
Result:
     *
     **
     ***
     ****
     *****
     ******
     *****
     ****
     ***
     **
     *

*/

#include<stdio.h>

void main(){
	
	int row = 4;

	int col;

	for(int i = 1; i <= 2 * row - 1; i++){
		
		if(i <= row){
			
			col = i;
		}else{
			col = 2 * row - i;
		}

		for(int i = 1; i <= col; i++){
			
			printf("* ");
		}

		printf("\n");
	}
}
