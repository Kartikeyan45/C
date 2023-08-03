/* 	Program 10 : WAP to print the product
 *  		     Of the first 10 numbers
*/

#include<stdio.h>

void main(){

	int a,b;

	int x = 0;
	int product = 1;

	printf("Enter value of a :\n");
	scanf("%d", &a);

	printf("Enter value of b :\n");
	scanf("%d", &b);

	for(int i=a; i<=b; i++){
		
		printf("%d number to multiply is :\n", i);

		scanf("%d", &x);

		product = product * x;
	}

	printf("Final Product is :%d\n", product);

}
