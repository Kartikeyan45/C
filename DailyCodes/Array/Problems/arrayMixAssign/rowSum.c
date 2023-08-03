
#include<stdio.h>

int *rowSum(int arr[row][col], int row, int col){
	
	int sum = 0;

	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){
			
			sum = sum + arr[i][j];
		}

		int ret[i] = sum;
	}

	return ret;
}

void main(){
	
	int row = 3, col = 3;

	int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};

	int *ret = rowSum(arr, row, col);
	
	for(int i = 0; i < row; i++){

		printf("%d\n", ret[i]);
	}
}
