/*	PRogram 4 :
*/

#include<stdio.h>

void main(){

	int psize, rsize, csize;
	printf("Enter psize, rsize, csize :\n");
	scanf("%d %d %d", &psize, &rsize, &csize);

	int arr[psize][rsize][csize];

	printf("Array Elements are :\n");
	
	int sum = 0;

	for(int i = 0; i < psize; i++){
	
		for(int j = 0; j < rsize; j++){
		
			for(int k = 0; k < csize; k++){
			
				scanf("%d", &arr[i][j][k]);

				sum = sum + arr[psize][rsize][csize];
			}
		}
	}

	printf("%d\n", sum);
}
