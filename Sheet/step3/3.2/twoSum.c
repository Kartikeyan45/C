
/*

Two Sum : Check if a pair with given sum exists in Array

Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

Example 1:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

Example 2:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
Result: NO (for 1st variant)
	[-1, -1] (for 2nd variant)
Explanation: There exist no such two numbers whose sum is equal to the target.

*/

#include<stdio.h>
#include<stdbool.h>

bool twoSum(int *arr, int size){
	
	for(int i = 0; i < size; i++){
		
		for(int j = i + 1; j < size; j++){
			
			return true;
		}
	}

	return false;
}

void main(){
	
	int arr[] = {2,1,9,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	bool ret = twoSum(arr, size);

	if(ret){
		
		printf("Two Sum exists\n");
	}else{
		printf("Not Exists\n");
	}
}
