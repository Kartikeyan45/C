
/*	Print Array in range
*/

#include<stdio.h>

void printArray(int arr[], int size, int start, int end){
	
	for(int i = start; i <= end; i++){
		
		printf("%d\n", arr[i]);
	}
}

void main(){
	
	int arr[] = {3,1,3,5,7,8,9};

	int size = sizeof(arr) / sizeof(arr[0]);

	int start = 2, end = 5;

	printArray(arr, size, start, end);
}
