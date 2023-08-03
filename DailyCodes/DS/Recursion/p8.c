/*	PRogram 8 :
 *
 *	Printing Sum from 10 to 0 with Recursion
*/

#include<stdio.h>

void fun(int x){

	int static sum = 0;	

	sum = sum + x;

	if(x != 1){
	
		fun(--x);
	}else{
	
		printf("%d\n", sum);
	}
}

void main(){

	fun(10);
}
