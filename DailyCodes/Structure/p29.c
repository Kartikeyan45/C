/*	Program 29 :
 *
 *	Topic : Bit Field
*/

#include<stdio.h>

struct Demo{

	int x : 1;
	int y;
};

void main(){

	printf("%ld\n", sizeof(struct Demo));	//8
}
