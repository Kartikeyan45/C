
/*	Maximum SubArray : Kadane's Algorithm
 *
 *	T.C = O(N) and S.C = O(N)
 *	
 *	Given an integer array of size N.
 *	Find the contiguous subarray (containing atleast one number) which has the largest sum and return it's sum.
 *
 *	Input : nums = [-2,1,-3,4,-1,2,1,-5,4]
 *
 *	Ouput : 6
 *
 *	Expla : [4,-1,2,1] has the largest sum = 6
*/

#include<stdio.h>

void subArray(int arr[], int size){
	
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

	printf("%d\n", max);
}

void main(){
	
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	subArray(arr, size);
}
