
//	Calculate No of iterations and Time Complexity

	for(int i = 1; i <= N; i++){
		
		s = s + i;
	}

	
/*	1] n^2		2] N		3] N / 2	4] log(N)
 *
 *
 *	No. of insructions = [1, N]
 *			  
 *			  = N - 1 + 1
 *
 *			  = N
 *
 *
 *	No. of instructions = 1 + N + 2N + N
 *
 *			    = 1 + 4N
 *
 *			    = N
 *
 *			    
 *	Time Complexity	= O(N)
*/	
