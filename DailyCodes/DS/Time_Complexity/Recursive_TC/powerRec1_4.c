
//	Prog - 4

#include<stdio.h>

int power(int a, int p){
	
	if(p == 0){
		
		return 1;
	}

	int x = power(a, p / 2);

	if(p % 2 == 0){
		return x * x;
	}else{
		return x * x * a;
	}
}

void main(){
	
	int a = 2, p = 5;

	int ret = power(a,p);

	printf("%d\n", ret);
}

