
#include<stdio.h>

void rotate(int arr[], int size){
	
	int temp = arr[0];

	for(int i = 1; i < size; i++){
		
		arr[i-1] = arr[i];
	}

	arr[size-1] = temp;
}

void main(){
	
	int arr[] = {1,2,3,4,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	rotate(arr, size);

	printf("After Rotating\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}

//	T.C = 0(N)
//	S.C = 0(N) but extra space is 0(1)
