/*	Program 6 :
*/

#include<stdio.h>

struct Demo{

	int jerNO;
	char ch;
	float avg;
	double grade;
};

void main(){
	
	struct Demo Vk;

	printf("%ld\n", sizeof(Vk));
	printf("%ld\n", sizeof(struct Demo));
}
