/*	Program 1 :
 *
 *	Topic : 2D-Array
 *
 *	2D-Array madhe column dena compulsory ahe, nahitar error milto
*/

#include<stdio.h>

void main(){
	
	int arr1[] = {1,2,3,4,5,6,7,8,9};

	int arr2[][] = {1,2,3,4,5,6,7,8,9};	//error
}

/*	error : array elements have incomplete element type "int[]"
 *
 *		int arr2[][] = {1,2,3,...,9};
 *		    ^
 *	note : declaration of "arr2" as multidimensional array must have
 *	       bounds for all dimensions except the first.
