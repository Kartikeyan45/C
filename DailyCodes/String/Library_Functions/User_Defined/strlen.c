/*	Program : WAP to get length of the string
 *
 *	Declaration : int strlen(char *).
*/

#include<stdio.h>

int mystrlen(char *str){

	int count = 0;

	while(*str != '\0'){
	
		count++;
		str++;
	}
	return count;
}

void main(){
	
	char name[10] = {'S','h', 'r', 'e', 'e','\0'};

	char *str = "Virat";

	printf("%d\n", mystrlen(name));

	printf("%d\n", mystrlen(str));

}
