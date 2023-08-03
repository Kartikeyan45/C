
//	Find out the iterations

	
	for(int i = 1; i <= 10; i++){
		
		for(int j = 1; j <= N; j++){
			
			prinf();
		}
	}

/* 	a] 2N	b] n^2	c]10N	d] N + 10
 *
 *
 *  	i	j		iteration
 *
 *  	1	[1,N]		N
 *
 *  	2	[1,N]		N
 *
 *  	3	[1,N]		N
 *
 *  	.
 *  	.
 *  	.
 *
 *  	10	[1,N]		N
 *
 *
 *  	No of iterations : 10N
 *
 *
 *  	1] 1 + 10 + 10		2] 10 + 10N + 10N
 *
 *  		Itr = 10N
 *
 *  		T.C = O(N)
*/  		
