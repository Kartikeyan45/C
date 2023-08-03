/*	PRogram 3 : Finding Prime Number
 *
 *	4 approach = efficient approach
*/		

	
#include<stdio.h>
#include<stdbool.h>

int squareRoot(int n){
	
	float sqrt, temp;

	sqrt = n / 2;	// divide the given number by 2 and store into sqrt
	
	temp = 0;

	while(sqrt != temp){
		
		temp = sqrt;

		sqrt = (n / temp + temp) / 2;
	}

	return sqrt;
}

int prime(int n){
	
	int ret = squareRoot(n);

	printf("ret is %d\n", ret);
	
	int count = 0;
	
	if(n > 36){

		for(int i = 1; i < ret; i++){
		
			if(n % i == 0){
			
				count++;
			}

			if(count > 2){
			
				printf("Non Prime\n");
				break;
			}
		}

		if(count == 2){
		
			printf("Prime\n");
		}
	}else{
		
		for(int i = 1; i <= n / 2; i++){
			
			if(n % i == 0){
				
				count++;
			}

			if(count > 2){
				
				printf("Non Prime\n");
				break;
			}
		}

		if(count == 2){
			
			printf("Prime\n");
		}
	}
}

void main(){

	int n;
	printf("Enter Number\n");
	scanf("%d", &n);

	prime(n);
}
