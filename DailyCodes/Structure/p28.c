/*	Program 28 :
 *
 *	Topic : Unnamed Structure / Unanonymous structure.
*/

#include<stdio.h>

struct{

	int x;
	int y;
}obj = {10,20};

void main(){
	
//	struct obj2 = {20, 30};		//error	

	printf("%d\n", obj.x);	//10
	printf("%d\n", obj.y);	//20
}
