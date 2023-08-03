/*	Program 1;
*/

#include<stdio.h>

int binarySearch(int arr[], int size, int search){
	
	int start = 0;
	int end = size - 1;

	while(start <= end){

	//	int mid = (start + end) / 2;
		
		int mid = (start + (end - start)) / 2;

		if(arr[mid] == search){
		
			return mid;

		}else if(arr[mid] > search){
			
			end = mid - 1;
		}else{
			
			start = mid + 1;
		}
	}
	return -1;
}

void main(){
	
	int size;
	printf("Enter Size\n");
	scanf("%d", &size);

	int arr[size];

	printf("Enter Array Elements\n");
	for(int i = 0; i < size; i++){
		
		scanf("%d", &arr[i]);
	}

	int search;
	printf("Enter Search Element\n");
	scanf("%d", &search);

	int ret = binarySearch(arr, size, search);
	printf("Index is : %d\n", ret);
}
