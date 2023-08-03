/*	Program 4 :
*/

#include<stdio.h>

void main(){

	char arr1[3] = {'A','B','C'};
	char arr2[3] = {'D','E','F'};
	char arr3[3] = {'G','H','I'};

	char *cparr[3] = {arr1, arr2, arr3};

	printf("%ld\n", sizeof(cparr));		//24

	cparr[0] = arr1 + 1;
	cparr[1] = arr2 + 2;
	cparr[2] = arr3;

	printf("%c\n", *(cparr[0]));	//B

	printf("%c\n", *(cparr[1]));	//F

	printf("%c\n", *(cparr[2]));	//G
}
