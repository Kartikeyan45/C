
/*	PRogram 9 : Sort 0 s 1 s
*/

#include<stdio.h>

void sort(int arr[], int size){
	
	int start = 0, end = size - 1;

	while(start < end){
		
		if(arr[start] == 0 && start < end){
			
			start++;
		}

		if(arr[end] == 1 && start < end){
			
			end--;
		}

		//jar ithe paryant ala asel tar
		//arr[start]==1, arr[end] ==0
		if(start < end){

			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;

			start++;
			end--;
		}
	}	
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

	printf("Array Elements are\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}

	sort(arr, size);

	printf("Array Elements After Sorting are\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
