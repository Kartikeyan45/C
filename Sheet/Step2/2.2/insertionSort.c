
/*

Recursive Insertion Sort Algorithm

Problem Statement: Given an array of N integers, write a program to implement the Recursive Insertion Sort algorithm.

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52

Example 2:
Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5

*/

#include<stdio.h>

void insertionSort(int *arr, int i,int size){
	
	// Base Case: i == n.
	if (i == n) return;

	int j = i;
	while (j > 0 && arr[j - 1] > arr[j]) {
		int temp = arr[j - 1];
		arr[j - 1] = arr[j];
        	arr[j] = temp;
		j--;
	}

	insertionSort(arr, i + 1, size);
}

void main(){

	int arr[] = {0,4,3,2,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, 0, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
