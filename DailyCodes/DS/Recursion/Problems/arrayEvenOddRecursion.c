
/*	Program : 
 *
 *	Given an array {1,5,4,3} 
 *		
 *		if no. of count of even number is greater than 2 than return true else false;
*/

#include<stdio.h>
#include<stdbool.h>

/*
bool arrCount(int arr[], int size){

	int count = 0;

	for(int i = 0; i < size; i++){
		
		if(arr[i] % 2 == 0){
		
			count++;
		}

		if(count >= 2){
			
			return true;
		}
	}

	return false;
}
*/

bool arrCount(int arr[], int size, int count){
	
	        if(count >= 2){
	        
                        return true;
                }

                if(size == 0){

                        return false;
                }

                if(arr[size-1] % 2 == 0){

                        count++;
                }

                return arrCount(arr, size-1, count);

}

void main(){

	int size;
	printf("Size is :\n");
	scanf("%d", &size);

	int arr[size];

	printf("Enter Array Elements\n");
	for(int i = 0; i < size; i++){
		
		scanf("%d", &arr[i]);
	}
	
	int count = 0;	
	
	bool ret = arrCount(arr, size, count);

	if(ret){
		printf("Array is Even\n");
	}else{
		printf("Array is odd\n");
	}
}
