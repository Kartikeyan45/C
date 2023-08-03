
/*	Program : 
 *
 *	Given an array {1,2,3,4} 
 *		
 *		if array is sorted return true else false;
*/

#include<stdio.h>
#include<stdbool.h>

bool sorted(int arr[], int size, int index){

	if(index == size - 1){
		
		return true;
	}

	return arr[index] < arr[index+1] && sorted(arr, size, index+1);
}

void main(){

	int size;
	printf("Size is :\n");
	scanf("%d", &size);

	int arr[size];

	int index = 0;

	printf("Enter Array Elements\n");
	for(int i = 0; i < size; i++){
		
		scanf("%d", &arr[i]);
	}

	bool ret = sorted(arr, size, index);

	if(ret){
		printf("Array is Sorted\n");
	}else{
		printf("Array is not Sorted\n");
	}
}
