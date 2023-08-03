
/*	Program : Selection Sort
 *
 * 	In Selection Sort, pratyak iteration la "minimum element" first la thevto
 *	In Selection Sort, apan "first index" var kaam karto i.e first index madhe minimum value aste
 *
 *	We maintain "minIndex" to get minimum element in array
 *	
*/	

#include<stdio.h>

void selectionSort(int arr[], int size){
	
	for(int i = 0; i < size - 1; i++){

		int minIndex = i;
		
		for(int j = i+1 ; j < size; j++){
			
			if(arr[minIndex] > arr[j]){
				
				minIndex = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

void main(){
	
	int arr[] = {8,1,7,2,6,3,5,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, size);

	printf("After Sorting\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
