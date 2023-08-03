/*	PRogram 1 :
*/

#include<stdio.h>

int *fun(int x, int y){

	printf("%d\n", x+y);

	int val;
	val = x+y;	

	return &val;
}

void main(){

	int *ptr = fun(10, 20);		/*warning : function return address of local variables
						
						    return &val;
					*/						    

	printf("%p\n", ptr);		//nil

	printf("%d\n", *ptr);		//30
}

//ouput : segmentation fault

//	local variable che address kadich return karyacha nahi.

