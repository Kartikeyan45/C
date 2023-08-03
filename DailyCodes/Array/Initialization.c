/*	Array Initialization :-
 *
 *	1 - int iarr[5] = {1,2,3,4,5};
 *
 *	2 - int iarr[] = {10,20,30,40};
 *
 *		There are 4 values in the array that's why array allocates 4 boxes to store the elements.
 *		4 elements size would be 16 because int size is 4 bytes and 4 elements i.e 4 * 4 = 16
 *
 *	3 - char carr[] = {'A','B','C'};
 *
 *	4 - float farr[] = {20.1f, 34.5f, 56.8f};
 *
 *	5 - double darr[] = {10.5, 11.9, 67.4};
*/

#include<stdio.h>

void main(){

	int size;
	printf("Enter size in an array :\n");
	scanf("%d", &size);

	int arr[size];

	printf("Enter Array Elements\n");
	for(int i = 0; i < size; i++){
	
		scanf("%d", &arr[i]);
	}
	
	printf("Array elements are\n");
	for(int i = 0; i < size; i++){
	
		printf("%d\n", arr[i]);
	}
}
