/*	Program 9 :
*/

#include<stdio.h>

struct Demo{

	char ch;
	int x;
	float f;
	double arr[5];
};

void main(){
	
	struct Demo Vk;

	printf("%ld\n", sizeof(Vk));
	printf("%ld\n", sizeof(struct Demo));
}
