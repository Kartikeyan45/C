
#include<stdio.h>

int power(int n, int p){

	if(p == 0){
	
		return 1;
	}

	int prevPower = power(n, p-1);
	return n * prevPower;
}	

void main(){

	int n, p;
	printf("Enter n and p\n");
	scanf("%d %d", &n, &p);

	int ret = power(n, p);
	printf("Power is %d\n", ret);
}
