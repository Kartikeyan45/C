/*	Program 14 :
 *
 *	extern la memory initialize hot nahi.
*/

#include<stdio.h>

void main(){

	extern int x;

	printf("%d\n", x);
}
