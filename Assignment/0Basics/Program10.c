/*

Write a program to check is a character is a vowel or consonant.
Take all the values from the user.

Input : chr = 'A';
Output : A is vowel

Input : chr = "D";
Output : D is consonant

*/

#include<stdio.h>

void main(){
	
	char chr;

	printf("Character is :\n");

	scanf("%c", &chr);
	
	printf("Character is :%c\n", chr);

	if(chr == 'a'|| chr == 'e'|| chr == 'i' || chr == 'o'|| chr == 'u'
			|| chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U'){
		
		printf("%c is vowel\n", chr);
	}else{
		printf("%c is consonant\n", chr);
	}
}
