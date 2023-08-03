/*	Program 1 :
 *
 *	Topic : Constant Variables and Pointers.
 *	
*/

#include<stdio.h>

void main(){

	int x = 10;

	const int * ptr = &x;	/*	constant int la ahe, variable constant ahe,
					x cha value constant ahe.
				*/					

	printf("%d\n", x);

	*ptr = 30;

	x = 20;		// x ni value change karu shakto

	printf("%d\n", x);
}

/*	error : assignment to read-only location "ptr"
 *
 *		*ptr = 30
 *		     ^
 *
 *		mhnje fakt tumhi x cha value read karu shakto,
 *		change nahi karu shakat.
*/		
