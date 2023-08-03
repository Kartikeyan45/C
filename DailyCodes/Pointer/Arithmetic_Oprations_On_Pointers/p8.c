/*	Program 8 :
 *
 *	Topic : Substraction of Pointers
*/

#include<stdio.h>
void main(){

	int arr[] = {10,20,30,40};

	int *ptr1 = &(arr[0]);

	int *ptr2 = &(arr[3]);

	printf("%d\n", *ptr1);		//10
	printf("%d\n", *ptr2);		//40
	
	//Substraction Of Pointers
	printf("%d\n", ptr2-ptr1);	// 3 //	Ya donhi printf line la WARNING YETO Karan donhi pointer 
					//	cha substraction kelya var value yeto, toh value LONG INT
	printf("%d\n", ptr1-ptr2);	//-3 //	format madhe asto


	printf("%ld\n", ptr1-ptr2);	//-3 //correct format speciffier for long int.
	printf("%ld\n", ptr2-ptr1);	//3
}

/*	Don pointer cha difference MEANINGFULL rahil 
 *	jeva doni pointer ekach array madhle elements la
 *	point kartat.
*/

/*	ptr2 - ptr1 = ptr2 - ptr1 / sizeof(DTP)
 *
 *	ptr1 - ptr2 = ptr1 - ptr2 / sizeof(DTP)
*/	


