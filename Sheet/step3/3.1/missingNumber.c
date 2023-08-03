
/*

Find the missing number in an array

Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

Example 1:
Input Format: N = 5, array[] = {1,2,4,5}
Result: 3
Explanation: In the given array, number 3 is missing. So, 3 is the answer.

Example 2:
Input Format: N = 3, array[] = {1,3}
Result: 2
Explanation: In the given array, number 2 is missing. So, 2 is the answer.

*/

//	Naive Approach(Brute-force approach):

/*
#include<stdio.h>

int missingNumber(int *arr, int size, int n){
	
	for(int i = 1; i <= n; i++){
		
		int flag = 0;

		for(int j = 0; j < n-1; j++){
			
			if(arr[j] == i){
				
				flag = 1;
				break;
			}
		}

		if(flag == 0){
			
			return i;
		}
	}
}

void main(){
	
	int arr[] = {1,2,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int n = 5;

	int ans = missingNumber(arr, size, n);

	printf("%d\n", ans);
}

*/

//	Better Approach

/*

#include<stdio.h>

void merge(int nums[],int start, int mid, int end){

    int ele1 = mid - start + 1;
    int ele2 = end - mid;

    int nums1[ele1], nums2[ele2];

    for(int i = 0; i < ele1; i++){
        nums1[i] = nums[start + i];
    }

    for(int j = 0; j < ele2; j++){
        nums2[j] = nums[mid + 1 + j];
    }

    int itr1 = 0, itr2 = 0, itr3 = start;

    while(itr1 < ele1 && itr2 < ele2){

        if(nums1[itr1] < nums2[itr2]){
            nums[itr3] = nums1[itr1];
            itr1++;
        }else{
            nums[itr3] = nums2[itr2];
            itr2++;
        }
        itr3++;
    }

    while(itr1 < ele1){
        nums[itr3] = nums1[itr1];
        itr1++;
        itr3++;
    }

    while(itr2 < ele2){
        nums[itr3] = nums2[itr2];
        itr2++;
        itr3++;
    }
}

void mergeSort(int nums[],int start, int end){
    if(start < end){
        int mid = (start + end) / 2;

        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);

        merge(nums,start,mid,end);
    }
}

int missingNumber(int* nums, int numsSize){

    mergeSort(nums,0,numsSize-1);

    for (int i = 0; i < numsSize; i++) {
        if (i != nums[i]) {
            return i;
        }
    }
    return numsSize;
}
*/

//	Better - Using Hashing

#include<stdio.h>
#include<stdlib.h>

int missingNumber(int *arr, int size){
	
//	int hash[size + 1] = 0;

	int *hash = (int*)calloc(sizeof(int), size + 1);
/*
	for(int i = 0; i < size+1;i++){
		
		printf("%d\n", hash[i]);
	}
*/
	// storing the frequencies
	for(int i = 0; i < size; i++){
		
		hash[arr[i]]++;
	}

	// checking the frequencies for numbers 1 to N
	for(int i = 1; i <= size; i++){
		
		if(hash[i] == 0){
			
			return i;
		}
	}

	return -1;
}

void main(){
	
	int arr[] = {3,0,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ans = missingNumber(arr, size);

	printf("%d\n", ans);
}


/*

Optimal Approach:

There are two optimal approaches for this particular question. They are the following:
1. Summation approach
2. XOR(^) approach

*/

#include<stdio.h>

/*
int missingNumber(int *arr, int size, int n){
	
	int sum = n * (n + 1) / 2;

	int sum2 = 0;
	for(int i = 0; i < size; i++){
		
		sum2 += arr[i];
	}

	return sum - sum2;
}
*/

/*
int missingNumber(int *arr, int size, int n){
	
	int xor1 = 0, xor2 = 0;

	for(int i = 0; i < size-1; i++){
		
		xor2 = xor2 ^ arr[i];	//XOR of array elements

		xor1 = xor1 ^ (i+1);	//XOR up to [1...N-1]
	}

	xor1 = xor1 ^ n;	//XOR up to [1...N]

	return (xor1 ^ xor2);	//the missing number
}

void main(){
	
	int arr[] = {1,2,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int n = 5;

	int ret = missingNumber(arr, size, 5);

	printf("%d\n", ret);
}
*/
