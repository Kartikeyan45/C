
//	Program 1 : Largest Element in an Array

#include<stdio.h>

void largest(int arr[], int size){
	
	int max = arr[0];

	for(int i = 0; i < size; i++){
		
		if(arr[i] > max){
			
			max = arr[i];
		}
	}

	printf("%d\n", max);
}

void main(){
	
	int arr[] = {43,23,34,32,134};

	int size = sizeof(arr) / sizeof(arr[0]);

	largest(arr, size);
}
