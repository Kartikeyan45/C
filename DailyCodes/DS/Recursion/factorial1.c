/*	Program 11 : factorial
*/

#include<stdio.h>

int factorial(int num){

	static int fact = 1;

	fact = fact * num;

	if(num != 1){
		
		factorial(--num);
	}

	return ans;
}

void main(){

	int ans = factorial(5);

	printf("%d\n", ans);
}

