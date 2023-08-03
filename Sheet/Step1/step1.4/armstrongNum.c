
/*	Prog 5 : Check if a number is armstrong number or not
 *
 *	Input : N = 153
 *	Ouput : true
*/	

#include<stdio.h>
#include<math.h>

/*
int armstrong(int n){
	
	int rem, sum = 0;

	while(n){
		
		rem = n % 10;
		sum = sum + (rem * rem * rem);
		n = n / 10;
	}

	return sum;
}
*/

int armstrong(int n){
	
	int rem, sum = 0;
	
	int num = n, count = 0;

	while(num){
		
		count++;
		num = num / 10;
	}
	
	while(n){
		
		rem = n % 10;
		sum = sum + pow(rem , count);
		n = n / 10;
	}

	return sum;
}

void main(){
	
	int n = 153;
	
	int ret = armstrong(n);

	if(ret == n){
		
		printf("Armstrong Number\n");
	}else{
		
		printf("Not armstrong number\n");
	}
}
