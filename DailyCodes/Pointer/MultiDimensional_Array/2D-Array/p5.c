/*	Program 5 :
*/

#include<stdio.h>

void main(){

	int arr[2][3];

	printf("Enter Elements :\n");

	for(int row = 0; row < 2; row++){
	
		for(int col = 0; col < 3; col++){
		
			scanf("%d", &arr[row][col]);
		}
	}

	for(int row = 0; row < 2; row++){
	
		for(int col = 0; col < 3; col++){
		
			printf("%d ", arr[row][col]);
		}

		printf("\n");
	}

	for(int i = 0; i < 6; i++){
	
		printf("%d\n", arr[i]);
	}
}

/*	Prints address of each element with change of 12
*/	
