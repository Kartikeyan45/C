/*	Program 18 :
*/

#include<stdio.h>
#include<stdlib.h>

struct IPL{

	char name[20];
	int teams;
	double prize;
};

void main(){

	int *ptr = (int *) malloc (sizeof(int));

	*ptr = 50;

	printf("%p\n", ptr);

	printf("%d\n", *ptr);

	free(ptr);
}

