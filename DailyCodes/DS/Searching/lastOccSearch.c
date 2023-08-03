/*	Program 2 ;
*/

#include<stdio.h>

int linearSearch(int arr[], int size, int search){
	
	int lastOcc = -1;

	for(int i = 0; i < size; i++){

		if(arr[i] == search){
			
			lastOcc = i;
		}
	}

	return lastOcc;

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

	int search;
	printf("Enter Search Element\n");
	scanf("%d", &search);

	int ret = linearSearch(arr, size, search);
	printf("Index is : %d\n", ret);
}
