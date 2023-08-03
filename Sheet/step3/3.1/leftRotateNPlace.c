
#include<stdio.h>

void leftRotate(int arr[], int size, int d){

	d = d % size;		// for d = 8 , d = 8 % 7 = 1 time rotate
				// for d = 10, d = 10 % 7 = 3 times rotates
				// for d = 15, d = 15 % 7 = 1 time rotate
	
	int temp[d];
	
	// Storing in Temp Array
	for(int i = 0; i < d; i++){
		
		temp[i] = arr[i];
	}
	
	// Shifting 
	for(int i = d; i < size; i++){
		
		arr[i-d] = arr[i];
	}
	
	// From temp to Main Array
	int j = 0;
	for(int i = size-d; i < size; i++){
		
		arr[i] = temp[j];
		j++;
	}
}

void reverse(int arr[], int start, int end){
	
	while(start <= end){
		
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--; 
	}
}

void optimal(int arr[], int size, int d){
	
	reverse(arr , 0, d-1);		//reverse(arr, arr + d)

	reverse(arr, d, size-1);		//reverse(arr+d, arr + size)

	reverse(arr, 0 , size);		//reverse(arr, arr + size)
}

void main(){
	
	int arr[] = {1,2,3,4,5,6,7};

	int size = sizeof(arr) / sizeof(arr[0]);

	int d = 3;

//	bruteleftRotate(arr, size, d);

	optimal(arr, size, d);

	printf("After Rotating\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}

/*	Brute = 1] take temp[] array of N spaces given
 *		2] Shiting the elements in the main array
 *		3] Put temp array elements in main array
 *
 *	Optimal = 1] reverse(arr, arr + d)
 *		  2] reverse(arr + d, arr + size)
 *		  3] reverse(arr, arr + size)
 *
 *
 *	arr = [1,2,3,4,5,6,7], d = 3
 *
 *		1] arr = [3,2,1,4,5,6,7]
 *		2] arr = [3,2,1,7,6,5,4]
 *		3] arr = [4,5,6,7,1,2,3]
*/		
