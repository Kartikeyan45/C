/*
 * 	PRogram : Count Number of Stpes to obtain 0
*/

#include<stdio.h>

/*
int countSteps(int num){

	int count = 0;

	while(num){
	
		if(num % 2 == 0){
			
			num = num / 2;
		}else{
			
			num = num - 1;
		}

		count++;
	}

	return count;
}

*/

int countSteps(int num, int count){
	
	if(num == 0){
	
		return count;
	}

	if(num % 2 == 0){
		
		countSteps(num = num/2, ++count);
	}
	
	if(num % 2 != 0){
		countSteps(num = num - 1, ++count);
	}
}

void main(){
	
	int num;
	printf("Enter Num\n");
	scanf("%d", &num);
	
	int count = 0;

	int ret = countSteps(num, count);
	printf("Count is : %d\n", ret);
}
