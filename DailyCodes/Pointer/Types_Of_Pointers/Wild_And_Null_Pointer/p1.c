/*	Program 1 :
 *
 *	Topic : Wild and Null Pointer.
*/

#include<stdio.h>

void main(){
	
	int x = 10;

	//Wild Pointer
	int *iptr;

	printf("%p\n", iptr);		// nil

	printf("%d\n", *iptr);		// segmentation fault(core dumped)
	

	//Null Pointer
	int *iptr = 0;

	printf("%p\n", iptr);		//nil

	printf("%d\n", *iptr);		//segmentation fault(core dumped)
}

//	Address of Wild and Null Pointer is always "nil".
