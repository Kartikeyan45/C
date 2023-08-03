/*	Program 3 :
*/

#include<stdio.h>

void main(){

	int x = 10;

	printf("%d\n", x);		//10

	int *iptr = &x;

	printf("%d\n", *iptr);		//10

	*iptr = 30;

	printf("%d\n", *iptr);		//30
}
