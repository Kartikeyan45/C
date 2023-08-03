/* 	Program 5 : WAP to print
 *  		    ASCII values from 0 to 127
*/

#include<stdio.h>

void main(){

	int x,y;

	printf("Enter value of x :\n");
	scanf("%d", &x);

	printf("Enter value of y :\n");
	scanf("%d", &y);

	for(int i=x; i<=y; i++){
	
		printf("Ascii values from 0 to 127 are %c = %d\n", i, i);
	}
}
