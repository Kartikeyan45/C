
//	Program 1 : Peak In Mountain Array

#include<stdio.h>

int peakIndex(int arr[], int size){
	
	int start = 0, end = size - 1, mid;

	while(start < end){
		
		mid = start + (end - start) / 2;

		if(arr[mid] < arr[mid + 1]){
			
			start = mid + 1;
		}else{
			
			end = mid;
		}
	}

	return start;
}

void main(){
	
	int arr[] = {0,2,1,0};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = peakIndex(arr, size);
	printf("Index is %d\n", ret);
}
