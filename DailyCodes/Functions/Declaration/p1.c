/*	Program 1 :
*/

#include<stdio.h>

void fun(int, int);	// (int, int) is Declaration

void main(){

	int x, y;
	printf("Enter values :\n");
	scanf("%d %d", &x, &y);

	fun(x, y);	// (x, y) is Arguments

	printf("In Main\n");
	printf("x :%p\n", &x);
	printf("y :%p\n", &y);
}

void fun(int x, int y){		// (int x, int y) is Parameters

	printf("%d\n", x+y);

	printf("In FUN\n");
	printf("X :%p\n", &x);
	printf("y :%p\n", &y);
}


