
/*	Prog : Good Pair
 *
 *	Given an array A and an integer B.
 *	A pair (i,j) in the array is a good pair if i != j and (A[i] + A[j] == B)
 *	Check if any good pair exist or not.
 *	Return 1 if good pair exist otherwise return 0.
 *
 *	Input : arr = [1,2,3,4], B = 7		Input : arr = [1,2,4], B = 4
 *	Ouput : 1				Output : 0
 *	Expla : (i,j) = (3,4)			Expla : No pair has a sum equal to 4
*/

#include<stdio.h>

int goodPair(int arr[], int size, int B){

	for(int i = 0; i < size; i++){
	
		for(int j = i + 1; j < size; j++){
			
			if(i != j && (arr[i] + arr[j] == B)){
				
				return 1;
			}
		}
	}

	return 0;
}

void main(){
	
	int arr[] = {1,2,3,4};

	int size = sizeof(arr) / sizeof(arr[0]);

	int B = 7;

	int ret = goodPair(arr, size, B);

	printf("Ret is : %d\n", ret);
}
