
#include<stdio.h>

int* preSum(int arr[], int size){
	
	int prefix[size];

	prefix[0] = arr[0];

	for(int i = 1; i < size; i++){
	
		prefix[i] = prefix[i - 1] + arr[i];
	}

	return prefix;
}

void main(){
	
	int arr[] = {1,2,3,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *ret = preSum(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", prefix[i]);
	}
}
