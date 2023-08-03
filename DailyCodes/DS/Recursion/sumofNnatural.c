
//	Program : Sum of N Natural Numbers

#include<stdio.h>

int sumN(int n){

	if(n <= 1){
		
		return 1;
	}

	return sumN(n - 1) + n;
}

void main(){

	int ret = sumN(5);
	printf("%d\n", ret);
}
