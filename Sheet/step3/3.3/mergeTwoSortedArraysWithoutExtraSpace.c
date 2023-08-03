
/*
 	Merge two Sorted Arrays Without Extra Space

	Problem statement: Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

	Example 1:

	Input:
		n = 4, arr1[] = [1 4 8 10]
		m = 5, arr2[] = [2 3 9]

	Output:
		arr1[] = [1 2 3 4]
		arr2[] = [8 9 10]

	Explanation:
		After merging the two non-decreasing arrays, we get, 1,2,3,4,8,9,10.

	Example2:

	Input:
		n = 4, arr1[] = [1 3 5 7]
		m = 5, arr2[] = [0 2 6 8 9]

	Output:
		arr1[] = [0 1 2 3]
		arr2[] = [5 6 7 8 9]

	Explanation:
		After merging the two non-decreasing arrays, we get, 0 1 2 3 5 6 7 8 9.

*/

#include<stdio.h>

//	Appraoch 1

/*
void merge(int *arr1, int size1, int *arr2, int size2){
	
	int arr3[size1 + size2];

	int left = 0, right = 0, index = 0;

	while(left < size1 && right < size2){
		
		if(arr1[left] <= arr2[right]){
			
			arr3[index] = arr1[left];
			left++, index++;
		}else{
			
			arr3[index] = arr2[right];
			right++, index++;
		}
	}

	while(left < size1){			// T.C = O(size1 + size2) + O(size1 + size2)
						// S.C = O(size1 + size2)
		
		arr3[index++] = arr1[left++];
	}

	while(right < size2){
		
		arr3[index++] = arr2[right++];
	}

	// now we have got 3 array sorted, we will transfer elements from arr3 to arr1 and arr2
	
	for(int i = 0; i < size1 + size2; i++){
		
		if(i < size1){
			
			arr1[i] = arr3[i];
		}else{
			
			arr2[i - size1] = arr3[i];
		}
	}
}

*/

//	Appraoch 2 - Optimal 1

void swap(int x, int y){
	
	int temp = x;
	x = y;
	y = temp;
}

void sort(int arr[], int size){
	
	for(int i = 0; i < size - 1; i++){
		
		for(int j = 0; j < size - i + 1; j++){
			
			if(arr[j] > arr[j+1]){
				
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}							// T.C = O(min(n,m))

/*

void merge(int arr1[], int size1, int arr2[], int size2){		
	
	int left = size1 - 1;

	int right = 0;

	while(left >= 0 && right < size2){
		
		if(arr1[left] > arr2[right]){
			
			swap(arr1[left], arr2[right]);
			left--;
			right++;
		}else{
			
			break;
		}
	}

	sort(arr1, arr1 + size1);

	sort(arr2, arr2 + size2);
}

*/
void main(){
	
	int arr1[] = {1,4,8,10};

	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {2,3,9};

	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	merge(arr1, size1, arr2, size2);
	
	printf("Array 1\n");
	for(int i = 0; i < size1; i++){
		
		printf("%d ", arr1[i]);
	}
	

	printf("\nArray 2\n");
	for(int i = 0; i < size2; i++){
		
		printf("%d ", arr2[i]);
	}

	printf("\n");
}
