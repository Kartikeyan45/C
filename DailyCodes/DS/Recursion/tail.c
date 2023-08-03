/*	Program 2 :
 *
 *	Tail Recursion : Function last la asto tyala tail recursion ase mhntat
*/

#include<stdio.h>

void fun(int N){

	printf("%d\n", N);
	fun(N);
}

void main(){

	fun(10);
}

//	Segmentation Fault Yeto (Core Dumped)
