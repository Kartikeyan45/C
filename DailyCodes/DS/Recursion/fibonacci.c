
//	Fibonacci 

#include<stdio.h>
/*
int fib(int n){

	if(n == 0){
	
		return 0;
	}

	if(n == 1){
		
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}
*/

int fib(int num){
	
	int a = 0;
	int b = 1,c;
	
	while(num + 1){
		
		c = a + b;
		a = b;
		b = c;

		num--;
	}
	
	return c;
}

void main(){

	int n;
	printf("Enter Number\n");
	scanf("%d", &n);

	int ret = fib(n);
	printf("Fibo of %d is : %d\n", n, ret);
}
