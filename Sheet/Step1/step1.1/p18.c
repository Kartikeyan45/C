
/*

Input Format: N = 3
Result: 
C
B C
A B C

Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
A B C D E F

*/

#include<stdio.h>

void main(){
	
	int row = 5;
	
	char ch = 'E';

	for(int i = 1; i <= row; i++){
		
		for(int j = 1; j <= i; j++){
			
			printf("%c ", ch);
			ch++;
		}
		ch = ch-i-1;
		printf("\n");
	}
}
