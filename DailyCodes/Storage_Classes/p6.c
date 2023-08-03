/*	Program 6 :
 *
 *	register gets memory in CPU.
 *
 *	CPU madhe memory bhetto,pan
 *	memory bhetnyachi probability 1% ahe fakt.
 *
 *	register madhe value access karu shakto,
 *	pan address access karu shakat nahi.
 *
 *	register fakt local variable mahnun chalto. 
*/

#include<stdio.h>

register int y = 20;

void main(){

	register int x = 10;

	printf("%d\n", x);

//	printf("%p\n", &x);	//error

	printf("%d\n", y);

	printf("%p\n", &y);
}

/*	
 *	error : address of global register variable "y" requested
 *
 *		printf("%p\n", &y);
 *		^
*/			   
