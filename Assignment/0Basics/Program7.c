/*
	Program 7: Write a program, take a number and print whether it is less than
		   10  or greater than 10.Take all the values from the user.

	Input : var = 5;
	Output : 5 is less than 10

	Input : var = 16;
	Output : 16 is greater than 10

*/
#include<stdio.h>

void main(){
	int x;

	printf("Enter number :\n");

	scanf("%d", &x);

	if(x > 10){
		printf("%d is greater than 10\n", x);
	}else if(x < 10){
		printf("%d is less than 10\n", x);
	}else{
		printf("%d is equal to 10\n", x);
	}
}
