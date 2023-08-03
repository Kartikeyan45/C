
/*	Prog 6 : Print all divisors of a given number
 *
 *	Input : N = 12
 *	Ouput : 1 2 3 4 6 12
*/	

#include<stdio.h>

void divisors(int n){
	
	for(int i = 1; i <= n; i++){
		
		if(n % i == 0){
			
			printf("%d\n", i);
		}
	}
}

void main(){
	
	int n = 12;

	divisors(n);
}
