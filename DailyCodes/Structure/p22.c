/*	Program 22 :
 *
 *	Topic : Array of Structure.
*/

#include<stdio.h>

struct movie{

	char name[20];
	int count;
	float price;

};

void main(){

	struct movie obj1 = {"kantara", 1, 250};
	struct movie obj2 = {"bramhastra", 3, 550};
	struct movie obj3 = {"Raid", 5, 1050};

	struct movie arr[] = {obj1, obj2, obj3};

	for(int i = 0; i < 3; i++){
	
		printf("%s\n", arr[i].name);
		printf("%d\n", arr[i].count);
		printf("%f\n", arr[i].price);
	}
}
