/*	Program 2 :
 *
 *	Topic : 2D-Array
 *
 *	2D-Array madhe column dena compulsory ahe, nahitar error milto
*/

#include<stdio.h>

void main(){
	
	int arr1[3][3] = {1,2,3,4,5,6,7,8,9};	

	int arr2[2][3] = {1,2,3,4};	

	int arr3[][3] = {1,2,3,4,5,6,7,8,9};	

	int arr2[3][] = {1,2,3,4,5,6,7,8,9};	//error : array type has incomplete element type "int[]"

}

/*	arr1	1 2 3
 *		4 5 6
 *		7 8 9
 *
 *	arr2	1 2 3	
 *		4 0 0
 *
 *	arr3	1 2 3
 *		4 5 6
 *		7 8 9
*/		
