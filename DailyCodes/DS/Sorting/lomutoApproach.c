
/*	Prog : Lomuto Sort
 *
 *	Same as quick Sort, here pivot is last element
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

void lomutoSort(int arr[], int start, int end){
	
	if(start < end){
		
		int pivot = partition(arr, start, end);

		lomutoSort(arr, start, pivot - 1);
		lomutoSort(arr, pivot + 1, end);
	}
}

void main(){
	
	int arr[] = {8,1,7,2,6,3,5,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	lomutoSort(arr, 0 ,size - 1);

	printf("After Sorting\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
