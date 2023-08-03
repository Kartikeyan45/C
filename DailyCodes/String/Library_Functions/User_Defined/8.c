/*	PRogram 8 : strupr
*/

#include<stdio.h>

char *mystrupr(char *str){

	while(*str != '\0'){
	
		if(*str >= 97 && *str <= 122){
		
			*str = *str - 32;
		}

		str++;
	}

	return str;
}

void main(){

	char str[20] = {'S','h','r','e','e'};

	puts(str);

	mystrupr(str);

	puts(str);
}
