
//	Prog - 2

#include<stdio.h>

int power(int a, int p){
	
	if(p == 0){
		
		return 1;
	}

	return a * power(a, p-1);
}

void main(){
	
	int a = 2, p = 5;

	int ret = power(a,p);

	printf("%d\n", ret);
}
