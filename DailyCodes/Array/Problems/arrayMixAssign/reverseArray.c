
/*	Prog : Reverse the Array
 *
 *	Given an array A of N integers
 *	You are required to return another array A
 *	Return an integer array 
 *
 *	Input : A = [1,2,3,2,1]				Input : arr = [1,1,10]
 *	Ouput : [1,2,3,2,1]				Output : [10,1,1]
*/

#include<stdio.h>

int reverse(int arr[], int size){
	
	int start = 0, end = size - 1;

	while(start < end){
		
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}

void main(){
	
	int arr[] = {4,3,2,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	reverse(arr, size);

	printf("After Reverse\n");

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
