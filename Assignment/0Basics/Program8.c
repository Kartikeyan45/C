/*
	Program 8 : Write a program, take a character and print whether it is an
		    Uppercase or lowercase.Take all the values from the user

	Input : var = A
	Output : You entered the Uppercase character

*/
#include<stdio.h>

void main(){

	char var;

	printf("Enter character\n");

	scanf("%c", &var);

	printf("Character = %c\n", var);

	if(var >= 'A' && var <= 'Z'){
		printf("%c is Uppercase letter\n", var);
	}else if(var >= 'a'&& var <= 'z'){
		printf("%c is Lowercase letter\n", var);
	}else{
		printf("Wrong input\n");
	}
}
