/* 	Program 9 : WAP t print the sum 
 *  		    of the first 10 odd numbers
*/

#include<stdio.h>

void main(){

	int x,y, sum=0;

	printf("Enter value of x :\n");
	scanf("%d", &x);
	
	printf("Enter value of y :\n");
	scanf("%d", &y);

	for(int i=x; i<=y; i++){
		
		if(i % 2 != 0){
			sum = sum + i;
		}
	}
	printf("Sum of first 10 odd numbers are :%d\n", sum);
}
