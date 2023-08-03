
/*	Prog : Sum of all SubArrays
 *
 *	- You are given an integer array A of length N
 *	- You have to find the sum of all subarray sums of A
 *	- Return a single integer denoting the sum of all subarray sums of the given array
 *
 *	Input : A = [1,2,3]		Input : A = [2,1,3]
 *	Ouput : 20			Output : 19
*/

#include<stdio.h>

int sumArray(int arr[], int size){
	
	int total = 0;

	for(int i = 0; i < size; i++){
		
		int sum = 0;

		for(int j = i; j < size; j++){
			
			sum = sum + arr[j];
			total = total + sum;
		}
	}

	return total;
}

void main(){
	
	int arr[] = {2,1,3};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = sumArray(arr, size);

	printf("%d\n", ret);
}
