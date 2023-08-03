/*
 * 	PRogram : Count Number of 0's in number
*/

#include<stdio.h>

/*
int count0(int num){

	int count = 0;

	while(num){
	
		if(num % 10 == 0){
			
			count++;
		}

		num = num / 10;
	}

	return count;
}
*/

int count0(int num, int count){
	
	if(num == 0 && count == 0){
	
		return count;
	}

	if(num % 10 == 0){
		
		return 1 + count0(num/10, count);
	}

	return count0(num/10, count);
}

void main(){
	
	int num;
	printf("Enter Num\n");
	scanf("%d", &num);
	
	int count = 0;

	int ret = count0(num, count);
	printf("Count is : %d\n", ret);
}
