
/*

Input Format: N = 3
Result: 
A
B B
C C C

Input Format: N = 6
Result:   
A 
B B
C C C
D D D D
E E E E E
F F F F F F

*/

#include<stdio.h>

void main(){
	
	int row = 5;
	
	int ch = 65;

	for(int i = 1; i <= row; i++){
		
		for(int j = 1; j <= i; j++){
			
			printf("%c ", ch);
			
		}
		ch++;
		printf("\n");
	}
}
