/*	Program 6 :
*/

#include<stdio.h>

void add(int a, int b){

	printf("1 = %d\n", a+b);
	printf("2 = %d\n", a+b);
	printf("3 = %d\n", a+b);

}

void main(){

	void (*ptr)(int, int);

	ptr = add;
	ptr(10,20);

	printf("%p\n", ptr);

	ptr++;

	printf("%p\n", ptr);

	ptr(30,40);
}
