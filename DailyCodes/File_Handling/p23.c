/*	PRogram 23 :
 *
 *	Topic : fputw, fgetw
 *
 *	Only used to store and print "int"
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("abc.txt", "r+");	//compulsory "w+" pahije nahitar segmentation fault yeto

	int num1 = 10;
	int num2 = 20;

	printf("%ld\n", ftell(fp));	//0

	putw(num1, fp);
	putw(num2, fp);

	printf("%ld\n", ftell(fp));	//8

	rewind(fp);		

	printf("%d\n", getw(fp));	//10
	printf("%d\n", getw(fp));	//20
}

