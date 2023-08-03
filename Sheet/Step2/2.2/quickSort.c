
/*	Prog : Quick Sort
 *	
*/	

#include<stdio.h>

void swap(int *p1, int *p2){
	
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int partition(int arr[], int start, int end){
	
	int pivot = arr[end];

	int itr = start - 1;

	for(int i = start; i < end; i++){
		
		if(arr[i] < pivot){
			
			itr++;
			swap(&arr[i], &arr[itr]);
		}
	}

	swap(&arr[itr + 1], &arr[end]);

	return itr + 1;
}

void quickSort(int arr[], int start, int end){
	
	if(start < end){
		
		int pivot = partition(arr, start, end);

		quickSort(arr, start, pivot - 1);
		quickSort(arr, pivot + 1, end);
	}
}

void main(){
	
	int arr[] = {8,1,7,2,6,3,5,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	quickSort(arr, 0 ,size - 1);

	printf("After Sorting\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
