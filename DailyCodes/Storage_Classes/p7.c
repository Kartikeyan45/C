/*	Program 7 : 
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

//	Local Variable example

#include<stdio.h>

void fun(){

	int y = 10;

	++y;

	printf("%d\n", y);
}

void main(){

	fun();
	fun();
	fun();
}
