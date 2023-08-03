
#include<stdio.h>

void transposeMatrix(int arr[][3], int size){
	
	// 1 - transpose
	for(int i = 0; i < size; i++){
		
		for(int j = 0; j < i; j++){
			
//			swap(arr[i][j], arr[j][i]);
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}

void main(){
	
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	transposeMatrix(arr, 3);

	for(int i = 0; i < 3; i++){

		for(int j = 0; j < 3; j++){
			
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}

