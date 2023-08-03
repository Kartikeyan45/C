/*	PRogram 2 :
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

	int *ptr = (int *)malloc(sizeof(int));

	int *ptr = (int *)malloc(sizeof(int));

	*ptr = 10;
	*ptr = 20;

	return *ptr + *ptr;
}

void main(){

	int x = mallocadd();

	printf("%d\n", x);	//30
}

//error
