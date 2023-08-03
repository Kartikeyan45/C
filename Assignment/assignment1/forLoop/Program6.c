/*	Program 6 : WAP to calculate the factorial of a given number.
*/

#include<stdio.h>

void main(){

	int x;

	printf("Enter value :\n");
	scanf("%d", &x);

	if(x > 0){
	
		int Factorial = 1;

		for(int i = 1; i <= x; i++){
		
			Factorial *= i;
		}
		printf("Factorial is :%d\n", Factorial);

	}else{
		printf("Wrong input\n");
	}
}
