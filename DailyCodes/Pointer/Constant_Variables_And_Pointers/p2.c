/*	Program 2 :
 *
 *	Topic : Constant Variables and Pointers.
 *	
*/

#include<stdio.h>

void main(){

	int x = 10;

	int * const ptr = &x;	/*	constant ptr la ahe, variable cha address constant ahe,
					x cha address constant ahe.
				*/					

	printf("%d\n", x);	//10

	*ptr = 30;

//	x = 20;		// x ni value change karu shakto

	printf("%d\n", x);	//30
}

/*	mhnje fakt pointer cha address constant ahe,
 *	variable cha data change karu shakto
*/		
