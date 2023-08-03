/*	Program 12 : 
 *
 *	4] ftell
 *
 *		offset - character kitva ahe file madla		
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("info.txt", "w");

	printf("%ld\n", ftell(fp));	//0

	fprintf(fp, "Core2web");

	printf("%ld\n", ftell(fp));	//8
}
