/*	Program 3 : WAP to print all even numbers in reverse order and 
 *		    odd numbers in the standard way.Both separately.Within a given range.
*/

#include<stdio.h>

void main(){

	int x, y;

	printf("Enter starting value :\n");
	scanf("%d", &x);
	
	printf("Enter ending value :\n");
	scanf("%d", &y);

	for(int i = y; i <= x; i--){
	
		if(i % 2 == 0){
			printf("%d is a even\n", i);
		}else if(i % 2 != 0){
			printf("%d is odd\n", y-i);
		}
	}
}
