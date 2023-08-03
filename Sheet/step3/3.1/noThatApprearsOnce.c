
/*

Find the number that appears once, and the other numbers twice

Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

*/

//	Naive Approach(Brute-force approach): 

/*
#include<stdio.h>

int singleEle(int *arr, int size){
	
	for(int i = 0; i < size; i++){
	
		int num = arr[i];
		int count = 0;

		for(int j = 0; j < size; j++){
			
			if(arr[j] == num){
				
				count++;
			}
		}

		if(count == 1){
			
			return num;
		}
	}

	return -1;
}

void main(){
	
	int arr[] = {4,1,2,1,2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = singleEle(arr, size);

	printf("%d\n", ret);
}
*/

//	Optimal Approach(Using XOR): 

#include<stdio.h>

int singleEle(int *arr, int size){
	
	int ans = 0;

	for(int i = 0; i < size; i++){
		
		ans = ans ^ arr[i];
	}

	return ans;
}

void main(){

        int arr[] = {4,1,2,1,2};

        int size = sizeof(arr) / sizeof(arr[0]);

        int ret = singleEle(arr, size);

        printf("%d\n", ret);
}

