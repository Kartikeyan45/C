/*	Program 20 :
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct society{

	char name[20];
	int wings;
	float rent;
};

void main(){

	struct society *ptr = (struct society *)malloc(sizeof(struct society));

	strcpy(ptr->name, "Sunshine");
	ptr->wings = 18;
	(*ptr).rent = 10.50;

	printf("%s\n", ptr->name);
	printf("%d\n", ptr->wings);
	printf("%f\n", ptr->rent);
}
