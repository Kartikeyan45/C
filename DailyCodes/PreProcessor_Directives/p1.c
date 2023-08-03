/*	PPRogram 1 :
 *
 *	Topic : Macros
 *
 *		1] Object Like Macros
 *		2] Function Like Macros
*/

#include<stdio.h>

#define xyz 10		//object like macro

void main(){

	printf("%d\n", xyz);	//10
}

/*	Compliation chya agodhar hoto "preprocessing",
 *	ani preprocessing chya step la xyz replace 
 *	hoil 10 ni. Mhnje compilation step la printf
 *	line madhe 10 asnar.ase asel
 *
 *	printf("%d\n", 10);
 *
 *	To check preprocessing use cc -E filename.c
*/	 
