/*	Program 6:
 *
 *	Pointer cha addition fakt integer, character sobat hoto
 *	float, double sobat hot nahi.
*/

#include<stdio.h>

void main(){

	char ch1 = 'x';
	char ch2 = 'y';

	char *ptr = &ch1;

	printf("%p\n", ptr);
	printf("%c\n", *ptr);

	printf("%p\n", (ptr + 1.5));
	printf("%c\n", *(ptr + 1.5));
}

//	error - invalid operands to binary + (have char* to double)
