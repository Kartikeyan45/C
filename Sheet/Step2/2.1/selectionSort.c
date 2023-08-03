
/*	Program 1 : Selection Sort
*/

#include<stdio.h>

void selection(int arr[], int size){
	
	for(int i = 0; i < size - 1; i++){
		
		int minIndex = i;

		for(int j = i+1; j < size; j++){
			
			if(arr[minIndex] > arr[j]){

				minIndex = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

void main(){
	
	int arr[] = {4,7,39,3,21,4};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	selection(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
