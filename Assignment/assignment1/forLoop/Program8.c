/*	Program 8 - WAP take two characters if these characters are equal then print the same
 *		    but if they are unequal then print their difference
*/

#include<stdio.h>

void main(){

	char ch1, ch2;

	printf("Enter Char1 :\n");
	scanf(" %c", &ch1);

	printf("Enter Char2 :\n");
	scanf(" %c", &ch2);

	if(ch1 == ch2){
	
		printf("%c and %c are equal\n", ch1, ch2);
	}else if(ch1 >= ch2){
	
		printf("difference is : %d\n", ch1-ch2);

	}else if(ch2 >= ch1){
	
		printf("difference is :%d\n", ch2-ch1);
	}else{
		printf("Wrong input\n");
	}
}
