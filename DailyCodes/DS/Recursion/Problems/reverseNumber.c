
/*	Program : Reverse a Number
*/

#include<stdio.h>

int reverse(int num){
	
	int rev = 0, rem;

	while(num != 0){
	
		rem = num % 10;
		rev = rem + rev * 10;
	      	num = num / 10;
	}

	return rev;
}

void main(){
	
	int num;
	printf("Number is :\n");
	scanf("%d", &num);

	int ret = reverse(num);
	printf("%d\n", ret);
}
