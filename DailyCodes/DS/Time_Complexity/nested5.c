
//	Find out the iterations

	
	for(int i = 1; i <= N; i++){
		
		for(int j = 1; j <= (2 ^ i); j++){
			
			prinf();
		}
	}

/* 	a] 2 ^ N	b] 2 * (2 ^ N - 1)	c] 2 * 2N	d] Infinite
 *
 *
 *  	i	j			iteration
 *
 *  	1	[1,2]			2 = 2 ^ 1
 *
 *  	2	[1,2,3,4]		4 = 2 ^ 2
 *
 *  	3	[1,2,3,4,5,6,7,8]	8 = 2 ^ 3
 *
 *  	.
 *  	.
 *  	.
 *
 *  	N				2 ^ N			
 *
 *
 *  	G.P = a * (r^N - 1 / r - 1)
 *
 *  	2^1 + 2^2 + 2^3 + ....... + 2^N
 *
 *  		= 2 * (2^N - 1 / 1 )
 *
 *  		= 2 * (2^N - 1)
 *
 *
 *  	No of iterations = 2 * (2^N - 1)
 *
 *
 *  		Itr	 = 2 * (2^N - 1) 
 *
 * 		T.C      = O(2 ^ N)	== exponential time complexity
 *
*/  		
