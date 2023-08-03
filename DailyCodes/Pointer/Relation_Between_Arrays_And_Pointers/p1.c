/*	Program 1 :
*/

#include<stdio.h>

void main(){

	int size;
	printf("Enter array size :\n");
	scanf("%d", &size);

	int arr[size];

	printf("Enter array elements :\n");
	for(int i = 0; i < size; i++){
		
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < size; i++){
	
//		printf("%d\n", arr[i]);		// arr[i] internally *(arr + i) jato

		printf("%d\n", *(arr + i));
	}
}
