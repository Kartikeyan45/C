/*	Program 1 :
 *
 *	Topic : Array Of Pointers
 *
 *	1 - Array of Pointers stores address of array elements.
 *
 *	2 - Instead of Addressing Array of Pointers, call Array Of Void Pointers
 *
 *	3 - Array of Pointers cha size nehmi 8 bytes asto.
 *
*/

#include<stdio.h>

void main(){

	int x = 10;
	int y = 20;
	int z = 30;

	int *arr[3] = {x,y,z};
	
	printf("%ld\n", sizeof(arr));	//24

	printf("%p\n", arr[0]);		//0x100
	printf("%p\n", arr[1]);		//0x104
	printf("%p\n", arr[2]);		//0x108

	printf("%d\n", *arr[0]);	//Segmentation Fault
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);
}

/*	warning : initialization of "int *" from "int" makes pointer from integer without a cast.
 *		  
 *		  int *arr = {x,y,z};
 *
 *		  note : near initialization for "arr[0]"
 *
 *	warning : same
 *
 *		  note : near initailization for "arr[1]"
 *
 *
 *	warning : same
 *		
 *		  note : near initialization for "arr[2]"
*/		  
