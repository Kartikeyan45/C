/*	Program 5 :
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

void main(){

	register int x = 10;

	printf("%d\n", x);

	printf("%p\n", &x);

}

/*	
 *	error : address of register variable "x" requested
 *
 *		printf("%p\n", &x);
 *		^
*/			   
