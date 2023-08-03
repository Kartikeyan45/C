/*	PRogram 1 : Given an array of N integers, and a sum, the task is to find the
 *		    number of pairs of integers in the array whose sum is equal to sum
*/		    

//	Veritas Question 1 Round

#include<stdio.h>

int pairCount(int *arr, int size, int sum){

	int count = 0;

	for(int i = 0; i < size; i++){
	
		for(int j = i + 1; j < size; j++){
		
			if(arr[i] + arr[j] == sum){
			
				count++;
			}
		}
	}

	return count;
}

void main(){

	int size;
	printf("Enter Array Size\n");
	scanf("%d", &size);

	int arr[size];

	printf("Array Elements\n");
	for(int i = 0; i < size; i++){
	
		scanf("%d", &arr[i]);
	}
	
	int sum;
	printf("Enter Sum\n");
	scanf("%d", &sum);

	printf("Count Pair Count is :%d\n", pairCount(arr, size, sum));
}
