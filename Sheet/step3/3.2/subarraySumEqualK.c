/*

560. Subarray Sum Equals K

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Input: nums = [1,1,1], k = 2
Output: 2

Input: nums = [1,2,3], k = 3
Output: 2

*/

#include<stdio.h>
/*
int subarray(int *arr, int size, int x){
	
	int count = 0;

	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			
			int sum = 0;

			for(int k = i; k <= j; k++){
				
				sum = sum + arr[k];

				if(sum == x){
					
					count++;
				}
			}
		}
	}

	return count;
}
*/
int subarray(int *arr, int size, int x){
	
	int count = 0;

	for(int i = 0; i < size; i++){
		
		int sum = 0;

		for(int j = i; j < size; j++){
				
			sum = sum + arr[j];

			if(sum == x){

				count++;	
			}
			
		}
	}
	return count;
}

void main(){
	
	int arr[] = {1,2,3};

	int size = sizeof(arr) / sizeof(arr[0]);

	int x = 3;

	int ret = subarray(arr, size, x);

	printf("%d\n", ret);
}
