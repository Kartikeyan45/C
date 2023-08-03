
/*

Program to generate Pascal’s Triangle

Problem Statement: Given an integer N, return the first N rows of Pascal’s triangle.

In Pascal’s triangle, each number is the sum of the two numbers directly above it as shown in the figure below:

Input Format: N = 5

Result:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Explanation: There are 5 rows in the output matrix. Each row corresponds to each one of the rows in the image shown above.

Input Format: N = 1

Result:
    1

*/

/*	Question 1 : Given row and column, find the element at that place.
 *
 *	row = 5, col = 3
 *
 *	o/p : 6
 *
 *	n
 *	 C  =      n! / r! * (n - r)!
 *	  r 
 *
 *	
 *	R-1	    4
 *	   C	 =   C	  =  4! / 2! * 2! = 6
 *	    C-1	      2
*/


/*			Calculating nCr
#include<stdio.h>

int nCr(int n, int r){
	
	long long res = 1;

	for(int i = 0; i < r; i++){
		
		res = res * (n - i);
		res = res / (i + 1);
	}

	return res;
}
*/

/*				Solution of Question 1
#include<stdio.h>

int nCr(int n, int r){
	
	long long res = 1;

	for(int i = 0; i < r; i++){
		
		res = res * (n - i);
		res = res / (i + 1);
	}

	return res;
}

void main(){
	
	int n = 5, r = 3;

	int ret = nCr(n-1, r-1);

	printf("%d\n", ret);
}

*/

/*	Question 2 : Print any nth row of pascal triangle.
 *
 *	row = 5
 *
 *	o/p : 1 4 6 4 1
*/	

/*			Solution of Q2
#include<stdio.h>

int nThRow(int n, int r){

	int ans = 1;

	printf("%d ", ans);
	
	for(int i = 1; i < n; i++){
		
		ans = ans * (n - i);

		ans = ans / i;

		printf("%d ", ans);
	}

	printf("\n");
}

void main(){
	
	int n = 5, r = 3;

	nThRow(n, r);
}
*/

/*	Question 3 : Given N, print the entire tiangle.
 *
 *	N = 6
*/

#include<stdio.h>

void generateRow(int row){
	
	long int ans = 1;

	printf("%ld ", ans);

	for(int col = 1; col < row; col++){
		
		ans = ans * (row - col);

		ans = ans / col;

		printf("%ld ", ans);
	}

	printf("\n");
}

void pascal(int n){

	for(int i = 1; i <= n; i++){

		generateRow(i);
	}
}

void main(){
	
	int row = 5;

	pascal(row);
}
