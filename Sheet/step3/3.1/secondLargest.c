
/*
Find Second Smallest and Second Largest Element in an array

Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
	Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.

*/

//	Solution 1: (Brute Force) [this approach only works if there are no duplicates]


#include<stdio.h>

/*
void secondLargest(int *arr, int size){
	
	if(size == 0 || size == 1){
		
		return -1;
	}

	mergeSort(arr, 0,size-1);

	int small = arr[1];
	int large = arr[n-2];

	printf("Second Smallest is : %d\n", small);

	printf("Second Largest is : %d\n", large);
}

*/

// Solution 2(Better Solution)

/*
Approach:

    Find the smallest and largest element in the array in a single traversal
    After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
    Similarly, we would find the largest element which is just smaller than the largest element we just found
    Indeed, this is our second smallest and second largest element.

void secondlargest(int *arr, int size){
	
	int max, min = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] > max){
			
			max = arr[i];
		}else{
			
			min = arr[i];
		}
	}
}
*/

//	Solution 3(Best Solution)

void secondLargest(int *arr, int size){
	
	int second = 0, largest = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] > largest){
			
			second = largest;
			largest = arr[i]; 
		}
	}

	printf("%d\n", second);
}

void main(){
	
	int arr[] = {5,2,6,7,1,9};

	int size = sizeof(arr)/ sizeof(arr[0]);

	secondLargest(arr, size);
}
