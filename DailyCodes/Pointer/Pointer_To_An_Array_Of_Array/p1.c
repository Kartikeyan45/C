/*	PRogram 1 :
 *
 *	Topic : Pointer to an Array of Array
*/

#include<stdio.h>

void main(){

	int arr1[4] = {1,2,3,4};
	int arr2[4] = {5,6,7,8};
	int arr3[4] = {9,10,11,12};

	int (*ptr1[4])[3] = {&arr1, &arr2, &arr3};	//warning

	int (*ptr2[3])[4] = {&arr1, &arr2, &arr3};	//Here [3] represents how many arrays are there, 
							// [4] represents arrays of how many elements each.
	
	printf("%d\n", *(*(ptr1[0])));	//1	

	printf("%d\n", *(*(ptr1[1])));	//5

	printf("%d\n", *(*(ptr1[2])));	//9

	printf("%d\n", *(*(ptr2[0])));	//1

	printf("%d\n", *(*(ptr2[1])));	//5

	printf("%d\n", *(*(ptr2[2])));	//9

}
