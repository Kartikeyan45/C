/*
 * 	PRogram : Reverse Number in Recursion
*/

#include<stdio.h>

/*
int revNum(int num){

	int rev = 0, rem;

	while(num != 0){
		
		rem = num % 10;
		rev = rem + rev * 10;
		num = num / 10;
	}

	return rev;
}
*/

int revNum(int num, int rev){
	
	if(num == 0){
	
		return rev;
	}

	int rem= num % 10;
	rev = rem + rev * 10;

	return revNum(num = num/10, rev);
}

void main(){
	
	int num;
	printf("Enter Num\n");
	scanf("%d", &num);

	int ret = revNum(num, rev);
	printf("Rev is : %d\n", rev);
}
