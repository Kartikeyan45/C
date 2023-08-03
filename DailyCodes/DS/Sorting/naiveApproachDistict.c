
/*	Prog : Naive Approach for Distinct Elements
*/

#include<stdio.h>

int partition(int arr[], int start, int end){
	
	int temp1[end - start + 1];

	int pivot = arr[end];

	int itr = 0;

	for(int i = start; i < end; i++){
		
		if(arr[i] <= pivot){
			
			temp1[itr] = arr[i];
			itr++;
		}
	}

	int pos = itr + start;

	temp1[itr] = pivot;
	itr++;

	for(int j = start; j < end; j++){
		
		if(arr[j] >= pivot){
			
			temp1[itr] = arr[j];
			itr++;
		}
	}

	// Copy Elements
	for(int k = start; k <= end; k++){
		
		arr[k] = temp1[k - start];
	}

	return pos;
}

void naiveSort(int arr[], int start, int end){
	
	if(start < end){

		int pivot = partition(arr, start, end);

		naiveSort(arr, start, pivot-1);
		naiveSort(arr, pivot+1, end);
	}
}

void main(){
	
	int arr[] = {3,3,1,1,3,2,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	naiveSort(arr, 0, size - 1);

	printf("After Sorting\n");

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
