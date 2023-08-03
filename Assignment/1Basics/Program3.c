/*	Program 3 : WAP to print the
 *	        first ten, 3 digit number
*/	        
	
#include<stdio.h>

void main(){

	int x,y;

	printf("Enter value of x :\n");
	scanf("%d", &x);

	printf("Enter value of y :\n");
	scanf("%d", &y);

	for(int i=x; i<=y; i++){
	
		if(x >= 100 && y >= 100){
			printf("First 10, 3digit number are :%d\n", i);
		}else{
		
			printf("Wrong input\n");
			break;
		}
	}

}
