
#include<stdio.h>

float findSqrt(int num){
	
	int start = 0, end = num;

	int mid;

	float ans;

	while(start <= end){
		
		int mid = (start + end) / 2;

		if(mid * mid == num){
			
			ans = mid;
			break;
		}

		if(mid * mid < num){
			
			ans = start;

			start = mid + 1;
		}

		else{
			
			end = mid - 1;
		}
	}

	float increm = 0.1;

	for(int i = 0; i < 5; i++){
		
		while(ans * ans <= num){
			
			ans = ans + increm;
		}

		ans = ans - increm;

		increm = increm / 10;
	}

	return ans;
}

void main(){
	
	int num;
	printf("Enter Number\n");
	scanf("%d", &num);

	float ret = findSqrt(num);

	printf("Square Root of %d is %f\n", num, ret);
}
