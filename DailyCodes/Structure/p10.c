/*	Program 10 :
*/

#include<stdio.h>

#pragma pack(1)

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
