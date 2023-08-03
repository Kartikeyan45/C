/*	Program 9 :
 *
 *	Pointer fakt Substraction Karu shakto,
 *	addition, multiplication, division nahi karu shakt.
 *
 *	Pointer to integer addition hot, pointer to character pan hot,
 *	pointer to float, double hot nahi.
*/

#include<stdio.h>

void main(){

	int arr[] = {10,20,30,40};

	int *ptr1 = &(arr[0]);
	int *ptr2 = &(arr[1]);

	int x = ptr1 - ptr2;			

	printf("%d\n", x);			//-1

	printf("%d\n", ptr1  * ptr2);		//error

	printf("%d\n", ptr1 / ptr2);		//error

	printf("%d\n", ptr1 % ptr2);		//error
}
