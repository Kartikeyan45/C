
/*

Input Format: N = 3
Result:
1
2 3
4 5 6

Input Format: N = 6
Result:
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21

*/

#include<stdio.h>

void main(){
	
	int row = 5;
	
	int x = 1;

	for(int i = 1; i <= row; i++){
		
		for(int j = 1; j <= i; j++){
			
			printf("%d ", x);
			x++;
		}

		printf("\n");
	}
}
