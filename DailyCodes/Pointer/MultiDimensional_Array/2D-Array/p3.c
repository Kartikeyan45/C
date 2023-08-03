/*	Program 3 :
*/

#include<stdio.h>

void main(){

	int arr5[][3] = {{1,2,3}, {4,5}, {6}};

	int arr6[][3] = {1,2,3,4,{5,6}};
}

/*	warning : braces around scalar initializer
 *		  int arr6[][3] = {1,2,3,4,{5,6}};
 *		  ^
 *
 *	note : near initialization for "arr6[1][1]"
 *
 *
 *	warning : excess elements in scalar initializer
 *		  int arr6[][3] = {1,2,3,4,{5,6}};
 *		  			    ^
 *
 *	arr5	1 2 3		arr6	1 2 3
 *		4 5 0			4 0 0
 *		6 0 0			5 6 0
*/		
