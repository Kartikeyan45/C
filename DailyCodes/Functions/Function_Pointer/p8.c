/*	Program 8 :
 *
 *	Topic : Array of Function Pointer..
*/

#include<stdio.h>

void add(int x, int y){

	printf("%d\n", x+y);
}

void sub(int x, int y){

	printf("%d\n", x-y);
}

void mult(int x, int y){

	printf("%d\n", x*y);
}

void div(int x, int y){

	printf("%d\n", x/y);
}

void main(){

	void (*ptr[4])(int, int) = {add, sub, mult, div};

	for(int i = 0; i < 4; i++){
	
		ptr[i](30,20);
	}
}

/*	output : 50
 *		 10
 *		 600
 *		 1
*/	
 	
