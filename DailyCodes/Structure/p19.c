/*	Program 18 :
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct IPL{

	char name[20];
	int teams;
	double prize;
};

void main(){

	struct IPL *ptr = (struct IPL *)malloc(sizeof(struct IPL));

	strcpy((*ptr).name, "Tata");
	
	ptr-> teams = 8;

	(*ptr).prize = 10.11;

	printf("%s\n", ptr->name);
	printf("%d\n", ptr->teams);
	printf("%f\n", ptr->prize);
}
