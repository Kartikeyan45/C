
/*	Prog : Counting SubArrays
 *
 *	- Given an array A of N non-negative numbers and a non-negative number B.
 *	  you need to find the number of subarrays in A with sum less than B.
 *	- Return a single integer denoting the number of subarrays in A having sum less than B
 *
 *	Input : A = [2,5,3], B = 10	Input : A = [1,11,2,3,15], B = 10
 *	Ouput : 4			Output : 4
*/

#include<stdio.h>

int sumArray(int arr[], int size, int B){
	
	int count = 0;

	for(int i = 0; i < size; i++){
		
		int sum = 0;

		for(int j = i; j < size; j++){
			
			sum = sum + arr[j];

			if(sum < B){
				
				count++;
			}
		}
	}

	return count;
}

void main(){
	
	int arr[] = {2,5,6};

	int size = sizeof(arr) / sizeof(arr[0]);

	int B = 10;

	int ret = sumArray(arr, size, B);

	printf("%d\n", ret);
}
