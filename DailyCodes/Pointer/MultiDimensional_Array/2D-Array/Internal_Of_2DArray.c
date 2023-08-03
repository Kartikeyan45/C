/*	Program 8 :
 *
 *	Topic : Relation between 2D-Array and Pointer / Internal of 2D-Array	
*/

#include<stdio.h>

void main(){

	int arr[3][3] = {10,20,30,40,50,60,70,80,90};

	printf("%d\n", arr[0][2]);	//30	
	printf("%d\n", arr[1][0]);	//40
	printf("%d\n", arr[2][1]);	//80

	printf("%p\n", arr);		//100
	printf("%p\n", arr[0]);		//100
	printf("%p\n", arr[1]);		//112
	printf("%p\n", arr[2]);		//124

	printf("%p\n", arr[0][2]);	//108
	printf("%p\n", arr[1][1]);	//116
	printf("%p\n", arr[2][0]);	//124
}

/*	arr[0] mhnje whole 1-row cha address arr[0] = 100
	
 *	arr[1] mhnje whole 2-row cha address arr[0] = 112
	
 *	arr[2] mhnje whole 3-row cha address arr[0] = 124
 *
 *	&arr mhnje whole array cha address i.e arr = 100
 *
 *	&arr + 1 mhnje whole array la skip karun baher jato mahnun &arr+1 = garbage value yeto.
*/	

/*	Internally 2D-Array Ya type madhe jato
 *
 *	Formula =  *[ *(arr + 1 * sizeof(whole 1D-Array i.e 1-row)) + 2 * sizeof(DTP)]
 *			      ^					      ^
 *			      "row no."				      "column no."
 *
 *	eg - 
 *
 *	arr[1][1] Internally hya type madhe jato
 *
 *	= *[ *(arr + 1 * sizeof(whole 1D-Array i.e 1-row)) + 1 * sizeof(DTP)]
 *
 *	= *[ *(100 + 1 * 12) + 1 * 4]
 *
 *	= *[ *(112) + 4]
 *
 *	= *(116)
 *
 *	= ValueAt(116)
 *
 *	arr[1][1] = 50
 *
 *
 *	arr[2][1]
 *
 *	= *[ *(arr + 2 * sizeof(whole 1D array i.e 1-row)) + 1 * sizeof(DTP)]
 *
 *	= *[ *(100 + 2 * 12) + 1 * 4]
 *
 *	= *[ *(124) + 4]
 *
 *	= *(128)
 *
 *	= ValueAt(128)
 *
 *	= 8
*/	
