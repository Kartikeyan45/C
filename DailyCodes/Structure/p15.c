/*	PRogram 15 :
*/

#include<stdio.h>

struct Movie{
	
	char name[20];
	int tickets;
	float price;
}obj1 = {"Kantara", 2, 450};

void fun(){

	struct Movie obj3 = {"Tiger zinda he", 7, 5000};

	printf("%s\n", obj3.name);
	printf("%d\n", obj3.tickets);
	printf("%f\n", obj3.price);
}

void main(){

	struct Movie obj2 = {"Drishyam", 3, 400};

	printf("%s\n", obj1.name);
	printf("%d\n", obj1.tickets);
	printf("%f\n", obj1.price);

	printf("%s\n", obj2.name);
	printf("%d\n", obj2.tickets);
	printf("%f\n", obj2.price);

	fun();
}
