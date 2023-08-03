//	PRogram 3 : Finding Prime Number


#include<stdio.h>
#include<stdbool.h>

int prime(int n){
	
	int count = 0;

	for(int i = 1; i <= n; i++){
	
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

void main(){

	int n;
	printf("Enter Number\n");
	scanf("%d", &n);

	prime(n);
}
