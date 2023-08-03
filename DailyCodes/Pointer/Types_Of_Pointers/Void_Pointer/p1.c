/*	Program 1 :
 *	
 *	Topic : Void Pointer
 *
 *	Void Pointer konacha pan address store karu shakto.
 *
 *	malloc cha returntype void pointer ahe.
*/

#include<stdio.h>

void main(){

	int x = 10;

	int *iptr = &x;

	void *vptr = &x;

	printf("%p\n", iptr);	//0x100
	
	printf("%p\n", vptr);	//0x100

	printf("%d\n", *iptr);	//10

	printf("%d\n", *vptr);	//error
}

/*	error - Dereferencing of Void Pointer not allowed
 *
 *
 *	Void Pointer la exact konacha address thevla ahe mahit nasto.
 *
 *
 *	Value "Dereference" karaycha asel tar void pointer la "EXPLICITLY TYPECASTING" karava lagto.
*/
