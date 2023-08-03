/*

Kadane’s Algorithm : Maximum Subarray Sum in an Array

Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Example 1:

Input: arr = [-2,1,-3,4,-1,2,1,-5,4]

Output: 6

Explanation: [4,-1,2,1] has the largest sum = 6.

Examples 2:

Input: arr = [1]

Output: 1

Explanation: Array has only one element and which is giving positive sum of 1.

*/

#include<stdio.h>


// Brute Force

/*
int maxSubarray(int *arr, int size){
	
	int max = arr[0];

	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			
			int sum = 0;
		
			for(int k = i; k <= j; k++){
			
				sum = sum + arr[k];

				if(sum > max){
				
					max = sum;
				}
			}
		}
	}

	return max;
}
*/

//	Better Force

/*
int maxSubarray(int *arr, int size){
	
	int max = arr[0];

	for(int i = 0; i < size; i++){
		
		int sum = 0;

		for(int j = i; j < size; j++){
			
			sum = sum + arr[j];

			if(sum > max){
				
				max = sum;
			}
		}
	}

	return max;
}

*/


//	Optimal Force


int maxSubarray(int *arr, int size){
	
	int max = arr[0], sum = 0;

	for(int i = 0; i < size; i++){
		
		sum = sum + arr[i];

		if(sum < 0){
			
			sum = 0;
		}

		if(sum > max){
			
			max = sum;
		}
	}

	return max;
}


void main(){
	
	int arr[] = {3,7,1,3,5,7,9,4,3,32,5,6,7};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = maxSubarray(arr, size);

	printf("%d\n", ret);
}
