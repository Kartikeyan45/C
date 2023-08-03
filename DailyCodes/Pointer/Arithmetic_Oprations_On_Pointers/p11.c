/*	PRogram 11 :
*/

#include<stdio.h>

void main(){

	int arr[] = {10,20,30,40};

	int *ptr = &(arr[0]);

	ptr++;

	printf("%d\n", *ptr);	//20

	++ptr;

	printf("%d\n", *ptr);	//30
}
