
/*	Prog 3 : Palindrome Number
 *
 *	Input : N = 121
 *	Ouput : true
*/	

#include<stdio.h>

int palindrome(int n){
	
	int rev = 0, rem;

	while(n){
		
		rem = n % 10;
		rev = rem + rev * 10;
		n = n / 10;
	}

	return rev;
}

void main(){
	
	int n = 121;
	
	int ret = palindrome(n);

	if(ret == n){
		
		printf("Palindrome Number\n");
	}else{
		
		printf("Not a Palindrome Number\n");
	}
}
