/*	Program 1 : 
 *
 *	Topic : Function Pointer / Pointer to a function
 *
 *	OS Function Pointer vaparto
 *
 *	Stack Frame pop zalyavar main kade return zato,
 *	karan tyachakade tya function cha address asto.
*/

#include<stdio.h>

void add(int a, int b){

	printf("%d\n", a+b);
}

void sub(int a, int b){

	printf("%d\n", a-b);
}

void main(){

	void (*ptr)(int, int);	/*declaration : It means that ek function pointer ahe jyachakade 
				  		don parameter ahet, ani function pointer cha 
						returntype ahe void.
				*/
	ptr = add;
	ptr(10, 20);

	ptr = sub;
	ptr(20,10);	
}
