
/*	Print sum of every single SubArray
 *
 *	T.C = O(N^3) and S.C = O(1)
*/

#include<stdio.h>

void printArray(int arr[], int size){
	
	for(int i = 0; i < size; i++){
		
		for(int j = i; j < size; j++){
			
			int sum = 0;

			for(int k = i; k <= j; k++){
				
				sum = sum + arr[k];
			}

			printf("%d\n", sum);
		}
	}
}

void main(){
	
	int arr[] = {2,4,1,3};

	int size = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, size);
}
