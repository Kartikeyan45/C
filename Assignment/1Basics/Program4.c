/*	Program 4: WAP to print
 *		   even numbers from 1-100
*/

#include<stdio.h>

void main(){

	int x,y;

	printf("Enter value of x :\n");
	scanf("%d", &x);

	printf("Enter value of y :\n");
	scanf("%d", &y);

	for(int i=x; i<=y; i++){
	
		if(i % 2 == 0){
			printf("Even numbers from 1 to 100 are :%d\n", i);
		}	
	}
}
