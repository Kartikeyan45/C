/*	Program 5:
 *
 *	Kiti Stack Push Hotat heh sangnyasathi two ways ahet
 *		1] Global Variable Declare
 *		2] Static Storage Class cha vapar karun
*/

#include<stdio.h>

void fun(){
	
	static  int x = 0;
	printf("%d\n", ++x);
	fun();
}

void main(){

	fun();
}

//	"5,23,742" ala nantar Segmentation fault yeto
