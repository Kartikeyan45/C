
/*	PRogram 6 : Find All Duplicates in an array - LeetCode
*/

#include<stdio.h>

int duplicates(int arr[], int size){
	
	int ans = 0;	

	// XOR ing all array elements
	for(int i = 0; i < size; i++){
		
		ans = ans ^ arr[i];
	}
	
	// XOR [1, n-1]
	for(int i = 1; i < size; i++){
		
		ans = ans ^ i;
	}

	return ans;
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
	
	int ret = duplicates(arr, size);
	
	printf("Unique Element is : %d\n", ret);
	
}
