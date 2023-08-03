
/*	PRogram : reverse a string without recursion
*/

#include<stdio.h>

char *mystr(char *str){

	char *temp = str;

	while(*temp != '\0'){
	
		temp++;
	}

	temp--;

	char x;

	while(str < temp){
	
		x = *str;
		*str = *temp;
		*temp = *str;

		str++;
		temp--;
	}

	return str;
}

void main(){

	char arr[] = "kartik";

	mystr(arr);

	puts(arr);
}
