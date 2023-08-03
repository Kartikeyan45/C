
/*	PRogram 6 : Find Interrsection of Two arrays
*/

#include<stdio.h>

int intersection(int arr1[], int size1, int arr2[], int size2){
	
/*	int ans = 0;
	
	for(int i = 0; i < size1; i++){
		
		int element = arr1[i];

		for(int j = 0; j < size2; j++){
			
			if(element < arr2[j]){
				
				break;
			}

			if(element == arr2[j]){
				
				ans = element;
				arr2[j] = -1;
				break;
			}
		}
	}

	return ans;
*/
	int i = 0, j = 0;
	
	int ans;

	while(i < size1 && j < size2){
	
		if(arr1[i] == arr2[j]){
			
			ans = arr1[i];
			i++; 
			j++;

		}else if(arr1[i] < arr2[j]){
			
			i++;
		}else{
			j++;
		}
	}

	return ans;
}

void main(){
	
	int size1, size2;
	printf("Enter Size 1 and 2\n");
	scanf("%d %d", &size1, &size2);

	int arr1[size1];
	int arr2[size2];
	
	printf("Enter Array Elements 1\n");
	for(int i = 0; i < size1; i++){
		
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter Array Elements 2\n");
	for(int i = 0; i < size2; i++){
		
		scanf("%d", &arr2[i]);
	}

	printf("Array Elements are 1\n");
	for(int i = 0; i < size1; i++){
		
		printf("%d\n", arr1[i]);
	}
	
	printf("Array Elements are\n");
	for(int i = 0; i < size2; i++){
		
		printf("%d\n", arr2[i]);
	}


	int ret = intersection(arr1, size1, arr2, size2);
	
	printf("Intersection Element is : %d\n", ret);
	
}
