
/*	Prog : Reverse in a Range
 *
 *	Given an array A of N integers
 *	Also given are two integers B and C.
 *	Reverse the array A in the given range [B,C].
 *	Return the array A after reversing in the given range
 *
 *	Input : arr = [1,2,3,4], B = 2, C = 3		Input : arr = [2,5,6], B = 0, C = 2
 *	Ouput : [1,2,4,3]				Output : [6,5,2]
 *	Expla : We reverse the subarray[3,4]		Expla : We reverse the entire array [2,5,6]
*/

#include<stdio.h>

int reverse(int arr[], int size, int start, int end){

	while(start < end){
		
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}

void main(){
	
	int arr[] = {1,2,3,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	int start = 2, end = 3;

	reverse(arr, size ,start, end);

	printf("After Reverse\n");

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
