/*Program 1:

Write a program to print the value and size of the below variables.
Take all values from the user.
	num = 10
	chr = 'S'
	rs = 55.20
	crMoney = 45646.343453
*/



#include<stdio.h>

void main(){

	int num;
	char chr;
	float rs;
	double crMoney;

	printf("Enter number\n");
	scanf("%d", &num);

	printf("Enter character\n");
	scanf(" %c", &chr);

	printf("Enter rupees\n");
	scanf("%f", &rs);

	printf("Enter crore money\n");
	scanf("%lf", &crMoney);

	printf("Enter number :%d\n", num);
	printf("Size of number :%ld\n", sizeof(num));

	printf("Enter character :%c\n", chr);
	printf("Size of character :%ld\n", sizeof(chr));

	printf("Enter rupees :%f\n", rs);
	printf("Size of rupees :%ld\n", sizeof(rs));

	printf("Enter crore money :%lf\n", crMoney);
	printf("Size of crore money :%ld\n", sizeof(crMoney));

}
