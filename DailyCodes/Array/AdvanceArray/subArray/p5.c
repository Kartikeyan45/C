
/*	Print sum of every single SubArray with T.C = O(N^2) and wihtout using extra space
 *
 *	T.C = O(N^2) and S.C = O(1)
*/

#include<stdio.h>

void subArray(int arr[], int size){
	
	for(int i = 0; i <= size; i++){
		
		int sum = 0;

		for(int j = i; j < size; j++){
			
			sum = sum + arr[j];

			printf("%d\n", sum);
		}
	}
}

void main(){
	
	int arr[] = {2,4,1,3};

	int size = sizeof(arr) / sizeof(arr[0]);

	subArray(arr, size);
}
