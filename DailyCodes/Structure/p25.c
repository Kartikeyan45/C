/*	Program 25;
*/

#include<stdio.h>

struct demo{

	int x;
	int y;
}obj1;

void main(){

	//obj2 = {10, 20};	//error	
	
	obj1.x = 10;
	obj1.y = 20;

	printf("%d\n", obj1.x);
	printf("%d\n", obj1.y);
}
