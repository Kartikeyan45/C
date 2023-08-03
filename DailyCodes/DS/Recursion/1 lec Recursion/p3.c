//	PRogram 3 : Finding Prime Number


#include<stdio.h>
#include<stdbool.h>

int prime(int n){

	bool flag = 0;
	for(int i = 2; i < n/2; i++){
	
		if(n % i == 0){
		
			printf("Non Prime\n");
			flag = 1;
			break;
		}
	}
	if(flag == 0){
	
		printf("Prime\n");
	}
}

void main(){

	int n;
	printf("Enter Number\n");
	scanf("%d", &n);

	prime(n);
}
