
/*	Prog : Subarray with given sum
 *
 *	Given an array arr[] of non-negative integers and an integer sum,
 *	find a subarray that adds to a given sum.
 *
 *	Input : arr[] = {1,4,20,3,10,5}	, sum = 33
 *	Ouput : Sum found between indices 2 and 4
*/

#include<stdio.h>

void subarraySum(int arr[], int size, int sum){
	
	for(int i = 0; i < size; i++){
		
		for(int j = i + 1; j < size; j++){
			
			for(int k = j + 1; j < size; j++){
				
				if(arr[i] + arr[j] + arr[k] == sum){
					
					printf("Sum between indices %d and %d\n",i , k);
				}
			}
		}
	}
}

void main(){
	
	int arr[] = {1,4,20,3,10,5};

	int size = sizeof(arr) / sizeof(arr[0]);
	
	int sum = 33;

	subarraySum(arr,size, sum);
}
