/*	Program 1 :
 *
 *	Two Pointer cha additon chalat nahi.
*/

#include<stdio.h>

void main(){

	int x = 10;
	int y = 20;

	int *ptr1 = &x;
	int *ptr2 = &y;

	printf("%d\n", *ptr1 + *ptr2);		// 30
	
	printf("%p\n", ptr1 + ptr2);		// error

}

/*	error - invalid operands to binary + (have int* and int*)
 *
 *
 *		karan don pointer cha additon kela tar mhnje don
 *		address cha additon ani te addition kelya nantar
 *		je value yeil te PROCESS ADDRESS SPACE CHYA BAHER JAIL.
*/		
