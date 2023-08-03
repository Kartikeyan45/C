/*	Program 6 :
 *
 *	Topic : Condtional Proprocessing
*/

#include<stdio.h>

#define access 1

void main(){
	
	#if access
	printf("Access Permited....\n");
	
	printf("EOF\n");
}

/*	Error : unterminated #if
 *		#if access
*/		
