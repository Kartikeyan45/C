/*	Program 5 :
 *
 *	Important Problem : It has two concepts
 *
 *			    1 - Pointer to Pointer
 *			    2 - Pointer to Array
*/

#include<stdio.h>

void main(){

	int arr1[3] = {1,2,3};

	int arr2[3] = {4,5,6};

	int *iparr[] = {&arr1, &arr2};		//warning

	printf("%p\n", iparr[0]);	//0x100
	printf("%p\n", iparr[1]);	//0x112
}

/*	warning : initialization of "int *" from incompatible pointer type "int (*)[3]"
 *		  
 *		  int *iparr = {&arr1, &arr2};
 *		  		^
 *		  note : near initialization for "iparr[0]"
 *
 *	warning : initialization of "int *" from incompatible pointer type "int (*)[3]"
 *
 *		  int *iparr = {&arr1, &arr2};
 *		  		       ^
 *
 *		  note : near initialization for "iparr[1]"
*/		  
