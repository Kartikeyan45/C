/*	Program 9 : 
 *
 *	Topic : Static Storage Class
 *
 *		Static variable ekdach initialize hoto.
 *
 *		Static variable distana global disto
 *		pan asto fakt local variable.
 *
 *		Data section madhe don variable jatat 
 *		global ani static.
*/

//	Local Static Variable

#include<stdio.h>

void fun(){
	
	static int y = 10;

	++y;

	printf("%d\n", y);
}

void main(){

	fun();
	fun();
	fun();
}

/*	output : 11
 *		 12
 *		 13
*/		 
