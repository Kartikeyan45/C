/*	Program 34 :
 *
 *	Topic : Bit Field
*/

#include<stdio.h>

#pragma pack(1)

struct Demo{

	int x : 33;	//error
	int y;
};

void main(){

	printf("%ld\n", sizeof(struct Demo));	//5
}

//	error : width of "x" exceeds its type
