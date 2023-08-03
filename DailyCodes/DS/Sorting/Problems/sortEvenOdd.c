
/*	Prog : Given an array arr[] consisting of N positive integers, the task is to sort
 *	       the array such that-
 *
 *	       -All even numbers must come before odd  numbers.
 *	       -All even numbers divisible by 5 must come first then even numbers not divisible by 5
 *	       -If two even numbers divisible by 5 then the number having greater value will come first
 *	       -If two even numbers not divisible by 5 then the number having greater index in the array will come first
 *	       -All odd numbers must come in relative order as they are present in the array
 *
 *	       Input : arr[] = {5,10,30,7}
 *	       Ouput : [30,10,5,7] 
*/

#include<stdio.h>

void sort(int arr[], int size){
	
	for(int i = 0; i < size; i++){
		
		for(int j = 0; j < size - i - 1; j++){
			
			if(arr[j] % 5 == 0 && arr[j] % 2 == 0){
				
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void main(){
	
	int arr[] = {5,10,30,7};

	int size = sizeof(arr) / sizeof(arr[0]);

	sort(arr, size);

	printf("Sorted Array\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}
