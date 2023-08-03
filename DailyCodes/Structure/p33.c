/*	Program 33 :
 *
 *	Topic : Bit Field
*/

#include<stdio.h>

#pragma pack(1)

struct Demo{

	int x : 4;
	int y;
};

void main(){

	struct Demo obj = {30, 500};
}

/*	error : overflow in conversion from "int" to "signed char:4" 
 *		changes from "30" to "-2"
 *
 *		struct Demo obj = {30, 500};
 *				   ^
*/				   
