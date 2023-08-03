/*	PRogram 2 :
 *
 *	LB- Reverse
*/

#include<stdio.h>
#include<string.h>

char *myStrRev(char str[], int i, int j){
	
	if(i > j){
		
		return str;
	}

	if(i < j){
	
		return myStrRev(str, i+1, j-1);
	}
}

void main(){

	char str[] = "kartik";

	char *arr = myStrRev(str, 0, 5);

	puts(arr);
}
