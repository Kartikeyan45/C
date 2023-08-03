
/*	Prog : Radix Sort
 *
 *	Counting Sort is a linear time sorting algorithm that sort in O(n+k)
 *	time when elements are in the range from 1 to k.
 *
 *	"What if the elements are in the range from 1 to n^2 ?"
 *
 *		Radix Sort is the answer.The idea of Radix Sort is to do digit sort starting from least significant digit to most significant digit.Radix sort uses counting sort as a subroutine to sort.
 *
 *	"The Radix Sort Algorithm"
 *
 *		Do the following for each digit (I) where (I) varies from the least significant digit to the most significant digit. Here we will be sorting the input array using counting sort.
 *
 *	Time Complexity is 0(d * (n+b))
*/	

#include<stdio.h>

void countingSort(int arr[], int size, int pos){
	
	// 1
	
	int countArr[10] = {0};			// 10 size ghetlay karan unit digit 0-9 madhech asnar
	
	
/*	for(int i = 0; i < 10; i++){		// Both are same
		
		countArr[i] = {0};
	}
*/

	// 2 - Store count of each element

	for(int i = 0; i < size; i++){
		
		countArr[(arr[i] / pos) % 10]++;
	}

	// 3 - Cumulative Sum
	
	for(int i = 1; i < 10; i++){
		
		countArr[i] = countArr[i] + countArr[i-1];
	}

	// 4 - Build the output array
	
	int output[size];

	// For Stable Algorithm 
	
	for(int i = size - 1; i >= 0; i--){
		
		output[countArr[(arr[i] / pos) % 10] - 1] = arr[i];

		countArr[(arr[i] / pos) % 10] --;		// nahi lihila tar element pusun titech lihila jail

	}

	// 6 - Copy output array to arr
	
	for(int i = 0; i < size; i++){
		
		arr[i] = output[i];
	}
}

void radixSort(int arr[], int size){
	
	int max = arr[0];

	for(int i = 1; i <= size; i++){
		
		if(max < arr[i]){
			
			max = arr[i];
		}
	}

	for(int pos = 1; max / pos > 0; pos *= 10){
		
		countingSort(arr, size, pos);
	}
}

void main(){
	
	int arr[] = {3,7,2,1,8,2,5,2,7};

	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	}

	printf("\n");

	radixSort(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d ", arr[i]);
	}

	printf("\n");
}
