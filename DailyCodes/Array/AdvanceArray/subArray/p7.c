
/*	Maximum SubArray : Brute Force Approach 2
 *
 *	T.C = O(N^2) and S.C = O(1)
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
	
	int max = arr[0];

	for(int i = 0; i <= size; i++){
		
		int sum = 0;

		for(int j = i; j < size; j++){

			sum = sum + arr[j];

			if(sum > max){					
				max = sum;
			}

		}
	}

	printf("%d\n", max);
}

void main(){
	
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	subArray(arr, size);
}
