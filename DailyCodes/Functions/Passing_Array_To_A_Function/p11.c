/*	Program 11 : WAP to print Diagonal Elements Sum in an 3D-Array
*/

#include<stdio.h>

int sumDiagonal(int (*ptr)[][3], int arrSize){

	int sum = 0;

	for(int i = 0; i < arrSize; i+=2){
		
		if(i == arrSize / 2 + 1){
		
			i--;
		}
		sum = sum + *(*(*(ptr)) + i);		
	}
	return sum;
}

void main(){

	int arr[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

	int arrSize = sizeof(arr) / sizeof(int);

	int sum = sumDiagonal(arr, arrSize);

	printf("%d\n", sum);
}

//wrong

