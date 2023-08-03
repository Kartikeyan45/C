
/*	
 	2149. Rearrange Array Elements by Sign

	You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

    Every consecutive pair of integers have opposite signs.
    For all integers with the same sign, the order in which they were present in nums is preserved.
    The rearranged array begins with a positive integer.

Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.

Input: nums = [-1,1]
Output: [1,-1]
Explanation:
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].


    2 <= nums.length <= 2 * 105
    nums.length is even
    1 <= |nums[i]| <= 105
    nums consists of equal number of positive and negative integers.
*/


//	Brute Force

/*
#include<stdio.h>
#include<stdlib.h>

int* alternate(int *arr, int size){

	int *pos = (int*)calloc(sizeof(int), size/2);

	int *neg = (int*)calloc(sizeof(int), size/2);

	for(int i = 0; i < size; i++){
		
		if(arr[i] > 0){
			
			pos[i] = arr[i];
		}else{
			neg[i] = arr[i];
		}
	}
	
	printf("POs");
	for(int i = 0; i < size/2; i++){
		
		printf("%d\n", pos[i]);
	}


	printf("Neg");
	for(int i = 0; i < size/2; i++){
		
		printf("%d\n", neg[i]);
	}

	printf("Merge");
	for(int i = 0; i < size/2; i++){
		
		arr[2*i] = pos[i];
		arr[2*i+1] = neg[i];
	}
	
	return arr;
}

void main(){
	
	int arr[] = {3,1,-2,-5,2,-4};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *ret = alternate(arr, size);
	
	printf("After Alternate");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}

*/

#include<stdio.h>
#include<stdlib.h>

int *alternate(int *arr, int size, int *ans){
	
	int posIndex = 0, negIndex = 1;

	for(int i = 0; i < size; i++){
		
		if(arr[i] < 0){
			
			ans[negIndex] = arr[i];
			negIndex += 2;
		}
		else{
			
			ans[posIndex] = arr[i];
			posIndex += 2;
		}
	}

	return ans;
}

void main(){
	
	int arr[] = {1,2,-4,-5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *ans = (int*)calloc(sizeof(int), size);

	int *ret = alternate(arr, size, ans);
	
	printf("After Alternate\n");
	for(int i = 0; i < size; i++){
	
		printf("%d\n", ans[i]);
	}
}
		
