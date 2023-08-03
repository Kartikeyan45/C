/*	Program 4 : WAP to find sum of numbers that are divisible by 5 in the given range
*/

#include<stdio.h>

void main(){

	int x, y;

	printf("Enter start value and ending value :\n");
	scanf("%d %d", &x, &y);

	int sum = 0;

	for(int i = x; i <= y; i++){
	
		if(i % 5 == 0){
		
			sum = sum + i;
		}
	}
	printf("Sum of numbers divisible by are : %d\n", sum);
}
