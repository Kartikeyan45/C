/*	PRogram 4 :
*/

#include<stdio.h>
#include<string.h>

void main(){

	char *str1 = "Kartik";
	char *str2 = "Kartik";

	int diff = strcmp(str1, str2);

	if(diff == 0){
	
		printf("Strings are equal\n");
	}else{
	
		printf("Strings are not equal\n");
	}
}
