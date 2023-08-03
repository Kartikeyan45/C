
/*	Program 2 : Bubble Sort
*/

#include<stdio.h>

void bubble(int arr[], int size){
	
	for(int i = 0; i < size ; i++){

		for(int j = 0; j < size - i - 1; j++){
			
			if(arr[j] > arr[j+1]){

				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void main(){
	
	int arr[] = {4,7,39,3,21,4};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	bubble(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
