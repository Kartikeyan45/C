
/*	
 	3 Sum : Find triplets that add up to a zero

	Problem Statement: Given an array of N integers, your task is to find unique triplets that add up to give a sum of zero. In short, you need to return an array of all the unique triplets [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.
	Example 1:

	Input: nums = [-1,0,1,2,-1,-4]

	Output: [[-1,-1,2],[-1,0,1]]

	Explanation: Out of all possible unique triplets possible, [-1,-1,2] and [-1,0,1] satisfy the condition of summing up to zero with i!=j!=k

	Example 2:

	Input: nums=[-1,0,1,0]

	Output: Output: [[-1,0,1],[-1,1,0]]

	Explanation: Out of all possible unique triplets possible, [-1,0,1] and [-1,1,0] satisfy the condition of summing up to zero with i!=j!=k

*/

#include<stdio.h>

int threeSum(int *arr, int size){
	
	int count = 0;

	for(int i = 0; i < size; i++){
		
		for(int j = i+1; j < size; j++){
			
			for(int k = j+1; k < size; k++){
				
				if(arr[i] + arr[j] + arr[k] == 0){
					
					count++;
				}
			}
		}
	}

	return count;
}

void main(){
	
	int arr[] = {-1,0,1,2,-1,-4};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = threeSum(arr, size);

	printf("%d\n", ret);
}
