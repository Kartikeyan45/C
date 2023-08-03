/*	Program 3 :
 *
 *	In homogeneous array to access homogeneous data, the only
 *	possible way is using Array of Void Pointers..
*/

#include<stdio.h>

void main(){

	int x = 10;
	char ch = 'A';
	double d = 20.86;

	void *arr[3] = {&x, &ch, &d};

	printf("%p\n", arr[0]);		//0x114
	printf("%p\n", arr[1]);		//0x113
	printf("%p\n", arr[2]);		//0x118

	printf("%d\n", *(int*)arr[0]);	//10
	printf("%c\n", *(char*)arr[1]);		//A
	printf("%lf\n", *(double*)arr[2]);	//20.86
}


//	character always gets memory first than other datatypes.	
