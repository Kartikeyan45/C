
//	Mutliple Recursion

#include<stdio.h>

int fun(int N){

	if(N <= 1){
	
		return 1;
	}

	return N + fun(N - 1) + fun(N - 2);
}

void main(){

	int ret = fun(4);
	printf("%d\n", ret);
}
