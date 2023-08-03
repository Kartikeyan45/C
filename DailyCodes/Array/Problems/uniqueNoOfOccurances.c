
/*	PRogram 4 : Find Unique Number of occurances
*/

#include<stdio.h>

int uniqueOcc(int arr[], int size){
	
	int ans = 0;	

	for(int i = 0; i < size; i++){
		
		ans = ans ^ arr[i];
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
	
	int ret = uniqueOcc(arr, size);
	
	printf("Unique Element is : %d\n", ret);
	
}
