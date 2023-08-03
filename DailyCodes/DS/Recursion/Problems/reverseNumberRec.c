
/*	Program : Reverse a Number using recursion
*/

#include<stdio.h>

/*
int reverse(int num){
	
	int rev = 0, rem;

	while(num != 0){
	
		rem = num % 10;
		rev = rem + rev * 10;
	      	num = num / 10;
	}

	return rev;
}
*/

int reverse(int num, int rev){
	
	if(num == 0){
		
		return rev;
	}

	int rem = num % 10;
	rev = rev * 10 + rem;
	
	reverse(num / 10, rev);
}

void main(){
	
	int num, rev = 0;
	printf("Number is :\n");
	scanf("%d", &num);

	int ret = reverse(num, rev);
	printf("%d\n", ret);
}

