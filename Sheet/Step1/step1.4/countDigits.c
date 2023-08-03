
/*	Prog 1 : Count the number of digits in N 
 *
 *	Input : N = 12
 *	Ouput : 2
*/	

#include<stdio.h>

int digit(int n){
	
	int count = 0;

	while(n){

		n = n / 10;
		count++;
	}

	return count;
}

void main(){
	
	int n = 12;

	int ret = digit(n);
	printf("%d\n", ret);
}
