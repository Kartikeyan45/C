
//	Program 3: Move Zeros to end

#include<stdio.h>

//optimal
void move(int arr[], int size){
	
	int k = 0, temp;

	for(int i = 0; i < size; i++){
		
		if(arr[i] != 0){
			
			temp = arr[i];
			arr[i] = arr[k];
			arr[k] = temp;

			k++;
		}
	}
}

void main(){
	
	int arr[] = {0,1,0,3,12};

	int size = sizeof(arr) / sizeof(arr[0]);

	move(arr, size);

	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}
}

/*	Brute = 1] Make Temp[] array and store all non-zero elements in it
 *		2] shift all temp array elements in main array
 *		3] Make remaining elements of main array zero
*/

void move(int arr[], int size){
	
	int k;
	int temp[k];

	// step 1
	for(int i = 0; i < size; i++){
		
		if(arr[i] != 0){
			
			temp[k] = arr[i];
			k++;
		}
	}

	// step 2
	
	int rem = sizeof(temp) / sizeof(temp[0]);

	for(int i = 0; i < size; i++){
		
		arr[i] = temp[i];
	}

	//step3
	for(int i = rem; i < size; i++){
		
		arr[i] = 0;
	}
}
