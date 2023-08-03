/*	P1 : strcat
*/

#include<stdio.h>

int mystrlen(char *str){

	int count  = 0;

	while(*str != '\0'){
	
		count++;
		str++;
	}
	return count;
}

void main(){

	char pName[7] = {'K','a','r','t','i','k','\0'};

	char *str = "Onkar";

	printf("%d\n", mystrlen(pName));
	printf("%d\n", mystrlen(str));
}
