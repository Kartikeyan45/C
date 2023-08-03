
/*	Print all SubArrays
*/

#include<stdio.h>

void printArray(int arr[], int size){
	
	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			
			for(int k = i; k <= j; k++){
				
				printf("%d ", arr[k]);
			}

			printf("\n");
		}
	}
}

void main(){
	
	int arr[] = {3,1,3,5,7,8,9};

	int size = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, size);
}
