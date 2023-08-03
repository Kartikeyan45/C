/*	Program 8 : 
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

//	Global Variable example

#include<stdio.h>

int y = 10;

void fun(){

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
