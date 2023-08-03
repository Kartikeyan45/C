/*	Program 9 :
 *
 *	Topic : Condtional Proprocessing
*/

#include<stdio.h>

#define access 1

void main(){
	
	#if access
	printf("Access Permited....\n");
	#else
	printf("Not Permitted..\n");
	#endif
	
	printf("EOF\n");
}

//	o/p : Access permitted
//	      EOF
