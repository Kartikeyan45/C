
/*	Prog : Hoare's Approach
 *
 *	First Index is Pivot
 *
 *	Here we take into consideration of pivot, we don't skip pivot
*/

#include<stdio.h>

int partition(int arr[], int start, int end){
	
	int i = start - 1;
	int j = end + 1;
	
	int pivot = arr[start];

	while(1){
		
		// find leftmost element greater or equal to 
		// i.e it should be on right side

		do{			// pivot element maximum element bhtla pahije
			i++;
		}while(arr[i] < pivot);

		
		// find rightmost element lesser or equal to
		// i.e it should be on left side

		do{
			j--;		// pivot madhe minimu element bhtla pahije

		}while(arr[j] > pivot);

		if(i >= j){
			
			return j;
		}

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void hoareSort(int arr[], int start, int end){
	
	if(start < end){

		int pivot = partition(arr, start, end);

		hoareSort(arr, start, pivot);
		hoareSort(arr, pivot+1, end);
	}
}

void main(){
	
	int arr[] = {4,2,7,9,5,3,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	hoareSort(arr, 0, size - 1);

	printf("After Sorting\n");

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
