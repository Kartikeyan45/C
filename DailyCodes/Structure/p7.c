/*	Program 7 :
*/

#include<stdio.h>

struct Demo{

	float f;
	char *ch;
	int x;
	int y;
};

void main(){
	
	struct Demo Vk;

	printf("%ld\n", sizeof(Vk));
	printf("%ld\n", sizeof(struct Demo));
}
