/*	PRogram 3 :
*/

#include<stdio.h>

struct CricPlayer{

	int jerNO;
	float avg;
	double grade;
};

void main(){
	
	struct CricPlayer Vk;

	printf("%ld\n", sizeof(Vk));
	printf("%ld\n", sizeof(struct CricPlayer));
}
