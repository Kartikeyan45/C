
/*	Prog 1 : Reverse Number
 *
 *	Input : N = 12
 *	Ouput : 21
*/	

#include<stdio.h>

int reverse(int n){
	
	int rev = 0, rem;

	while(n){
		
		rem = n % 10;
		rev = rem + rev * 10;
		n = n / 10;
	}

	return rev;
}

void main(){
	
	int n = 123;

	int ret = reverse(n);
	printf("%d\n", ret);
}
