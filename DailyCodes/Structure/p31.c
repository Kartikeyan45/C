/*	Program 31 :
 *
 *	Topic : Bit Field
*/

#include<stdio.h>

struct Demo{

	int x : 2;
	int y : 2;
};

void main(){

	printf("%ld\n", sizeof(struct Demo));	//4
}
