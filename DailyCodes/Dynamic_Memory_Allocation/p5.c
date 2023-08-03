/*	Program 5 :
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

	int *ptr2 = (int *)realloc(ptr, 0);	

	for(int i = 0; i < 8; i++){
	
		*(ptr2 + i) = 10 + i;
	}

	for(int i = 0; i < 8; i++){
	
		printf("%d\n", *(ptr2 + i));
	}
}

/*	reallocate ptr to 0 size 
 *	
 *	o/p : segementation fault because instead of address
 *	      in ptr, there is actually nil in ptr so when 
 *	      dereferenced segmentation fault occurs.
*/	      
