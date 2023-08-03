/*	PRogram 17 :
*/

#include<stdio.h>

struct OTT{

	char name[20];
	int account;
	float price;
};

void main(){

	struct OTT obj1 = {"Amazon Prime", 1, 129.99};

	struct OTT obj2;

	printf("Enter the date\n");
	gets(obj2.name);
	scanf("%d\n", &obj2.account);
	scanf("%f\n", &obj2.price);

	printf("%s\n", obj1.name);
	printf("%d\n", obj1.account);
	printf("%f\n", obj1.price);

	printf("%s\n", obj2.name);
	printf("%d\n", obj2.account);
	printf("%f\n", obj2.price);
	
}
