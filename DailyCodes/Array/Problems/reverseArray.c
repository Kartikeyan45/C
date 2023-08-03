
/*	PRogram 1 : Reverse An array
*/

#include<stdio.h>

void reverse(int arr[], int size){
	
	int start = 0, end = size - 1;
	
	int temp = 0;

	while(start < end){
		
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
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
	
	reverse(arr, size);
	
	printf("Array Elements after Reverse are\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
