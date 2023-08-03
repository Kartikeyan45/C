/*	Program 1 :
 *
 *	Initialization is done using two types :
 *
 *		1 - char arr1[3][10] = {"kartik","Onkar","Anil"};
 *
 * 		2 - char arr2[][10] = {{'K','a','r','t','i','k','\0'} , {'O','n','k','a','r','\0'} , {'A','n','i','l','\0'}};
 *
*/	

#include<stdio.h>

void main(){

	char arr[3][10] = {"Anil","Sunil","Ash"};

	printf("%p\n", &(arr[1]));	//0x100

	printf("%p\n", &(arr[1][1]));	//0x111

	printf("%p\n", arr[2]);		//0x120
}
