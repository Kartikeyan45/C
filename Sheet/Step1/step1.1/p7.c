
/*

Input Format: N = 3
Result:
  *
 ***
*****
Input Format: N = 6
Result:
     *
    ***
   *****
  *******
 *********
***********

*/

#include<stdio.h>

void main(){
	
	int row = 5;

	for(int i = 1; i <= row; i++){
		
		for(int space = row; space > i; space--){
			
			printf(" ");
		}

		for(int j = 1; j <= 2*i-1; j++){
			
			printf("*");
			
		}
		printf("\n");
	}
}
