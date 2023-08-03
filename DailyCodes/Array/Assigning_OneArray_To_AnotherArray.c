/*	Program 1 : Assigning an Array.
*/

#include<stdio.h>

void main(){

	int arr1[3] = {1,2,3};

	for(int i = 0; i < 3; i++){
		
		printf("%d\n", arr1[i]);
	}

	int arr2[3];

	for(int i = 0; i < 3; i++){
	
		arr2[i] = arr1[i];
	}

	for(int i = 0; i < 3; i++){
	
		printf("%d\n", arr2[i]);
	}
}
