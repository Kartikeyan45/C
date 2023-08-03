/*
	Program 6 : Write a program to check if a number is even or odd.
		    Take all the values from the user.

	Input : var = 10;
	Output : 10 is an even number

	Input : var = 37;
	Output : 37 is an odd number

*/
#include<stdio.h>

void main(){

	int x;

	printf("Enter number :\n");

	scanf("%d", &x);

	if(x % 2 == 0){
		printf("%d is even\n", x);
	}else if(x % 2 != 0){
		printf("%d is odd\n", x);
	}else{
		printf("Wrong input");
	}
}
