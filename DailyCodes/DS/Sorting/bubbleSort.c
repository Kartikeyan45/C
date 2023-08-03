
/*	Program : Bubble Sort
 *
 *	In Bubble Sort, pratyak iteration la "maximum element" last la thevto
 *	In Bubble Sort, apan "last index" var kaam karto i.e last index madhe maximum value aste
 *	If array size if 6, then in 5 iterartion we get sorted array
 *	i.e in "n-1" iteration we get sorted array
*/	

#include<stdio.h>

void bubbleSort(int arr[], int size){
	
	for(int i = 0; i < size; i++){
		
		for(int j = 0; j < size - i - 1; j++){
			
			if(arr[j] > arr[j+1]){
				
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void main(){
	
	int arr[] = {8,1,7,2,6,3,5,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, size);

	printf("After Sorting\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
