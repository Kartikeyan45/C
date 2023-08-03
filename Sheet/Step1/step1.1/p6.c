
/*

Input Format: N = 3
Result:
1 2 3
1 2
1

Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/


#include<stdio.h>

void main(){
	
	int n = 5;

	for(int i = 1; i <= n; i++){
		
		int x = 1;

		for(int j = n; j >= i; j--){
			
			printf("%d ", x);
			x++;
			
		}
	
		printf("\n");
	}
}
