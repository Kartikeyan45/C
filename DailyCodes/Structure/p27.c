/*	PRogram 27 :
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
};

void fun(struct demo obj){
	
	printf("%d\n", obj.x);
	printf("%f\n", obj.y);
}

void gun(struct demo *ptr){

	printf("%d\n", ptr->x);
	printf("%f\n", (*ptr).y);
}

void main(){

	struct demo obj = {10,20.5};

	fun(obj);	//call by value

	gun(&obj);	//call by referrence
}

/*	Function la structure pass karaycha asel tar 
 *	nemhi call by reference ni karaycha
*/	
