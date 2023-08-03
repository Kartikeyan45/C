/*

Input Format: N = 3
Result: 
* * *
* * 
*

Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
*

*/


#include<stdio.h>

void main(){

	for(int i = 1; i <= 5; i++){
			
		for(int j = 5; j >= i; j--){
			
			printf("* ");
			
		}
	
		printf("\n");
	}
}
