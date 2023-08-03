
/*
 	Maximum Product Subarray in an Array

	Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.
	Example 1:

	Input:
		 Nums = [1,2,3,4,5,0]
	Output:
		 120
	Explanation:
		 In the given array, we can see 1×2×3×4×5 gives maximum product value.


	Example 2:

	Input:
		 Nums = [1,2,-3,0,-4,-5]
	Output:
		 20
	Explanation:
		 In the given array, we can see (-4)×(-5) gives maximum product value.
*/

//	1 - Brute Force

#include<stdio.h>
#include<limits.h>


int max(int x, int y){
	
	if(x > y){
		
		return x;
	}

	return y;
}

/*
int productArray(int arr[], int size){
	
	int result = INT_MIN;

	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			
			int prod = 1;

			for(int k = i; k <= j; k++){
				
				prod *= arr[k];
			}

			result = max(result, prod);
		}
	}

	return result;
}
*/

/*
 	Time Complexity: O(N3)

	Reason: We are using 3 nested loops for finding all possible subarrays and their product.

	Space Complexity: O(1)

	Reason: No extra data structure was used
*/


//	2 - Optimised brute approach

/*
 
int productArray(int arr[], int size){
	
	int maxi = INT_MIN;

	for(int i = 0; i < size-1; i++){
		
		int prod = 1;

		for(int j = i+1; j < size; j++){

			prod *= arr[j];

			maxi = max(maxi, prod); 
		}

		maxi = max(maxi, prod);
	}

	return maxi;
}

*/

/*
 	Time Complexity: O(N2)

	Reason: We are using two nested loops

	Space Complexity: O(1)

	Reason: No extra data structures are used for computation
*/

//	3 - Optimised appraoch

int productArray(int arr[], int size){
	
	int pre = 1, suff = 1;

	int ans = INT_MIN;

	for(int i = 0; i < size; i++){
		
		if(pre == 0){
			
			pre = 1;
		}

		if(suff == 0){
			
			suff = 1;
		}

		pre = pre * arr[i];

		suff = suff * arr[size - i - 1];

		ans = max(ans, max(pre,suff));
	}

	return ans;
}

void main(){
	
	int arr[] = {1,2,-3,0,-4,-5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = productArray(arr, size);

	printf("%d\n", ret);
}
