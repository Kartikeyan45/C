/*	PRogram 1 :
*/

#include<stdio.h>

void add(int x, int y){

	printf("%d\n", x+y);
}

void fun(void (*ptr)(int, int)){

	ptr(10,20);
}

void main(){

	fun(add);
}
