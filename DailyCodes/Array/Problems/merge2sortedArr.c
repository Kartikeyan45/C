
//	Prog : Merge 2 Sorted Arrays

#include<stdio.h>

void merge(int arr1[], int size1, int arr2[], int size2, int arr3[]){
	
	int i = 0, j = 0, k = 0;

	while(i < size1 && j < size2){
		
		if(arr1[i] < arr2[j]){
			
			arr3[k] = arr1[i];
			i++;
			k++;
		}else{
			
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}

	// copy remaining elem of first array k element
	while(i < size1){
		
		arr3[k] = arr1[i];
		k++;
		i++;
	}


	// copy remaining elem of second array k element
	while(i < size1){
		
		arr3[k] = arr2[j];
		k++;
		j++;
	}
}

void main(){
	
	int arr1[] = {1,3,5,7,9};
	int arr2[] = {2,4,6};

	int arr3[8] = {0};

	merge(arr1, 5, arr2, 3, arr3);

	printf("Array 3 is\n");
	for(int i = 0; i < 8; i++){
		
		printf("%d\n", arr3[i]);
	}
}
