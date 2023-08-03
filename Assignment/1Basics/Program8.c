/*	Program 8 : WAP to print
 *		    a table of 11 in reverse order
*/

#include<stdio.h>

void main(){

	int x,y,num;

	printf("Enter value of x :\n");
	scanf("%d", &x);

	printf("Enter value of y :\n");
	scanf("%d", &y);

	printf("Enter number to print table in reverse order :\n");
	scanf("%d", &num);

	for(int i=x; i>=y; i--){
	
		printf("%d * %d = %d\n", num, i, (num*i));
	}
}
