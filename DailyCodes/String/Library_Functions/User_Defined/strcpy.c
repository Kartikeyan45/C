/*	Program : WAP to copy the string
 *
 *	Declaration : char *mystrcpy(char *dest, const char *src).
*/

#include<stdio.h>
#include<string.h>

char *mystrcpy(char *dest, char *src){

	while(*src != '\0'){
	
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';
}

void main(){

	char *str1 = "Virat";

	char str2[20];

	mystrcpy(str2, str1);

	puts(str1);
	puts(str2);
}
