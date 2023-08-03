
//	Prog - 3

#include<stdio.h>

int power(int a, int p){
	
	if(p == 0){
		
		return 1;
	}

	if(p % 2 == 0){
		return power(a, p/2) * power(a, p/2);
	}else{
		return power(a, p/2) * power(a, p/2) * a;
	}
}

void main(){
	
	int a = 2, p = 5;

	int ret = power(a,p);

	printf("%d\n", ret);
}
