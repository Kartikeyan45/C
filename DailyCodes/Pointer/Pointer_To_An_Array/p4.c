/*	PRogram 4 :
*/

#include<stdio.h>

void main(){

	char carr[3] = {'A','B','C'};
	char carr2[3] = {'D','E','F'};

	char *ptr1 = &carr[1];

	char *ptr2 = carr;

	char (*ptr3)[3] = &carr;

	printf("%c\n", **ptr3);		//A

	//Different ways
	printf("%c\n", **ptr3 + 2);	//C
	printf("%c\n", *(*ptr3 + 2));	//C
	printf("%c\n", *((*ptr3 + 2)));	//C
	
	ptr3++;

	printf("%c\n", **ptr3);		//D
}
