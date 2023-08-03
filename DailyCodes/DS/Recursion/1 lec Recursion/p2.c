//	Program 2

#include<stdio.h>

int minMaxDiff(int *arr, int size){
	
	int max, min = arr[0];

	for(int i = 1; i < size; i++){
	
		if(arr[i] % 2 == 0){
		
			if(arr[i] > max){
			
				max = arr[i];
			}
		}else{
		
			if(arr[i] < min){
			
				min = arr[i];
			}
		}
	}

	int diff = max - min;
	return diff;
}

void main(){

	int size;
	printf("Enter Array Size\n");
	scanf("%d", &size);

	int arr[size];

	printf("Array Elements\n");
	for(int i = 0; i < size; i++){
	
		scanf("%d", &arr[i]);
	}
	
 	printf("Difference is : %d\n", minMaxDiff(arr, size));
}
