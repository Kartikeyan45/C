
/*	Program 3 : Insertion Sort
*/

#include<stdio.h>

void insertion(int arr[], int size){
	
	for(int i = 1; i < size ; i++){
		
		int val = arr[i];
		int j = i - 1;

		for(   ; j >= 0	&& val < arr[j]; j--){
			
			arr[j+1] = arr[j];
		}

		arr[j+1] = val;
	}
}

void main(){
	
	int arr[] = {4,7,39,3,21,4};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	insertion(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
