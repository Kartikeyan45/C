/*	Program 4 :
 *
 *	Topic : Pointer Addition To Integer.
 *
 *		Pointer additon to integer hoto.
*/

#include<stdio.h>

void main(){

	int x = 10;

	int y = 20;

	int *ptr = &x;

	printf("%d\n", *ptr);		//10

	printf("%d\n", *(ptr + 1));	//20
}

/*	*(ptr + 1)
 *
 *	*(100 + 1 * sizeof(DTP))
 *
 *	*(100 + 1 * sizeof(int))
 *
 *	*(100 + 1 * 4)
 *
 *	*(104)
 *
 *	ValueAt(104)
 *
 *	20
*/	
