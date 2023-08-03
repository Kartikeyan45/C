
/*
 	Find the repeating and missing numbers

	Problem Statement: You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

	Input Format:  array[] = {3,1,2,5,3}

	Result: {3,4)

	Explanation: A = 3 , B = 4
		Since 3 is appearing twice and 4 is missing

	Input Format: array[] = {3,1,2,5,4,6,7,5}

	Result: {5,8)

	Explanation: A = 5 , B = 8 
		Since 5 is appearing twice and 8 is missing
*/

//	Brute

/*
#include<stdio.h>
#include<stdlib.h>

void missingRepeated(int *arr, int size, int *newArr){
	
	int missing, repeating = -1;

	for(int i = 0; i < size; i++){
		
		int count = 0;

		for(int j = 0; j < size; j++){
			
			if(arr[j] == i){
				
				count++;
			}
		}

		if(count == 2){
			
			repeating = i;

		}else if(count == 0){
			
			missing = i;
		}

		if(missing == -1 && repeating == -1){
			
			break;
		}
	}

	newArr[0] = repeating;
	newArr[1] = missing;
}

void main(){
        
        int arr[] = {3,1,2,5,3};

        int size = sizeof(arr) / sizeof(arr[0]);

        int *newArr = (int*)calloc(sizeof(int), 2);

        missingRepeated(arr, size, newArr);

        for(int i = 0; i < 2; i++){
                
                printf("%d\n", newArr[i]);
        }
}
*/
	// Better

/*
#include<stdio.h>
#include<stdlib.h>

void missingRepeated(int *arr, int size, int *newArr){
	
	int n = size + 1;

	int countArr[n] = {0};

	for(int i = 0; i < size; i++){
		
		countArr[arr[i]]++;
	}
	
	int k = 0;

	for(int i = 1; i <= size; i++){
		
		if(countArr[i] == 0 || countArr[i] > 1){
			
			newArr[k++] = i;
		}
	}
}

void main(){

        int arr[] = {3,1,2,5,3};

        int size = sizeof(arr) / sizeof(arr[0]);

        int *newArr = (int*)calloc(sizeof(int), 2);

        missingRepeated(arr, size, newArr);

        for(int i = 0; i < 2; i++){

                printf("%d\n", newArr[i]);
        }
}
*/


	// Optimal	
/*

#include<stdio.h>
#include<stdlib.h>

void missingRepeated(int *arr, int size, int *newArr){
	
	long long int n = size;

	long long int S = (n * (n + 1)) / 2;
	long long int P = (n * (n + 1) * (2 * n + 1)) / 6;

	long long int missing = 0, repeating = 0;

	for(int i = 0; i < n ; i++){
		
		S = S - (long long int)arr[i];

		P = P -  (long long int )arr[i] * (long long int)arr[i];
	}

	missing = (S + P / S) / 2;

	repeating = missing - S;

	newArr[0] = repeating;

	newArr[1] = missing;
}

void main(){
	
	int arr[] = {3,1,2,5,3};

	int size = sizeof(arr) / sizeof(arr[0]);

	int *newArr = (int*)calloc(sizeof(int), 2);

	missingRepeated(arr, size, newArr);

	for(int i = 0; i < 2; i++){
		
		printf("%d\n", newArr[i]);
	}
}
*/
