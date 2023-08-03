/*	Program 10 : WAP to print Diagonal Elements Sum  in an 2D-Array
 *
 *		     Another Method
 *		    
*/

#include<stdio.h>

int sumDiagonal(int (*ptr)[], int arrSize){

	int sum = 0;

	for(int i = 0; i < arrSize; i+=2){
		
		sum = sum + *(*ptr + i);		
	}
	return sum;
}

void main(){

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int arrSize = sizeof(arr) / sizeof(int);

	int sum = sumDiagonal(arr, arrSize);

	printf("%d\n", sum);
}

