
/*
 	Count inversions in an array

	Problem Statement: Given an array of N integers, count the inversion of the array (using merge-sort).

	What is an inversion of an array? Definition: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].

	Input Format: N = 5, array[] = {1,2,3,4,5}

	Result: 0

	Explanation: we have a sorted array and the sorted array
	has 0 in versions as for i < j you will never find a pair
	such that A[j] < A[i]. More clear example: 2 has index 1
	and 5 has index 4 now 1 < 5 but 2 < 5 so this is not an
	inversion.

	Input Format: N = 5, array[] = {5,4,3,2,1}

	Result: 10

	Explanation: we have a reverse sorted array and we will
	get the maximum inversions as for i < j we will always
	find a pair such that A[j] < A[i].
	Example: 5 has index 0 and 3 has index 2 now (5,3) pair
	is inversion as 0 < 2 and 5 > 3 which will satisfy out
	conditions and for reverse sorted array we will get
	maximum inversions and that is (n)*(n-1) / 2.

	For above given array there is 4 + 3 + 2 + 1 = 10 inversions.

	Input Format: N = 5, array[] = {5,3,2,1,4}

	Result: 7

	Explanation: There are 7 pairs (5,1), (5,3), (5,2), (5,4),
	(3,2), (3,1), (2,1) and we have left 2 pairs (2,4) and
	(1,4) as both are not satisfy our condition.
*/

//	1 - Brute Force

#include<stdio.h>

/*
int pairs(int *arr, int size){
	
	int count = 0;

	for(int i = 0; i < size; i++){
		
		for(int j = i + 1; j < size; j++){
			
			if(arr[i] > arr[j]){
				
				count++;
			}
		}
	}

	return count;
}
							// T.C - O(N*N) 
							// S.C = O(1)
void main(){
	
	int arr[] = {5,3,2,1,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = pairs(arr, size);

	printf("%d\n", ret);
}

*/
//	2 - Optimal

int merge(int arr[], int left, int mid, int right, int temp[]){

	int inv_count=0;
    	int i = left;
    	int j = mid;
    	int k = left;

    	while((i <= mid-1) && (j <= right)){
        	if(arr[i] <= arr[j]){
            		temp[k++] = arr[i++];
	        }
        	else
	        {
        	    temp[k++] = arr[j++];
	            inv_count = inv_count + (mid - i);
        	}
    	}

    	while(i <= mid - 1)
        	temp[k++] = arr[i++];

    	while(j <= right)
        	temp[k++] = arr[j++];

    	for(i = left ; i <= right ; i++)
        	arr[i] = temp[i];
	
	return inv_count;
}

int mergeSort(int arr[], int start, int end, int temp[]){
	
	int count = 0;

	if(start < end){
		
		int mid = (start + end) / 2;

		count += mergeSort(arr,start,mid, temp);

		count += mergeSort(arr,mid+1,end, temp);

		count += merge(arr,start,mid+1,end,temp);
	}

	return count;
}

void main(){

        int arr[] = {5,3,2,1,4};

        int size = sizeof(arr) / sizeof(arr[0]);

	int temp[size];

        int ret = mergeSort(arr,0,size-1, temp);

        printf("%d\n", ret);
}

