/*

   Program 3 : WAP to find max among 2 numbers.Take all the values from the user

Input : 2 4
Output : 4

*/
#include<stdio.h>

void main(){

	int x;
	int y;

	printf("Enter value of x: \n");
	scanf("%d", &x);

	
	printf("Enter value of y: \n");
	scanf("%d", &y);

	if(x > y){
		printf("Max in %d and %d is  %d\n", x,y,x);
	}else if(y > x){	
		printf("Max in %d and %d is  %d\n", x,y,y);
	}else{
		printf("Both are Equal\n");
	}
}
