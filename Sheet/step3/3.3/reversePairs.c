
/*
 	493. Reverse Pairs

	Given an integer array nums, return the number of reverse pairs in the array.

	A reverse pair is a pair (i, j) where:

	    0 <= i < j < nums.length and
	    nums[i] > 2 * nums[j].

	Input: nums = [1,3,2,3,1]
	Output: 2
	Explanation: The reverse pairs are:
	(1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
	(3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1

	Input: nums = [2,4,3,5,1]
	Output: 3
	Explanation: The reverse pairs are:
	(1, 4) --> nums[1] = 4, nums[4] = 1, 4 > 2 * 1
	(2, 4) --> nums[2] = 3, nums[4] = 1, 3 > 2 * 1
	(3, 4) --> nums[3] = 5, nums[4] = 1, 5 > 2 * 1

	Constraints:

	    1 <= nums.length <= 5 * 104
	    -231 <= nums[i] <= 231 - 1
*/

#include<stdio.h>
#include<vector>

int pairs1(int arr[], int size){
	
	int count = 0;

	for(int i = 0; i < size; i++){
		
		for(int j = i + 1; j < size; j++){
			
			if(arr[i] > arr[j] * 2){
				
				count++;
			}
		}
	}				// T.C = O(N*N)
					// S.C = O(N)
	return count;	
}

int merge(int nums[], int low, int mid, int high) {

	int total = 0;

  	int j = mid + 1;

	for (int i = low; i <= mid; i++) {
    		while (j <= high && nums[i] > 2 * nums[j]) {
      		j++;
    	}

    	total += (j - (mid + 1));
  	}

  	vector <int> t;

  	int left = low, right = mid + 1;

  	while (left <= mid && right <= high) {

    		if (nums[left] <= nums[right]) {
      			t.push_back(nums[left++]);
    		} else {
      			t.push_back(nums[right++]);
    		}
  	}

  	while (left <= mid) {
    		t.push_back(nums[left++]);
  	}

  	while (right <= high) {
    		t.push_back(nums[right++]);
  	}

  	for (int i = low; i <= high; i++) {
    		nums[i] = t[i - low];
  	}

  	return total;
}

int mergeSort(int nums[], int low, int high) {

  	if (low >= high) return 0;

  	int mid = (low + high) / 2;

  	int inv = mergeSort(nums, low, mid);

  	inv += mergeSort(nums, mid + 1, high);
  	inv += merge(nums, low, mid, high);

  	return inv;
}

int pairs2(int arr[], int size){

	return mergeSort(aarr,0, size-1);
}

void main(){
	
	int arr1[] = {1,3,2,3,1};

	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	int ret1 = pairs1(arr1, size1);

	printf("%d\n", ret1);

	int arr2[] = {1,3,2,3,1};
 
        int size2 = sizeof(arr2) / sizeof(arr2[0]);
 
        int ret2 = pairs2(arr2, size2);

        printf("%d\n", ret2);

}
