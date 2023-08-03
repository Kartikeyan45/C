/*

	Program 4 : WAP to find min among 2 numbers. 
	Take all values from the user.

	Input : 2 3
	Output : 2

*/
#include<stdio.h>

void main(){

	int x;
	int y;

	printf("Enter value of x :\n");
	scanf("%d", &x);

	printf("Enter value of y :\n");
	scanf("%d", &y);

	if(x < y){
		printf("Min in %d and %d is %d\n", x,y,x);
	}else if(y > x){
		printf("Min in %d and %d is %d\n", x,y,y);
	}else if(x > y){
		printf("Min in %d and %d is %d\n", x,y,y);
	}else{
		printf("Both are same\n");
	}

}
