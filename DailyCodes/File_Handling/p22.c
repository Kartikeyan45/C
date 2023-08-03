/*	PRogram 22 :
 *
 *	Topic : fputw, fgetw
 *
 *	Only used to store and print "int"
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("abc.txt", "w+");

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

/*	int ahe means 4 bytes lagto, starting ftell 0 ahe, 10 sathi 4 bytes
 *	20 sathi 4 bytes, ata ftell 8 la ahe, putw mule file madhe write zalay
 *	values pan editor chya problem mule data disat nahi ahe..
*/
