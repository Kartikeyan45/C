
/*	Program 2 : CountStep LeetCode problem
 *
 *	if N = 14 then,
 *
 *		if N is even divide N by 2,
 *		then if N is odd subtract by 1,
 *		.
 *		.
 *		.
 *		Repeat steps until we get 0
*/

#include<stdio.h>

int countStep(int num){
	
	int step = 0;

	while(num){
		
		if(num % 2 == 0){
			
			num = num / 2;
		}else{
			
			num = num - 1;
		}

		step++;
	}

	return step;
}

void main(){

	int num;
	printf("Number is :\n");
	scanf("%d", &num);

	int ret = countStep(num);
	printf("%d\n", ret);
}

