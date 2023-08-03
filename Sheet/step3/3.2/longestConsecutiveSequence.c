
/*	Longest Consecutive Sequence
 *
 *	Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the l	       ongest sequence which contains the consecutive elements.
 *
 *	Example 1:

	Input: [100, 200, 1, 3, 2, 4]

	Output: 4

	Explanation: The longest consecutive subsequence is 1, 2, 3, and 4.

	Input: [3, 8, 5, 7, 6]

	Output: 4

	Explanation: The longest consecutive subsequence is 5, 6, 7, and 8.
*/

//	1 - Brute Force

/*
#include<stdio.h>
#include<stdbool.h>

bool linearSearch(int *arr, int size, int x){
	

	for(int i = 0; i < size; i++){
		
		if(arr[i] == x){
			
			return true;
		}
	}

	return false;
}

int longestConse(int *arr, int size){

	int longest = 1;

	int x, count;

	for(int i = 0; i < size; i++){
		
		x = arr[i];

		count = 1;

		while(linearSearch(arr,size, x+1) == true){
			
			x = x + 1;

			count++;
		}
	}

	return count;
}

void main(){
	
	int arr[] = {102,4,100,1,101,3,2,1,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = longestConse(arr, size);

	printf("%d\n", ret);
}

*/


//	Appraoch 2 - Better

//	Approach: We can simply sort the array and run a for loop to find the longest consecutive sequence


#include<stdio.h>

void merge(int arr[], int start, int mid, int end){

	int ele1 = mid - start + 1;
        int ele2 = end - mid;

	int arr1[ele1], arr2[ele2];

	for(int i = 0; i < ele1; i++){

		arr1[i] = arr[start + i];
	}

	for(int j = 0; j < ele2; j++){

		arr2[j] = arr[mid + 1 + j];
	}

	int itr1 = 0, itr2 = 0, itr3 = start;

	while(itr1 < ele1 && itr2 < ele2){

		if(arr1[itr1] < arr2[itr2]){

			arr[itr3] = arr1[itr1];
			itr1++;
		}else{

			arr[itr3] = arr2[itr2];
			itr2++;
		}

		itr3++;
	}

	while(itr1 < ele1){

		arr[itr3] = arr1[itr1];
		itr1++;
		itr3++;
	}

	while(itr2 < ele2){

		arr[itr3] = arr2[itr2];
		itr2++;
		itr3++;
	}

}

void mergeSort(int arr[], int start, int end){

	if(start < end){

		int mid = (start + end) / 2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);

		merge(arr, start, mid, end);
	}
}

int max(int ans, int curr){

	if(ans > curr){
		
		return ans;
	}else{
		
		return curr;
	}
}

int longestConse(int *arr, int size){
	
	if(size == 0){
		
		return 0;
	}

	int start = 0, end = size - 1;

	mergeSort(arr, start, end);

	int ans = 1;
	int prev = arr[0];
	int curr = 1;

	for(int i = 1; i < size; i++){
		
		if(arr[i] == prev+1){
			
			curr++;
		}
		else if(arr[i] != prev){
			
			curr = 1;
		}

		prev = arr[i];
		ans = max(ans, curr);

	}

	return ans;
}

void main(){
	
	int arr[] = {102,4,100,1,101,3,2,1,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = longestConse(arr, size);

	printf("%d\n", ret);
}

/*Time Complexity: We are first sorting the array which will take O(N * log(N)) time and then we are running a for loop which will take O(N) time. Hence, the overall time complexity will be O(N * log(N)).
Space Complexity: The space complexity for the above approach is O(1) because we are not using any auxiliary space
*/
