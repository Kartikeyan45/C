
/*	Prog : Count of Elements
 *
 *	Given an array A of N integers
 *	Count the number of elements that have atleast 1 element greater than itself.
 *
 *	Input : arr = [3,1,2]
 *	Ouput : 2
 *	Expla : The elements that have atleast 1 greater than itself are 1 and 2
*/

#include<stdio.h>

int countEle(int arr[], int size){
	
	int count = 0, min = arr[0];

	for(int i = 0; i < size; i++){
		
		if(min > arr[i]){
			
			min = arr[i];
		}
	}
	
	printf("%d\n", min);

	for(int i = 1; i < size-1; i++){
		
		if(arr[i] > min){
			
			count++;
		}
	}

	return count;
}

void main(){
	
	int arr[] = {5,5,2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = countEle(arr, size);

	printf("Ret is : %d\n", ret);
}
