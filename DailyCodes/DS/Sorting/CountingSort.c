
/*	Prog : Counting Sort
 *
 *	Counting Sort is a sorting technique based on keys between a specific range.
 *
 *	Counting Sort makes assumptions about the data, for example, it assumes the values are going to be in the range of 0 to 10 or 10 to 99, etc, Some other assumption counting sort makes is input data will be all real numbers.
 *
 *	Advantage : Time Complexity is 0(n)
*/	

#include<stdio.h>

void countingSort(int arr[], int size){
	
	// 1 - finding Max element
	
	int max = arr[0];

	for(int i = 1; i < size; i++){
		
		if(max < arr[i]){
			
			max = arr[i];
		}
	}

	// 2 - max element cha size+1 cha array banvaycha ani initialize 
	//     karaycha 0
	
	int countArr[max + 1];

	for(int i = 0; i <= max; i++){
		
		countArr[i] = 0;
	}

	// 3 - Store count of eaxh element
	
	for(int i = 0; i < size; i++){
		
		countArr[arr[i]]++;
	}

	// 4 - Cumulative Sum
	
	for(int i = 1; i <= max; i++){
		
		countArr[i] = countArr[i] + countArr[i-1];
	}

	// 5 - Build the output array
	
	int output[size];

	// For Stable Algorithm 
	
	for(int i = size - 1; i >= 0; i--){
		
		output[countArr[arr[i]] - 1] = arr[i];

		countArr[arr[i]]--;		// nahi lihila tar element pusun titech lihila jail

	}

	// 6 - Copy output array to arr
	
	for(int i = 0; i < size; i++){
		
		arr[i] = output[i];
	}
}

void main(){
	
	int arr[] = {3,7,2,1,8,2,5,2,7};

	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	}

	printf("\n");

	countingSort(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	}

	printf("\n");
}
