/*	Program 6:
 *
 *	Kiti Stack Push Hotat heh sangnyasathi two ways ahet
 *		1] Global Variable Declare
 *		2] Static Storage Class cha vapar karun
*/

#include<stdio.h>

int x = 0;

void fun(){
	
//	static  int x = 0;
	printf("%d\n", ++x);
	fun();
}

void main(){

	fun();
}

/*	"5,23,775" ala nantar Segmentation fault yeto
 *
 *	Program 5 and 6 varun kalto ki mulat static and global vegale ahet
 *
 *	Pan static ani global la jaga matra "Data" section madhe bhetto
*/	
