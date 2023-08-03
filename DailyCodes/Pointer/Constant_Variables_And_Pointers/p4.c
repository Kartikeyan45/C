/*	Program 4 :
 *
 *	Topic : Constant Variables and Pointers.
 *	
*/

#include<stdio.h>

void main(){

	int x = 10;

	const * const ptr = &x;	/*constant int ani ptr la ahe, variable cha int ani address cha address constant ahe,
					x cha value ani address constant ahe.
				*/					

	printf("%d\n", x);	//10

	x = 20;		// x ni value change karu shakto

	printf("%d\n", x);	//20
}

/*
 *	mhnje fakt x variable cha value ani pointer cha address constant ahe,
 *	pointer through x variable cha data change nahi karu shakat.
*/		
