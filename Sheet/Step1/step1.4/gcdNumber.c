
/*	Prog 4 : Find GCD of a number
 *
 *	Input : N = 9
 *	Ouput : 
*/	

#include<stdio.h>

int gcd(int n1, int n2){
	
	int ans;

	for(int i = 1; i <= n1 && i <= n2; i++){

		if(n1 % i == 0 && n2 % i == 0){
			
			ans = i;
		}
	}
	
	printf("GCd of %d and %d is %d\n", n1, n2, ans);
}

void main(){
	
	int n1 = 9, n2 = 12;
	
	gcd(n1, n2);
}
