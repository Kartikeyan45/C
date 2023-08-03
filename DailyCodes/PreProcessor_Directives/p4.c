/*	PPRogram 4 :
 *
 *	Topic : Macros
 *
 *		1] Object Like Macros
 *		2] Function Like Macros
*/


//	Function la call nahi karaycha, function like lihaycha
//	Stack Frame push hot nahi

#include<stdio.h>

#define sqr(x) x*x		//Function like macro

void main(){
	
	int x = 10;
	
	printf("%d\n", sqr(x));	//100
}

/*	Compliation chya agodhar hoto "preprocessing",
 *	ani preprocessing chya step la "sqr(x)" replace 
 *	hoil "x*x" ni. Mhnje compilation step la printf
 *	line madhe "x*X" asnar.ase asel
 *
 *	printf("%d\n", x*X);
 *
 *	To check preprocessing use cc -E filename.c
*/	 
