
/*	PRogram  : Check if array is sorted and rotated
 *		   
 *		   Input : [3,4,5,1,2]
 *		   Ouput : true
*/

#include<stdio.h>
#include<stdbool.h>

bool sort(int arr[], int size){
	
	int count = 0;
	int n = arr[size];

	for(int i = 1; i < size; i++){
		
		if(arr[i - 1] > arr[i]){
			count++;
		}
	}

	if(arr[n-1] > arr[0]){
			
		count++;
	}

	return count <= 1;

}

void main(){
	
	int size;
	printf("Enter Size\n");
	scanf("%d", &size);

	int arr[size];
	
	printf("Enter Array Elements\n");
	for(int i = 0; i < size; i++){
		
		scanf("%d", &arr[i]);
	}

	printf("Array Elements are\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}

	int ret = sort(arr, size);
	printf("Value %d", ret);
}
