/*	Program 2 : WAP to print the character whose ASCII is even
*/

#include<stdio.h>

void main(){
	
	printf("Charcater whose ASCII is even are :\n");

	for(int i = 0; i <= 128; i++){
	
		if(i % 2 == 0){
		
			printf("%c \t", i);
		}
	}
}
