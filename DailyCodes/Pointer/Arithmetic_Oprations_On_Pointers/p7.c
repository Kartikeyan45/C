/*	Program 7 :
*/

#include<stdio.h>

void main(){

	char carr[] = {'A','B','C','D'};

	char *cptr1 = &carr[2];

	char  *cptr2 = &carr[3];

	printf("%c\n", *cptr1);			//c

	printf("%c\n", *cptr2);			//d

	printf("%c\n", *(cptr1 + 2));		//blank

	printf("%c\n", *(cptr2 + 1));		//blank
}
