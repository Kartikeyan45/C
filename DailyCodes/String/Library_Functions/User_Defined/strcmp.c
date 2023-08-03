/*	Program 4 : WAP to compare the string
 *	
 *	declaration : char *strcmp(char *src, char *dest);
*/

#include<stdio.h>

int mystrcmp(char *str1, char *str2){

	while(*str1 != '\0'){
	
		if(*str1 == *str2){
		
			str1++;
			str2++;
		}else{
			
			return *str1 - *str2;
		}
	}
	return 0;
}

void main(){

	char *str1 = "Kartik";
	char *str2 = "Kartik";

	int diff = mystrcmp(str1, str2);

	if(diff == 0){
	
		printf("Strings are equal\n");
	}else{
	
		printf("Strings are not equal\n");
	}
}
