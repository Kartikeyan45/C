/*	Program 2 :
*/

#include<stdio.h>

void main(){

	char x = 'A';
	char y = 'B';

	char *ptr1 = &x;
	char *ptr2 = &y;

	printf("%d\n", *ptr1 + *ptr2);		// 131

//	printf("%c\n", ptr1 + ptr2);		// error

}

/*	error - invalid operands to binary + (have char* and char*)
 *
 *
 *	char 'A' cha ASCII value 65
 *	char 'B' cha ASCII value 66
 *	dogancha addition 131 yeto mahnun ouput 131 yeto 
 *	karan format specifier "%d" ahe.
 *
 *	character range = [-128 to 127]
 *	Jar format specifier "%c" asla asta tar,
 *	apla code madhe ouput 131 ahe,
 *	so 127 nantar ramp up hoto mhnje 127 nantar
 *	parat -128,-127,-126,-125 paryant yeil.
 *
 *	i.e 131 == -125. "%c" format specifier asla asta
 *	tar ouput -125 ala asta.
*/	


/*	Hardcoded ghetla tar sagle operations complie time la hoto
 *	ani Runtime la ghetlyala value cha operation he runtime la hoil.
 *	Runtime la ghetla tar direct pude jail, ani compile time la ghetla
 *	tar range madhe yeto
*/	
