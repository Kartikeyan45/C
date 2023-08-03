/*	PRogram 1 :
 *
 *	Love Babbar - Reverse
*/

#include<stdio.h>
#include<string.h>

char *myStrRev(char *str){

	char *temp = str;

	while(*temp != '\0'){
	
		temp++;
	}

	temp--;

	char x;

	while(str < temp){
	
		x = *str;
		*str = *temp;
		*temp = x;

		str++;
		temp--;
	}

	return str;
}

void main(){

	char str[20] = "kartik";

	myStrRev(str);

	puts(str);
}
