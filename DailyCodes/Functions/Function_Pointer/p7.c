/*	Program 7 :
 *
 *	Function Pointer madhe maximum 2 arithmetic operation hotat,
 *	ajun kelyavar Illegal instruction(core dumped) mahnun yeto.
*/

#include<stdio.h>

void add(int a, int b){

	printf("1 = %d\n", a+b);
	printf("2 = %d\n", a+b);
	printf("3 = %d\n", a+b);

}

void main(){

	void (*ptr)(int, int);

	ptr = add;
	ptr(10,20);

	printf("%p\n", ptr);
	ptr++;
	printf("%p\n", ptr);

	ptr(30,40);

	printf("%p\n", ptr);
	ptr++;
	printf("%p\n", ptr);
	
	ptr(10,10);

	printf("%p\n", ptr);
	ptr++;
	printf("%p\n", ptr);	
}

/*	output : 30
 *		 30
 *		 30
 *		 0x100
 *		 0x101
 *		 70
 *		 70
 *		 70
 *		 0x101
 *		 0x102
 *		 Illegal Instruction(core dumped)
*/	
 	
