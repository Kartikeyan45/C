
/*	PRogram 2 : Swap Alternate Elements in an array
*/

#include<stdio.h>

void swapAlternate(int arr[], int size){
	
/*	int i = 1;

	while(i < size){
		
		int temp = arr[i];
		arr[i] = arr[i-1];
		arr[i-1] = temp;

		i = i + 2;
	}
*/	
	for(int i = 0; i < size; i += 2){
		
		if(i + 1 < size){
			
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
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
	
	swapAlternate(arr, size);
	
	printf("Array Elements after Reverse are\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
