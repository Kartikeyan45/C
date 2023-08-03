/*	Program 8 : WAP to print Diagonal Elements Sum  in an 2D-Array
 *		    using only 2 for loop
*/

#include<stdio.h>

int SumArr(int (*ptr)[], int arrSize){

	int sum = 0;

	for(int i = 0; i < arrSize; i++){

		for(int j = 0; j < arrSize; j++){
	
			if(i == j){
			
				sum = sum + (*(*ptr + i) + j);
			}
		}
	}
	return sum;
}

void main(){

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int arrSize = sizeof(arr) / sizeof(int);

	int sum = SumArr(arr, arrSize);

	printf("%d\n", sum);
}


//wrong 
