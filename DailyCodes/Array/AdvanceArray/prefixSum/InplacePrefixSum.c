
/*	Prog : In Place PRefix Sum
 *
 *	Given an array A of N integers.
 *	Construct the prefix sum of array in the given array itself.
 *	Return an array of integers denoting the prefix sum of the given array
 *
 *	Input : A = [1,2,3,4,5]
 *	Ouput : [1,3,6,10,15]
 *	Expla : The prefix sum array of [1,2,3,4,5] is [1,3,6,10,15]
 *
 *	Input : A = [4,3,2]
 *	Ouput : [4,7,9]
*/

#include<stdio.h>

int *inPlaceSum(int arr[], int size){
	
	for(int i = 1; i < size; i++){
		
		arr[i] = arr[i-1] + arr[i];
	}

	return arr;
}

void main(){
	
	int arr[] = {1,2,3,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *ptr = inPlaceSum(arr, size);

	for(int i = 0 ; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
