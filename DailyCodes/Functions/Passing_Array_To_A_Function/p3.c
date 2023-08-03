/*	Program 3 :
 *
 *	Topic :	1] Passing Entire Array to a Function.
*/

#include<stdio.h>

void printArr1(int *ptr, int arrSize){

	printf("In Array 1\n");

	for(int i = 0; i < arrSize; i++){
	
		printf("%d\n", *(ptr + i));
	}
}

void printArr2(int arr[], int arrSize){

	printf("In Array 2\n");

	for(int i = 0; i < arrSize; i++){
	
		printf("%d\n", arr[i]);
	}
}

void main(){

	int arr[] = {10,20,30,40,50};

	int arrSize = sizeof(arr) / sizeof(int);

	printArr1(arr, arrSize);
	printArr2(arr, arrSize);
}
