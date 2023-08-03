/*	Program 4:
*/

#include<stdio.h>

void fun(int x){

	printf("%d\n", x);
	fun(--x);
}

void main(){

	fun(5);
}

//	"-2,61,956" ala nantar Segmentation fault yeto
