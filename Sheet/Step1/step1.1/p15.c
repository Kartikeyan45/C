
/*

Input Format: N = 3
Result: 
A B C
A B
A

Input Format: N = 6
Result:   
A B C D E F
A B C D E 
A B C D
A B C
A B
A

*/

#include<stdio.h>

void main(){
	
	int row = 5;

	for(int i = 1; i <= row; i++){

		int ch = 65;
		
		for(int j = row; j >= i; j--){
			
			printf("%c ", ch);
			ch++;
		}

		printf("\n");
	}
}
