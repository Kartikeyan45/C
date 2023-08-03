/*	Program 1 : WAP a program to see a given number 
 *		    is a multiple of 3
 *
*/

#include<stdio.h>

void main(){

	int x;

	printf("Enter value of x :\n");

	scanf("%d", &x);

	if(x % 3 == 0){
		
		printf("%d is multiple of 3\n", x);
	}else{
	
		printf("%d is not a multiple of 3\n", x);
	}
}
