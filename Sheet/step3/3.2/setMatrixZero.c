
/*

Set Matrix Zero

Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0

*/

//	1 - Brute

/*
#include<stdio.h>

void markRow(int arr[][3], int row, int col, int i){
	
	// set all non-zero elements as -1 in the row i:
	for(int j = 0; j < col; j++){
		
		if(arr[i][j] != 0){
			
			arr[i][j] = -1;
		}
	}
}

void markCol(int arr[][3], int row, int col, int j){
	
	// set all non-zero elements as -1 in the col j:
	for(int i = 0; i < row; i++){
		
		if(arr[i][j] != 0){
			
			arr[i][j] = -1;
		}
	}
}

void setMatrix(int arr[][3], int row, int col){

	// Set -1 for rows and cols
	// that contains 0. Don't mark any 0 as -1:
	
	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){
			
			if(arr[i][j] == 0){
				
				markRow(arr, row, col, i);
				markCol(arr, row, col, j);
			}
		}
	}

	// Finally, mark all -1 as 0:
	for (int i = 0; i < row; i++) {

        	for (int j = 0; j < col; j++) {

	        	if (arr[i][j] == -1) {

        		        arr[i][j] = 0;
	        	}
        	}
	}
}

void main(){
	
	int arr[3][3] = {1,1,1,1,0,1,1,1,1};
	
	int row = 3, col = 3;

	setMatrix(arr, row, col);

	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){

			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}


Time Complexity: O((N*M)*(N + M)) + O(N*M), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: Firstly, we are traversing the matrix to find the cells with the value 0. It takes O(N*M). Now, whenever we find any such cell we mark that row and column with -1. This process takes O(N+M). So, combining this the whole process, finding and marking, takes O((N*M)*(N + M)).
Another O(N*M) is taken to mark all the cells with -1 as 0 finally.

Space Complexity: O(1) as we are not using any extra space.

*/

/*
Better Approach (Using two extra arrays): 

In the previous approach, we were marking the row and column with -1 while traversing the matrix. Here we will reduce the time complexity by marking the cells after the traversal.

*/

/*
#include<stdio.h>

void setMatrix(int arr[][3], int n, int m){
	
	int row[n] = {0};	// row array
	int col[n] = {0};	// col array
				
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

        		if (arr[i][j] == 0) {

                		// mark ith index of row wih 1:
                		row[i] = 1;

                		// mark jth index of col wih 1:
                		col[j] = 1;
            		}
        	}
    	}

    	// Finally, mark all (i, j) as 0
    	// if row[i] or col[j] is marked with 1.
	
    	for (int i = 0; i < n; i++) {

        	for (int j = 0; j < m; j++) {

            		if (row[i] || col[j]) {

        	        	arr[i][j] = 0;
	        	 }
        	}
    	}
}

void main(){
	
	int arr[3][3] = {1,1,1,1,0,1,1,1,1};
	
	int row = 3, col = 3;

	setMatrix(arr, row, col);

	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){

			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}

ime Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: We are traversing the entire matrix 2 times and each traversal is taking O(N*M) time complexity.

Space Complexity: O(N) + O(M), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: O(N) is for using the row array and O(M) is for using the col array.

*/

/*
Optimal Approach (without using any extra space): 
*/

#include<stdio.h>

void setMatrix(int arr[][3], int n, int m){
	

	// int row[n] = {0}; --> matrix[..][0]
	// int col[m] = {0}; --> matrix[0][..]

	int col0 = 1;
    	// step 1: Traverse the matrix and
    	// mark 1st row & col accordingly:
    	for (int i = 0; i < n; i++) {

        	for (int j = 0; j < m; j++) {

            		if (arr[i][j] == 0) {

                	// mark i-th row:
                	arr[i][0] = 0;

                	// mark j-th column:
                	if (j != 0)
                    		arr[0][j] = 0;
                	else
                    		col0 = 0;

            		}
        	}
    	}

    	// Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    	for (int i = 1; i < n; i++) {
        	for (int j = 1; j < m; j++) {

            		if (arr[i][j] != 0) {

                		// check for col & row:
				
 		               	if (arr[i][0] == 0 || arr[0][j] == 0) {

	                    		arr[i][j] = 0;
                		}
            		}	
        	}
    	}

    	//step 3: Finally mark the 1st col & then 1st row:
    	if (arr[0][0] == 0) {
        	for (int j = 0; j < m; j++) {
        	    	arr[0][j] = 0;
        	}
    	}

	if (col0 == 0) {

        	for (int i = 0; i < n; i++) {

            		arr[i][0] = 0;
        	}
    	}
}

void main(){
	
	int arr[3][3] = {1,1,1,1,0,1,1,1,1};
	
	int row = 3, col = 3;

	setMatrix(arr, row, col);

	for(int i = 0; i < row; i++){
		
		for(int j = 0; j < col; j++){

			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}


