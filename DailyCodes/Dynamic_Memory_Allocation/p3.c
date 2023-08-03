/*	Program 3 :
 *
 *	calloc - contiguous(sequence) allocation
 *
 *		 mainly used in array
 *
 *		 calloc la don parameter dyava lagto,
 *		 ek kiti size cha ahe, sizeof(int).
*/

#include<stdio.h>
#include<stdlib.h>

void main(){

	int *ptr = (int *)calloc(5, sizeof(int));

	for(int i = 0; i < 5; i++){
	
		*(ptr + i) = 10 + i;
	}

	for(int i = 0; i < 5; i++){
	
		printf("%d\n", *(ptr + i));
	}
}
