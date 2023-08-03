
//	Program 4 : Linear Search

#include<stdio.h>

int search(int arr[], int size, int k){
	

	for(int i = 0; i < size; i++){
		
		if(arr[i] == k){
			
			return i;
		}
	}

	return -1;
}

void main(){
	
	int arr[] = {0,1,0,3,12};

	int size = sizeof(arr) / sizeof(arr[0]);
	
	int k = 3;

	int ret = search(arr, size, k);

	printf("%d\n", ret);
	
}
