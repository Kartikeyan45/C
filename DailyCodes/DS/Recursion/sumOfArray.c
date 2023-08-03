
//	Sum of Array Recursion

#include<stdio.h>

int sumArray(int arr[], int size){

	if(size == 0){
	
		return 0;
	}

	return sumArray(arr, size-1) + arr[size-1];
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

	int ret = sumArray(arr, size);
	printf("Sum is : %d\n", ret);

}
