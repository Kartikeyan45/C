/*

Recursive Bubble Sort Algorithm

Problem Statement: Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm.

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
	
void bubbleSort(int *arr, int size){

	    // Base Case: range == 1.
	    if (size == 1) return;

	    for (int j = 0; j <= size - 2; j++) {
        	if (arr[j] > arr[j + 1]) {
	            int temp = arr[j + 1];
        	    arr[j + 1] = arr[j];
	            arr[j] = temp;
	        }
	    }

	    //Range reduced after recursion:
	    bubbleSort(arr, size - 1);
}

void main(){
	
	int arr[] = {5,3,2,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
