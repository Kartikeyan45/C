/*	Program 2 :
 *
 *	In C language Call by Address is same as Call by Reference.
*/

#include<stdio.h>

void swap(int*, int*);

void main(){

	int x = 10;
	int y = 20;

	printf("IN Main\n");
	printf("%d\n", x);	//10
	printf("%d\n", y);	//20

	swap(&x, &y);
	
	printf("IN main after swap :\n");
	printf("%d\n", x);	//20
	printf("%d\n", y);	//10
}

void swap(int *x, int *y){

	printf("In Swap\n");
	printf("%d\n", *x);	//10
	printf("%d\n", *y);	//20
	
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
	
	printf("In Swap after temp\n");
	printf("%d\n", *x);	//20
	printf("%d\n", *y);	//10
}
