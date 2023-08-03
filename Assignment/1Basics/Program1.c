/*	
 *	 Program1 :Write a program to print the first 
 *	           10  capital letters.
*/

#include<stdio.h>

void main(){

	char ch1, ch2;

	printf("Enter Character1 :\n");
	scanf(" %c", &ch1);

	
	printf("Enter Character2 :\n");
	scanf(" %c", &ch2);

	for(char i=ch1; i<=ch2; i++){
	
		if(ch1 >= 'A' && ch2 <='J'){
		
			printf("Capital characters from A to J are : %c\n", i);
		}else{
		
			printf("Wrong input\n");
			break;
		}
	}

}
