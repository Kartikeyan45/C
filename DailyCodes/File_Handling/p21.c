/*	Program 21 : 
 *
 *	Topic : fclose
*/

#include<stdio.h>

void main(){
	
	FILE *fp = fopen("success.txt", "r");	
	
	printf("%c\n", getc(fp));
	printf("%c\n", getc(fp));

	fclose(fp);

	printf("%c\n", getc(fp));

}
