/*	PRogram 4 : WAP to print Sum of an 1D-Array
*/

#include<stdio.h>

int SumArr(int *ptr, int arrSize){

	int sum = 0;

	for(int i = 0; i < arrSize; i++){
	
		sum = sum + *(ptr + i);
	}

	return sum;
}

void main(){

	int arr[] = {10,20,30,40,50};

	int arrSize = sizeof(arr) / sizeof(int);

	int sum = SumArr(arr, arrSize);

	printf("%d\n", sum);
}
