/*	Program 3 : 
 *
 *	Topic : Function Pointer / Pointer to a function
 *
 *	Function Pointer la exact returnType Pahije
*/

#include<stdio.h>

void add(int a, int b){

	printf("%d\n", a+b);
}

void sub(float a, float b){

	printf("%f\n", a-b);
}

void main(){

	void (*ptr)(int, int);	

	ptr = add;		
	ptr(10, 20);

	ptr = sub;
	ptr(20,10);	
}

/*	warning : assignment to "void (*)(int, int)" from incompatible pointer type "int (*)(int, int)"
 *
 *		  ptr = sub;
 *		      ^
*/		      
