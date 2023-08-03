
/*	Program : Insertion Sort
 *
 * 	we maintain two list i.e "sorted and unsorted lists".
 *
 * 	Here we will start from 2 nd element, we assume that first elementis sorted
 *	
*/	

#include<stdio.h>

void insertionSort(int arr[], int size){
	
	for(int i = 1; i < size; i++){

		int val = arr[i];

		int j = i - 1;		// j = i - 1 is initiaialized outside for loop because after for loop ends we need j value
		
		for(  ; j >= 0 && val < arr[j] ; j--){		// j >= 0 condition is written first because if val < arr[j] is writte // first then we get segmentatin fault after first iteration
			
			arr[j+1] = arr[j];
		}

		arr[j+1] = val;
	}
}

void main(){
	
	int arr[] = {8,1,7,2,6,3,5,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, size);

	printf("After Sorting\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
