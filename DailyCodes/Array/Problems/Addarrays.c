
/*	PRogram  : Add Arrays 
 *		   
 *		   Input : [3,4,5,1,2]
 *		   Ouput : true
*/

#include<stdio.h>
#include<stdbool.h>

int reverse(

bool sort(int arr[], int size){
	
	int i = size - 1;
	int j = size - 1;
	int carry = 0;

	while(i >= 0 && j >=0){
		
		int val1 = arr[i];
		int val2 = brr[j];

		int sum = val1 - val2 + carry;

		carry = sum / 10;
		sum = sum % 10;i
		ans = ans + sum;

		i--;
		j--;
	}

	//first case
	while(i >= 0){
		
		int sum = arr[i] + carry;
		carry = sum / 10;
		sum = sum % 10;
		ans = ans + sum;

		i--;
	}

	//second case
	while(i >= 0){
		int sum = brr[j] + carry;
		carry = sum / 10;
		sum = sum % 10;
		ans = ans + sum;

		j--;
	}

	//third case
	while(carry != 0){
		int sum = carry;
		carry = sum / 10;
		sum = sum % 10;
	}
	printf("%d\n", ans);
	reverse(ans);
	return ans;
	
}

void main(){
	
	int size;
	printf("Enter Size\n");
	scanf("%d", &size);

	int arr[size];
	
	printf("Enter Array Elements\n");
	for(int i = 0; i < size; i++){
		
		scanf("%d", &arr[i]);
	}

	printf("Array Elements are\n");
	for(int i = 0; i < size; i++){
		
		printf("%d\n", arr[i]);
	}

	int ret = sort(arr, size);
	printf("Value %d", ret);
}
