/*	
 *	Program 1 : Count Number of 0's in Number
*/

#include<stdio.h>

int count0(int num){
	
	int count = 0;
	
	if(num == 0){
		
		return 1;
	}

	while(num){
	
		if(num % 10 == 0){
		
			count++;
		}

		num = num / 10;
	}

	return count;
}

void main(){
	
	int num;
	printf("Enter Num\n");
	scanf("%d", &num);

	int ret = count0(num);
	printf("%d\n", ret);
}
