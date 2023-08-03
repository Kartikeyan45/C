
/*	
 	Find the Majority Element that occurs more than N/2 times

Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

	Input Format: N = 3, nums[] = {3,2,3}

Result: 3

Explanation: When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 

Input Format:  N = 7, nums[] = {2,2,1,1,1,2,2}

Result: 2

Explanation: After counting the number of times each element appears and comparing it with half of array size, we get 2 as result.

Input Format:  N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}

Result: 4

*/

/*
Naive Approach:

Approach:

The steps are as follows:

    We will run a loop that will select the elements of the array one by one.
    Now, for each element, we will run another loop and count its occurrence in the given array.
    If any element occurs more than the floor of (N/2), we will simply return it.
*/

#include<stdio.h>

/*
int majority(int *arr, int size){
	
	for(int i = 0; i < size; i++){
		
		int count = 0;

		for(int j = 0; j < size; j++){
			
			if(arr[j] == arr[i]){
				
				count++;
			}
		}

		if(count > (size/2)){
			
			return arr[i];
		}
	}

	return -1;
}

void main(){
	
	int arr[] = {2,2,1,1,1,2,2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = majority(arr, size);

	printf("%d\n", ret);
}

	Time Complexity: O(N2)

*/

/*	
 	Optimal Approach:
	Moore’s Voting Algorithm:

	Approach:

	    Initialize 2 variables:
	    Count –  for tracking the count of element
	    Element – for which element we are counting
	    Traverse through the given array.
	        If Count is 0 then store the current element of the array as Element.
	        If the current element and Element are the same increase the Count by 1.
	        If they are different decrease the Count by 1.
	    The integer present in Element should be the result we are expecting

*/

#include<stdio.h>

int majority(int *arr, int size){
	
	int count = 0;
	int ele;

	for(int i = 0; i < size; i++){
		
		if(count == 0){		// if count = 0, we will assign ele to arr[i]
		
			count = 1;
			ele = arr[i];

		}else if(arr[i] == ele){ // if equal count++
			
			count++;
		}else{
			count--;	// if not equal count--
		}
	}

	int count1 = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] == ele){
			
			count1++;
		}
	}

	if(count1 > (size/2)){
		
		return ele;
	}

	return -1;
}

void main(){
	
	int arr[] = {2,2,1,1,1,2,2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = majority(arr, size);

	printf("%d\n", ret);
}

