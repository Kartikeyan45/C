/*	PRogram 6 :
*/

#include<stdio.h>

void main(){

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	printf("%p\n", &arr);	//&arr mhnje whole array cha address

	printf("%p\n", arr);	//arr mhnje sagla 1st row cha address

	printf("%p\n", arr[0]);		//1st row ccha 1st element cha address

	printf("%p\n", &arr[0]);	//Complete 1st row cha address

	printf("%p\n", &arr[0][0]);	//0th row cha 0th column cha address

	printf("%d\n", *(*(arr + 1) + 1));	//50

	printf("%d\n", *(*(arr + 2) + 2));	//90
}

/*	arr[2][1]
 *
 *	= *(*(arr + 2) + 1)
 *
 *	= *(*(100 + 2 * sizeof(whole 1-D Array) + 1)
 *
 *	= *(*(100 + 2 * (12) + 1))
 *
 *	= *(*(124) + 1)
 *
 *	= *(124 + 1)
 *
 *	= *(124 + 1 * sizeof(DTP))
 *
 *	= *(124 + 1 * 4)
 *
 *	= *(128)
 *
 *	= ValueAt(128)
 *
 *	= 80
