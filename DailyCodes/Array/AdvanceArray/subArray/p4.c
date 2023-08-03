
/*	Print sum of every single SubArray using Prefix Sum Technique
 *
 *	T.C = O(N^2) and S.C = O(N)
 *
 *	karan apan ajun ek array vapartoy runtime array elements cha sum store karayla
*/

#include<stdio.h>

void prefixSumArray(int arr[], int size){

	int pSum[size];

	pSum[0] = arr[0];

	for(int i = 1; i < size; i++){
		
		pSum[i] = pSum[i-1] + arr[i];
	}
	
	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			
			int sum = 0;

			if(i == 0){
				
				sum = pSum[j];
			}else{
				
				sum = pSum[j] + pSum[i - 1];
			}

			printf("%d\n", sum);
		}
	}
}

void main(){
	
	int arr[] = {2,4,1,3};

	int size = sizeof(arr) / sizeof(arr[0]);

	prefixSumArray(arr, size);
}
