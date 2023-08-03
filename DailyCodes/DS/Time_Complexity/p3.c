
//	Calculate No of iterations and Time Complexity
	
	void func(int N, int M){

		for(int i = 1; i <= N; i++){
		
			printf("%d\n", i);
		}

		for(int j = 1; j <= M; j++){
			
			printf("%d\n", j);
		}



	
/*	1] N		2] N + M	3] N * M	4] N ^ M
 *
 *
 *	No. of insrtuctions for loop1 = [1, N]
 *			  
 *		       		      = N - 1 + 1
 *
 *			  	      = N
 *
 * 	No. of instructions for loop2 = [1, M]
 *
 * 				      = M + 1 - 1
 *
 * 				      = M
 *
 *
 *	No. of instructions for loop1 = 1 + N + N + N	
 *
 *	      			      = 1 + 3N
 *
 *	No. of instructions for loop2 = 1 + M + M + M	
 *
 *	      			      = 1 + 3M
 *
 *	Combining this  : 1 + 3N + 1 + 3M
 *
 *			: 3M + 3N + 2
 *
 *			: N + M
 *			    
 *	Time Complexity	= O(N + M) or O(max(M, N))
*/	
