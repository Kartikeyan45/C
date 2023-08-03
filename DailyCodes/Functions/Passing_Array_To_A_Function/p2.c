/*	Program 2 :
 *
 *	Topic : 1] Passing Array Element to a Function
 *
 *		2] Passing Entire Array to a Function.
*/

#include<stdio.h>

void printArr(int *ptr){

}

void main(){

	int arr[] = {10,20,30,40,50};

	printArr(arr);
}

/*	There is no way to pass array size to
 *	the printArr Function so that's why 
 *	arrSize should be passed as a parameter
 *	to this printArr Function
*/	
