/*	Program 15 :
 *
 *	extern la memory initialize hot nahi.
*/

#include<stdio.h>

void main(){

	extern int x;

	printf("%d\n", x);
}

int x = 80;

//	output : 80
