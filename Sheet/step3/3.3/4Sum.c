
/*	
 	4 Sum | Find Quads that add up to a target value

	Problem Statement: Given an array of N integers, your task is to find unique quads that add up to give a target value. In short, you need to return an array of all the unique quadruplets [arr[a], arr[b], arr[c], arr[d]] such that their sum is equal to a given target.

	Note:

	    0 <= a, b, c, d < n
	    a, b, c, and d are distinct.
	    arr[a] + arr[b] + arr[c] + arr[d] == target

	Input Format: arr[] = [1,0,-1,0,-2,2], target = 0

	Result: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

	Explanation: We have to find unique quadruplets from 
	the array such that the sum of those elements is 
	equal to the target sum given that is 0. 

	The result obtained is such that the sum of the 
	quadruplets yields 0.

	Input Format: arr[] = [4,3,3,4,4,2,1,2,1,1], target = 9

	Result: [[1,1,3,4],[1,2,2,4],[1,2,3,3]]


*/

#include<stdio.h>

int fourSum(int *arr, int size, int target){
	
	int count = 0;

	for(int a = 0; a < size; a++){
		
		for(int b = a+1; b < size; b++){
			
			for(int c = b+1; c < size; c++){

				for(int d = c + 1; d < size; d++){ 
				
					if(arr[a] + arr[b] + arr[c] + arr[d] == 0){
					
						count++;
					}
				}
			}
		}
	}

	return count;
}

void main(){
	
	int arr[] = {1,0,-1,0,-2,2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int target = 0;

	int ret = fourSum(arr, size, target);

	printf("%d\n", ret);
}
