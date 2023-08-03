/*	Program 8 :
*/

#include<stdio.h>

struct Demo{

	char ch;
	int x;
	float f;
	char arr[10];
};

void main(){
	
	struct Demo Vk;

	printf("%ld\n", sizeof(Vk));
	printf("%ld\n", sizeof(struct Demo));
}
