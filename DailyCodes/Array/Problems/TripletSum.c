
/*	PRogram 8 : Triplet Sum
*/

#include<stdio.h>

void pairSum(int arr[], int size, int target){
	
	int ans;

	for(int i = 0; i < size; i++){
		
		for(int j = i + 1; j < size; j++){
			
			for(int k = j + 1; j < size; j++){

				if(arr[i] + arr[j] + arr[k] == target){
				
					printf("Pair Found (%d, %d, %d)\n", arr[i], arr[j], arr[k]);
				        break;
				}
			}
		}
	}
	printf("Pair not found\n");
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
	
	int target;
	printf("Enter target\n");
	scanf("%d", &target);

	pairSum(arr, size, target);
}
