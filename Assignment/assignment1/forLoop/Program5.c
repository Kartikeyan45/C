/*	Program 5 : WAP to take the number input and 
 *		    print all the factors of that number
*/

#include<stdio.h>

void main(){

	int x;

	printf("Enter value :\n");
	scanf("%d", &x);

	printf("Factors of %d are :\n", x);

	for(int i = 1; i < x; i++){
	
		if(x % i == 0){
		
			printf("%d ", i);
		}
	}

	printf("\n");
}
