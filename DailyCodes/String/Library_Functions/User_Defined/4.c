/*	P4 : strcmp
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
}

void main(){

	char *str1 = "Charkupalli";

	char *str2 = "Charkupalli";

	int diff = mystrcmp(str1, str2);

	if(diff = 0){
	
		printf("Strings are equal\n");
	}else{
	
		printf("Strings are not equal\n");
	}
}
