
//	Program : Tail Recursion

#include<stdio.h>

int tailDemo(int X){

	if(X == 1){
	
		return 1;
	}

	return tailDemo(--X);
}

void main(){

	int ans = tailDemo(4);
	printf("%d\n", ans);
}
