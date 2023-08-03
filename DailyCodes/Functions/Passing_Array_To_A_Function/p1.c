/*	Program 1 :
 *
 *	Topic : 1] Passing Array Element to a Function
*/

#include<stdio.h>

void printElement(int element){

	printf("%d\n", element);	//10 20 30 40 50
}

void main(){

	int arr[] = {10,20,30,40,50};

	int arrSize = sizeof(arr) / sizeof(int);

	for(int i = 0; i < arrSize; i++){
	
		printElement(arr[i]);
	}
}
