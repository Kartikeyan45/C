/*
	Leaders in an Array

Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.

Example 1:
Input:
 arr = [4, 7, 1, 0]
Output:
 7 1 0
Explanation:
 Rightmost element is always a leader. 7 and 1 are greater than the elements in their right side.

Example 2:
Input:
 arr = [10, 22, 12, 3, 0, 6]
Output:
 22 12 6
Explanation:
 6 is a leader. In addition to that, 12 is greater than all the elements in its right side (3, 0, 6), also 22 is greater than 12, 3, 0, 6.

*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//	Brute

/*
int *printLeader(int *arr, int size, int *new){

	int k = 0;
	
	for(int i = 0; i < size; i++){
		
		bool leader = true;

		for(int j = i + 1; j < size; j++){
			
			if(arr[j] > arr[i]){
				
				leader = false;
				break;
			}
		}

		if(leader){
			
			new[k++] = arr[i];
		}
	}

	return new;
}
*/

//	Optimal

int *printLeader(int *arr, int size, int *new){

	int k = 0;

	 // Last element of an array is always a leader,
	 // push into ans array.
	int max = arr[size-1];
	new[k++] = arr[size-1];

	
	  // Start checking from the end whether a number is greater
	  // than max no. from right, hence leader.
	for(int i = size-2; i >= 0; i--){
		
		if(arr[i] > max){
			
			new[k++] = arr[i];
			max = arr[i];
		}
	}

	return new;
}

void main(){
	
	int arr[] = {10,22,12,3,0,6};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *new = (int*)calloc(sizeof(int), size);

	int *ret = printLeader(arr, size, new);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", new[i]);
	}
}
