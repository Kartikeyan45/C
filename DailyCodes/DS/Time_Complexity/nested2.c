
//	Find out the iterations

	
	for(int i = 1; i <= N; i++){
		
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
 *  	N	[1,N]		N
 *
 *
 *  	No of iterations : N*N
 *
 *
 *  	1] 1 + N + 2N		2] N + N^2 + 2N^2
 *
 *  		Itr = 3N^2 + 4N + 1
 *
 *  		T.C = O(N^2)
*/  		
