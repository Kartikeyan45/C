
//	searching Element in an Array


#include<stdio.h>
#include<stdbool.h>

bool searchArray(char arr[], int size, char search){

	if(size == 0){
		
		return false;
	}

	if(arr[size] == search){
	
		return true;
	}

	return searchArray(arr, size-1, search);
}

void main(){

	char arr[] = {'k','a','r','t','i','k','\0'};

	char search = 'z';

	int ret = searchArray(arr, 7, search);
	printf("Search is : %d\n", ret);
}
