
//	Prog : Move Zeros to end

#include<stdio.h>

void moveZeros(int arr[], int size){
	
	int i = 0;

	for(int j = 0; j < size; j++){
		
		if(arr[j] != 0){
			
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;

			i++;
		}
	}
}

void main(){
	
	int arr[] = {0,1,0,3,12};

	int size = sizeof(arr) / sizeof(arr[0]);

	moveZeros(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
