
/*	Program : Compare till N String
*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool compare(char arr1[], char arr2[], int size1){

	if(strlen(arr1) != strlen(arr2)){
	
		return false;
	}

	if(*arr1 == '\0' && *arr2 == '\0'){
	
		return true;
	}

	if(*arr1 == *arr2){
		
		arr1++;
		arr2++;
	}

	compare(arr1 + 1, arr2 + 1, size1 - 1);
}

void main(){

	int size1, size2;
	printf("Enter Size1 and Size2 is :\n");
	scanf("%d %d", &size1, &size2);

	char arr1[size1] ,arr2[size2];

	printf("Enter String1\n");
	for(int i = 0; i < size1; i++){
		
		scanf("%c", &arr1[i]);
	}

	printf("Enter String2\n");
	for(int i = 0; i < size2; i++){
		
		scanf("%c", &arr2[i]);
	}

	if(size1 != size2){
		
		printf("Not Equal\n");
	}

	bool ret = compare(arr1, arr2 ,size1);

	if(ret){
		printf("Array is Equal\n");
	}else{
		printf("Array is not Equal\n");
	}
}
