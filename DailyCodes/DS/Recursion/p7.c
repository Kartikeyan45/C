/*	PRogram 7 :
 *
 *	Printing Number from 10 to 0 with Recursion
*/

#include<stdio.h>

void fun(int x){

	printf("%d\n", x);

	if(x != 1){
	
		fun(--x);
	}
}

void main(){

	fun(10);
}
