
//	Program 2 : Check if an Array is sorted

#include<stdio.h>
#include<stdbool.h>

bool sorted(int arr[], int size){
	
	int max = arr[0];

	for(int i = 0; i < size; i++){
		
		if(arr[i] > arr[i+1]){
			
			return false;
		}
	}

	return true;
}

void main(){
	
	int arr[] = {43,23,34,32,134};

	int size = sizeof(arr) / sizeof(arr[0]);

	bool ret = sorted(arr, size);

	if(ret == true){
		
		printf("Sorted\n");
	}else{
		
		printf("Not Sorted\n");
	}
}
