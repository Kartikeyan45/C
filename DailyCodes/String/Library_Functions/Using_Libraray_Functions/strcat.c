/*	PRogram 3 :
*/

#include<stdio.h>
#include<string.h>

void main(){

	char str1[20] = {'K','a','r','\0'};	

	char *str2 = "tik";

	puts(str1);
	puts(str2);

	strcat(str1, str2);

	puts(str1);
	puts(str2);

}
