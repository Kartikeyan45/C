/*	PRogram 26 :
 *
 *	Topic : Passing Structure to a function
 *		
 *		1 - Passing structure object
 *		2 - Passing structure &object
*/

#include<stdio.h>

struct demo{

	int x;
	float y;
	int z;
};

void main(){

	int arr[] = {10,20,30,40};

	struct demo obj = {10,20.5,40};

	printf("%p\n", &arr[0]);	//0x100
	printf("%p\n", arr);		//0x100

	printf("%p\n", &obj.x);		//0x200

	printf("%p\n", &obj);		//0x200	//correct way

	printf("%p\n", obj);			//wrong way
}

/*	Function la structure pass karaycha asel tar 
 *	nemhi call by reference ni karaycha
*/	
