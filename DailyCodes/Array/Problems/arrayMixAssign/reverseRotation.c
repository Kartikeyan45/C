
/*	Prog : Array Rotation
 *
 *	Given an intger array A of size N and an integer B, you have to return the same after rotating it B times towards the right.
 *	Return the array A after rotating it B times to the right.
 *
 *	Input : A = [1,2,3,4], B = 2			Input : arr = [2,5,6], B = 1
 *	Ouput : [3,4,1,2] 				Output : [6,2,5]
*/

#include<stdio.h>

int rotate(int arr[], int size, int k){
	
	for(int i = 0; i < k; i++){
		
		int start = arr[0];

		for(int j = 1; j < size; j++){
			
			arr[j-1] = arr[j];
		}

		arr[size-1] = start;
	}

}

void main(){
	
	int arr[] = {1,2,3,4};

	int k = 2;

	int size = sizeof(arr) / sizeof(arr[0]);

	rotate(arr, size, k);

	printf("After Reverse\n");

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
