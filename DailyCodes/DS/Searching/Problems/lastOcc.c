
//	Prog : firstOCc

#include<stdio.h>

int lastOcc(int arr[], int size, int key){
	
	int start = 0, end = size - 1, mid;
	int ans = -1;

	while(start <= end){
		
		mid = start + (end - start) / 2;

		if(arr[mid] == key){
			
			ans = mid;
			start = mid + 1;
		}
		if(arr[mid] < key){
			
			start = mid + 1;
		}

		if(arr[mid] > key){
			
			end = mid - 1;
		}
	}

	return ans;
}

void main(){
	
	int arr[] = {1,2,2,2,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int key = 2;

	int ret = lastOcc(arr, size, key);
	printf("First Occ is : %d\n", ret);
		
}
