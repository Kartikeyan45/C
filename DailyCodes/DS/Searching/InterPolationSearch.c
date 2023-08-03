/*	Program 3;
*/

#include<stdio.h>

int InterPolationSearch(int arr[], int size, int search){
	
	int start = 0;
	int end = size - 1;

	while(start <= end){

	//	int mid = (start + end) / 2;

		int mid = start + ((search - arr[start]) * (end - start)) / (arr[end] - arr[start]);
		
//		int mid = (start + (end - start)) / 2;

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

	int ret = InterPolationSearch(arr, size, search);
	printf("Index is : %d\n", ret);
}
