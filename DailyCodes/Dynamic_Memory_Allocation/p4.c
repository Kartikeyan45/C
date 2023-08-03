/*	Program 4 :
 *
 *	realloc - reallocate memory
 *		
 *		  mainly used in array
 *
 *		  realloc la don parameter dyava lagto,
 *		  ek kiti size ahe, sizeof(int).
*/

#include<stdio.h>
#include<stdlib.h>

void main(){

	int *ptr = (int *)calloc(5, sizeof(int));

	for(int i = 0; i < 5; i++){
	
		*(ptr + i) = 10 + i;
	}

	for(int i = 0; i < 5; i++){
	
		printf("%d\n", *(ptr + i));
	}

	int *ptr2 = (int *)realloc(ptr, 8);	// reallocate ptr to 8 size

	for(int i = 0; i < 8; i++){
	
		*(ptr2 + i) = 10 + i;
	}

	for(int i = 0; i < 8; i++){
	
		printf("%d\n", *(ptr2 + i));
	}
}
