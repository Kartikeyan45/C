/*	Program 1 : 
 *
 *	Topic : Pointer To An Array.
*/

#include<stdio.h>

void main(){

	int arr[5] = {10,20,30,40,50};

	int *ptr1 = arr;

	int *ptr2 = &arr;	//warning

	int (*ptr3)[5] = &arr;
}

/*	warning : initialization of "int *" from incompatible pointer type "int (*)[5]"
 *		  
 *		  int *ptr2 = &arr;
 *		  	      ^
*/	     
