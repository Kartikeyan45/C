/*	Program 6 : WAP to print
 *		    reverse from 100-1
*/

#include<stdio.h>

void main(){

	int x,y;

	printf("Enter value of x :\n");
	scanf("%d", &x);

	printf("Enter value of y :\n");
	scanf("%d", &y);

	for(int i = x; i >= y; i--){
		printf("Reverse order from 100 to 1 are :%d\n", i);
	}
}
