/* 	Program 2 : WAP to print the 
 *  		    first 100 numbers
*/  		    

#include<stdio.h>

void main(){

	int x,y;

	printf("Enter value of x :\n");
	scanf("%d", &x);

	printf("Enter value of y :\n");
	scanf("%d", &y);

	for(int i=x; i<=y; i++){
		

		if(x ==  1 && y == 100){
			printf("Numbers from 1 to 100 are :%d\n", i);
		}else{
			printf("Wrong input\n");
			break;
		}
	}
}
