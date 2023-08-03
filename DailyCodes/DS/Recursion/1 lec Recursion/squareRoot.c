
#include<stdio.h>

void main(){
	
	int num;
	printf("Enter Number\n");
	scanf("%d", &num);

	float sqrt, temp;

	sqrt = num / 2;

	temp = 0;

	while(sqrt != temp){
		
		temp = sqrt;

		sqrt = (num / temp + temp) / 2;
	}

	printf("Square Root of %d is %f\n", num, sqrt);
}
