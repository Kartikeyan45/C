/*	Program 5 :
*/

#include<stdio.h>

struct Demo{

	int jerNO;
	double grade;
	float avg;
};

void main(){
	
	struct Demo Vk;

	printf("%ld\n", sizeof(Vk));
	printf("%ld\n", sizeof(struct Demo));
}
