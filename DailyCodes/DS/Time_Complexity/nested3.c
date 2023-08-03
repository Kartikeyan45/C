
//	Find out the iterations

	
	for(int i = 1; i <= N; i++){
		
		for(int j = 1; j <= i; j++){
			
			prinf();
		}
	}

/* 	a] 2N	b] n^2	c]10N	d] N + 10
 *
 *
 *  	i	j		iteration
 *
 *  	1	[1,1]		1
 *
 *  	2	[1,2]		2
 *
 *  	3	[1,3]		3
 *
 *  	.
 *  	.
 *  	.
 *
 *  	N	[1,N]		N
 *
 *
 *  	1 + 2 + 3 + ........ + N-1 + N
 *
 *  		= N * (N + 1) / 2
 *
 *  		= Gauss Theorem
 *
 *
 *  	No of iterations = N * (N + 1) / 2
 *
 *  			 = N^2 + N / 2
 *
 *  			 = N^2/2 + N
 *
 *  		Itr	 = N^2
 *
 * 		T.C      = O(N^2)
 *
 *
 *  	
*/  		
