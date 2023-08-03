/*	Program 2 : 
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

	ptr = &add;		/* add function cha address dila ahe mhnje add function cha first
				   instruction cha address asto ithe printf cha address asel
				*/
	ptr(10, 20);

	ptr = &sub;
	ptr(20,10);	
}
