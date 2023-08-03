/*	Program 21 :
 *
 *	Topic : Pointer to a Structure.
*/

#include<stdio.h>

struct movie{

	char name[20];
	int count;
	float price;
}obj1 = {"Kantara", 5, 1000};

void main(){

	struct movie *ptr = &obj1;

	printf("%s\n", obj1.name);
	printf("%d\n", obj1.count);
	printf("%f\n", obj1.price);

	printf("%s\n", ptr->name);
	printf("%d\n", ptr->count);
	printf("%f\n", (*ptr).price);
}
