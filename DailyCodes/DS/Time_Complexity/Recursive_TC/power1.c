
#include<stdio.h>

int power(int x, int p){
	
	int prod = 1;

	for(int i = 1; i <= p; i++){
		
		prod = prod * x;
	}

	return prod;
}

void main(){
	
	int x = 2;
	int p = 5;

	int ret = power(x, p);

	printf("%d\n", ret);
}
