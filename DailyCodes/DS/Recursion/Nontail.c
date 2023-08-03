/*	Program 3
 *
 *	Non Tail Recursion : function last la nasto tyala Non-Tail Recursion ahe mhntat
*/

#include<stdio.h>

void fun(int N){

	fun(N);
	printf("%d\n", N);
}

void main(){

	fun(10);
}

//	Segmentation Fault (Core Dumped)
