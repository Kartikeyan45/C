
/*	
	Sort an array of 0s, 1s and 2s

Problem Statement: Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]

Input: nums = [0]
Input: nums = [0]

*/

/*	
 	Solution 1: Sorting ( even if it is not the expected solution here but it can be considered as one of the approaches). Since the array contains only 3 integers, 0, 1, and 2. Simply sorting the array would arrange the elements in increasing order. 

*/

/*
#include<stdio.h>

void merge(int nums[], int start, int mid, int end){

    int ele1 = mid - start + 1, ele2 = end - mid;

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

void mergeSort(int *arr, int start, int end){
	
	if(start < end){
		
		int mid = (start+end) /2 ;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1,end);

		merge(arr, start, mid, end);
	}
}

void main(){
	
	int arr[] = {1,2,0,1,2,0,2,1,0};

	int size = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, size-1);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}

	Time Comple : O(N*logN)
*/


/*	
 	Solution 2: Keeping count of values

Intuition: Since in this case there are only 3 distinct values in the array so it’s easy to maintain the count of all, Like the count of 0, 1, and 2. This can be followed by overwriting the array based on the frequency(count) of the values.

Approach: 

    Take 3 variables to maintain the count of 0, 1 and 2.
    Travel the array once and increment the corresponding counting variables

( let’s consider count_0 = a, count_1 = b, count_2 = c )

    In 2nd traversal of array, we will now over write the first ‘a’ indices / positions in array with ’0’, the next ‘b’ with ‘1’ and the remaining ‘c’ with ‘2’.

*/

/*
#include<stdio.h>

void sortArray(int *arr, int size){
	
	int cnt0 = 0, cnt1 = 0, cnt2 = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] == 0){
	
			cnt0++;
		}else if(arr[i] == 1){
			
			cnt1++;
		}else{
			cnt2++;
		}
	}

	//Replace the place in the original array
	
	for(int i = 0; i < cnt0; i++){
		
		arr[i] = 0;
	}

	for(int i = cnt0; i < cnt0+cnt1; i++){
		
		arr[i] = 1;
	}

	for(int i = cnt0+cnt1; i < size; i++){
		
		arr[i] = 2;
	}
	
}

void main(){
	
	int arr[] = {1,2,0,0,2,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	sortArray(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
*/


/*
 	Optimal Approach (Dutch National flag algorithm): 

This problem is a variation of the popular Dutch National flag algorithm. 

Approach:

Note: Here in this tutorial we will work based on the value of the mid pointer.

The steps will be the following:

    First, we will run a loop that will continue until mid <= high.

    There can be three different values of mid pointer i.e. arr[mid]

        If arr[mid] == 0, we will swap arr[low] and arr[mid] and will increment both low and mid. Now the subarray from index 0 to (low-1) only contains 0.

        If arr[mid] == 1, we will just increment the mid pointer and then the index (mid-1) will point to 1 as it should according to the rules.

        If arr[mid] == 2, we will swap arr[mid] and arr[high] and will decrement high. Now the subarray from index high+1 to (n-1) only contains 2.

        In this step, we will do nothing to the mid-pointer as even after swapping, the subarray from mid to high(after decrementing high) might be unsorted. So, we will check the value of mid again in the next iteration.

    Finally, our array should be sorted.
*/

#include<stdio.h>

/*
void swap(int x, int y){
	
	int temp = x;
	x = y;
	y = temp;
}
*/

void sortArray(int *arr, int size){
	
	int low = 0, mid = 0, high = size-1;

	while(mid <= high){
		
		if(arr[mid] == 0){
			
//			swap(arr[low], arr[mid]);
			int temp = arr[low];
			arr[low] = arr[mid];
			arr[mid] = temp;

			low++;
			mid++;

		}else if(arr[mid] == 1){
			
			mid++;
		}else{
			
//			swap(arr[mid], arr[high]);
			int temp = arr[mid];
			arr[mid] = arr[high];
			arr[high] = temp;

			high--;
		}
	}
}

void main(){
	
	int arr[] = {1,2,0,0,2,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	sortArray(arr, size);

	for(int i = 0; i < size; i++){

		printf("%d\n", arr[i]);

	}
}
