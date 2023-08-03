/*	Program 1 : WAP to search an elements in an array.
*/

#include<stdio.h>

void main(){

	int size;
	printf("Enter Array Size :\n");
	scanf("%d", &size);

	int arr[size];

	printf("Enter Array Elements :\n");

	for(int i = 0; i < size; i++){
	
		scanf("%d", &arr[i]);
	}
	
	int search;
	printf("Enter Element to be searched :\n");
	scanf("%d", &search);
	
	int flag = 0;

	for(int i = 0; i < size; i++){
	
		if(search == arr[i]){
		
			flag = 1;
		}
	}

	if(flag == 1){
		
		printf("Element Found\n");
	}else{
		
		printf("Elements not found\n");
	}
}
