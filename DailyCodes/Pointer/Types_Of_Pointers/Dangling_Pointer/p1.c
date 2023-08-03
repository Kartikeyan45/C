/*	PRogram 1 :
*/

#include<stdio.h>

int a = 10;
int b;

int *iptr = 0;

void fun(){

	int x = 30;

	printf("%d\n", a);	//10
	printf("%d\n", b);	//0

	iptr = &x;

	printf("%p\n", iptr);	//address of x
	printf("%d\n", *iptr);	//30
}

void main(){

	int y = 40;

	printf("%d\n", a);	//10
	printf("%d\n", b);	//0

	fun();

	printf("%d\n", *iptr);	//30    //Dangling Pointer
}

//	global variable if not initialized then it's value will be 0.
