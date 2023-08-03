/*	Program 4 : 
 *
 *	Topic : Function Pointer / Pointer to a function.
*/

#include<stdio.h>

void add(int a, int b){

	printf("%d\n", a+b);
}

void sub(int a, int b){

	printf("%d\n", a-b);
}

void main(){

	void (*ptr)(int);	

	ptr = add;		
	ptr(10, 20);

	ptr = sub;
	ptr(20,10);	
}

/*	warning : assignment to "void (*)(int)" from incompatible pointer type "void (*)(int, int)"
 *
 *		  ptr = add;
 *		      ^
 *
 *	error : too many arguments to function "ptr"
 *		
 *		ptr(10, 20);
 *		^
 *
 *	warning : assignment to "void (*)(int)" from incompatible pointer type "void (*)(int, int)"
 *
 *		  ptr = sub;
 *		      ^
 *	error : too many arguments to function "ptr"
 *
 *		ptr(20, 10);
 *		^
 *
*/		      
