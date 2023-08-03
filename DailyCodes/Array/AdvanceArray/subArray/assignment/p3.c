
/*	Prog : Good SubArrays
 *
 *	- Given an array of integers A, a subarray of an array is said to be good if
 *	  it fulfills any one f the criteria :
 *
 * 		1] Length of the subarray is be even, and the sum of all the elements of the subarray
 * 		   must be less than B
 * 		2] Length of the subarray is be odd, and the sum of all the elements of the subarray
 * 		   must be greater than B
 *
 *	- Your task is to find the count of good subarrays in A.
 *	- Return the count off good subarrays in A
 *
 *	Input : A = [1,2,3,4,5], B = 4		Input : A = [13,16,16,15,9,16,2,7,6,17,3,9], B = 65
 *	Ouput : 6				Output : 36
*/

#include<stdio.h>

int sumArray(int arr[], int size, int B){
	
	int count = 0, count1 = 0;

	for(int i = 0; i < size; i++){
		
		int sum = 0;

		for(int j = i; j < size; j++){
			
			sum = sum + arr[j];

			count1++;
		}

		if(count1 % 2 == 0 && sum < B){
			
			count++;
		}

		if(count1 % 2 != 0 && sum > B){
			
			count++;
		}
	}

	return count;
}

void main(){
	
	int arr[] = {1,2,3,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int B = 4;

	int ret = sumArray(arr, size, B);

	printf("%d\n", ret);
}
