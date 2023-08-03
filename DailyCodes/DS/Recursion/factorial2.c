/*	Program 12 : factorial
 *
 *	Without using any variable
*/

#include<stdio.h>

int factorial(int num){

	if(num == 0){
		
		return 1;	// because factorial of 0 is 1
	}
	
	int prevFact = factorial(num - 1);
	return num * prevFact;
}

void main(){

	int ans = factorial(5);

	printf("%d\n", ans);
}

