/*	Program 2 :
*/

#include<stdio.h>

void main(){

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};

	int *ptr1 = arr1;
	int *ptr2 = &arr1;	//warning

	ptr1++;
	ptr2++;

	printf("%d\n", *ptr1);	//20
	printf("%d\n", *ptr2);	//20
}

/*	warning : initialization of "int *" from incompatible
 *		  pointer type "int (*)[5]"
 *
 *		  int *ptr2 = &arr1;
 *		  	      ^
 *
 *	ptr1++  =   (ptr1 + 1) = 100 + 1(4) = 104 = 20
 *	ptr2++  =   (ptr2 + 1) = 100 + 1(4) = 104 = 20
*/	
