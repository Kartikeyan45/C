/*	PRogram 1 :
 *
 *	It has 4 functions :-
 *		
 *		3 for Allocation, 1 for free
 *
 *	a - malloc() - memory allocation
 *	b - calloc()  - contiguous memory allocation
 *	c - realloc()	- re-allocate memory
 *	d - free()  - 	free memory allocation	
 *
 *
 *	malloc la heap section madhe memory bheto
 *
 *	heap madhe naav dila jaat nahi
 *
 *	malloc cha returntype void pointer ahe
 *
 *	malloc vaparlya nantar memory free kara
 *
 *	malloc - default value garbage value ahe
 *
 *	calloc - 0 default value ahe.
*/



/*	malloc declaration : (void *)malloc(size_t size)
 *				^              ^
 *				returntype    Datatype
 *						^
 *						unsigned int
*/

#include<stdio.h>
#include<stdlib.h>	// or :  void *malloc(size_t);

int mallocadd(){

	int *ptr1 = (int *)malloc(sizeof(int));

	int *ptr2 = (int *)malloc(sizeof(int));

	*ptr1 = 10;
	*ptr2 = 20;

	return *ptr1 + *ptr2;
}

void main(){

	int x = mallocadd();

	printf("%d\n", x);	//30
}
