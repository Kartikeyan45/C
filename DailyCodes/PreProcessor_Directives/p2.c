/*	PPRogram 2 :
 *
 *	Topic : Macros
 *
 *		1] Object Like Macros
 *		2] Function Like Macros
*/

#include<stdio.h>

#define int char		//object like macro

void main(){

	printf("%d\n", sizeof(int));	//1
}

/*	Compliation chya agodhar hoto "preprocessing",
 *	ani preprocessing chya step la "int" replace 
 *	hoil "char" ni. Mhnje compilation step la printf
 *	line madhe "char" asnar.ase asel
 *
 *	printf("%d\n", sizeof(char));
 *
 *	To check preprocessing use cc -E filename.c
*/	 
