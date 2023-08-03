
/*	Prog 7 : Check if a number is prime or not
 *
 *	Input : N = 7
 *	Ouput : true
*/	

#include<stdio.h>
#include<stdbool.h>

bool prime(int n){
	
	for(int i = 2; i < n; i++){
		
		if(n % i == 0){
			
			return false;
		}
	}

	return true;
}

void main(){
	
	int n = 7;

	int ret = prime(n);
	
	if(ret == true){
		printf("PRime Number\n");
	}else{
		printf("Not a Prime number\n");
	}
}
