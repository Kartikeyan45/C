
#include<stdio.h>

int mainDia(int arr[row][col], int row, int col){
	
	int sum = 0;

	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){
			
			if(i == j){
				
				sum = sum + arr[i][j];
			}
		}
	}

	return sum;
}

void main(){
	
	int row = 3, col = 3;

	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	int ret = mainDia(arr, row, col);

	printf("%d\n", ret);
}
