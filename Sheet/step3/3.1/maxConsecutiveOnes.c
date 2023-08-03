
/*	PRogram : Maximum Consecutive Ones
 *
 *	Given an binary array "nums", return the maximum no. of consecutive 1 s in the array
 *
 *	Input : nums = [1,1,0,1,1,1]
 *	Ouput : 3
*/

#include<stdio.h>

int findMaxConsecutiveOnes(int arr[], int size){
	
	int count = 0, max = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] == 1){
			
			count++;

			if(count > max){
				
				max = count;
			}
		}else{
			
			count = 0;
		}
	}

	return max;
}

void main(){
	
	int arr[] = {1,1,0,1,1,1};

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = findMaxConsecutiveOnes(arr, size);

	printf("%d\n", ret);
}
