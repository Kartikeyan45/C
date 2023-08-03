/*	Program 7 : WAP to print Diagonal Elements Sum  in an 1D-Array
*/

#include<stdio.h>

int SumArr(int *ptr, int arrSize){

	int sum = 0;

	for(int i = 0; i < arrSize; i++){
	
		if(i % 4 == 0){
		
			sum = sum + *(ptr + i);
		}
	}
	return sum;
}

void main(){

	int arr[] = {1,2,3,4,5,6,7,8,9};

	int arrSize = sizeof(arr) / sizeof(int);

	int sum = SumAr:w:r(arr, arrSize);

	printf("%d\n", sum);
}
