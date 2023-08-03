
/*
 	Majority Elements(>N/3 times) | Find the elements that appears more than N/3 times in the array

	Problem Statement: Given an array of N integers. Find the elements that appear more than N/3 times in the array. If no such element exists, return an empty vector.

	Input: N = 5, array[] = {1,2,2,3,2}

	Ouput: 2

	Explanation: Here we can see that the Count(1) = 1, Count(2) = 3 and Count(3) = 1.Therefore, the count of 2 is greater than N/3 times. Hence, 2 is the answer.

	Input:  N = 6, array[] = {11,33,33,11,33,11}

	Output: 11 33

	Explanation: Here we can see that the Count(11) = 3 and Count(33) = 3. Therefore, the count of both 11 and 33 is greater than N/3 times. Hence, 11 and 33 is the answer.

*/

//	Brute Force

/*

#include<stdio.h>
#include<stdlib.h>

int majorityEle(int arr[], int size, int *nums){
	
	int k = 0;

	for(int i = 0; i < size; i++){
		
		int count = 1;

		for(int j = 0; j < size; j++){
			
			if(arr[i] == arr[j]){
				
				count++;
			}
		}

		if(count > (size/3)){
			
			nums[k++] = arr[i];
		}
	}
}

void main(){
	
	int arr[] = {1,2,2,3,2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *nums = (int*)calloc(sizeof(int), 2);

	majorityEle(arr, size, nums);

	for(int i = 0; i < 2; i++){
		
		printf("%d\n", nums[i]);
	}
}

*/

/*
 	Output:

	The majority element is 2

	Time Complexity: O(n^2)

	Space Complexity: O(1)
*/

/*
 	Solution 3: Optimal Solution (Extended Boyer Moore’s Voting Algorithm)

	Approach + Intuition: In our code, we start by declaring a few variables:

  	  num1 and num2 will store our current most frequent and second most frequent elements.
	  c1 and c2 will store their frequency relative to other numbers.

	  We are sure that there will be a max of 2 elements that occurs > N/3 times because there cannot be if you do a simple math addition. 

	Let, ele be the element present in the array at any index. 

	if ele == num1, so we increment c1.
	if ele == num2, so we increment c2.
	if c1 is 0, so we assign num1 = ele.
	if c2 is 0, so we assign num2 = ele.
	In all the other cases we decrease both c1 and c2.

	In the last step, we will run a loop to check if num1 or nums2 are the majority elements or not by running a for loop check.

	Intuition: Since it’s guaranteed that a number can be a majority element, hence it will always be present at the last block, hence, in turn, will be on nums1 and nums2. For a more detailed explanation, please watch the video below. 

*/


#include<stdio.h>
#include<stdlib.h>

int majorityEle(int arr[], int size, int *nums){
	
	int ele1 = -1, ele2 = -1, count1 = 0, count2 = 0, k = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] == ele1){
			
			count1++;
		}
		else if(arr[i] == ele2){
			
			count2++;
		}
		else if(count1 == 0){
			
			ele1 = arr[i];
			count1 = 1;

		}else if(count2 == 0){
			
			ele2 = arr[i];
			count2 = 1;
		}else{
			count1--;
			count2--;
		} 
	}

	count1 = 0, count2 = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] == ele1){
			
			count1++;
		}else if(arr[i] == ele2){
			
			count2++;
		}
	}

	if(count1 > (size/3)){
		
		nums[k++] = ele1;
	}

	if(count2 > (size/3)){
		
		nums[k++] = ele2;
	}
}

void main(){
	
	int arr[] = {1,2,2,3,2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *nums = (int*)calloc(sizeof(int), 2);

	majorityEle(arr, size, nums);

	for(int i = 0; i < 2; i++){
		
		printf("%d\n", nums[i]);
	}
}


