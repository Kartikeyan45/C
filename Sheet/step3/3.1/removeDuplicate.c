
/*

Remove Duplicates in-place from Sorted Array

Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

Example 1:

Input: arr[1,1,2,2,2,3,3]

Output: arr[1,2,3,_,_,_,_]

Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

Example 2:

Input: arr[1,1,1,2,2,3,3,3,3,4,4]

Output: arr[1,2,3,4,_,_,_,_,_,_,_]

Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

*/

#include<stdio.h>

int removeDuplicates(int *arr, int size){
	
	int i = 0;

	for(int j = 1; j < size; j++){
		
		if(arr[i] != arr[j]){
			
			i++;
			arr[i] = arr[j];
		}
	}

	return i+1;
}

void main(){
	
	int arr[] = {1,1,2,2,2,3,3};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret  = removeDuplicates(arr, size);

	printf("%d\n", ret);
}
