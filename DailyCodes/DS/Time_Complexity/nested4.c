
//	Find out the iterations

	
	for(int i = 1; i <= N; i++){
		
		for(int j = 1; j < N; j = j * 2){
			
			prinf();
		}
	}

/* 	a] N * (N + 1) / 2	b] (N^2 + 2*N + 1) / 2		c] N + log_2 (N) 	d] N * log_2 * (N)
 *
 *
 *  	i	j			iteration
 *
 *  	1	[1,log_2 1]		log_2 1
 *
 *  	2	[2,log_2 2]		log_2 2
 *
 *  	3	[3,log_2 3]		log_2 3
 *
 *  	.
 *  	.
 *  	.
 *
 *  	N	[N,log_2 N]		log_2 N
 *
 *
 *  	No of iterations = N * log_2 (N)
 *
 *  		
 *  		1] 1 + N + 2N  		&&	2] N + N log_2 N + 2N log_2 N
 *
 *
 *  				== 3N log_2 (N) + 4N + 1
 *
 *  		Itr	 = N log_2 (N)
 *
 * 		T.C      = O(N * log_2 (N))
 *
*/  		
