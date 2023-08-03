/*	PPRogram 3 :
 *
 *	Topic : Macros
 *
 *		1] Object Like Macros
 *		2] Function Like Macros
*/

//	Function la call nahi karaycha, function like lihaycha
//	Stack frame push hot nahi

#include<stdio.h>

#define add(a,b) a+b		//Function like macro

void main(){
	
	int x = 10;
	int y = 20;
	
	printf("%d\n", add(x,y));	//30
}

/*	Compliation chya agodhar hoto "preprocessing",
 *	ani preprocessing chya step la "add(x,y)" replace 
 *	hoil "x+y" ni. Mhnje compilation step la printf
 *	line madhe "x+y" asnar.ase asel
 *
 *	printf("%d\n", x+y);
 *
 *	To check preprocessing use cc -E filename.c
*/	 
