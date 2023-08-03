/*Program-9
	
Write a program, take a number and print whether it is positive
or negative.Take all the values from the user.

Input : var = 5
Output : 5 is a positive number

Input : var = -9
Output : -9 is a negative number

*/
#include<stdio.h>

void main(){

	int x;

	printf("Enter number :\n");

	scanf("%d", &x);

	printf("Number = %d\n", x);

	if(x >= 0){
		printf("%d is positive number\n", x);
	}else{
		printf("%d is negative number\n", x);
	}
}
