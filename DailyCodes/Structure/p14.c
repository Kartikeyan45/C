/*	PRogram 14 :
*/

#include<stdio.h>

struct college{
	
	char name[20];
	int id;
	char add[20];
};

void main(){

	struct college obj1 = {"scoe", 7, "pune"};

	printf("%s\n", obj1.name);
	printf("%d\n", obj1.id);
	printf("%s\n", obj1.add);
}
