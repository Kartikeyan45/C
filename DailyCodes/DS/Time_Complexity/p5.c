
//	Calculate No of iterations and Time Complexity
	
	for(int i = 1; i * i <= N; i++){
			
		printf("%d\n", i);
	}

	
/*	1] N	2] sqrt(N)	3] N / 2	4] N ^ 2
 *
 *
 * 	i * i <= N
 *
 * 	i^2 <= N
 *
 * 	i <= sqrt(N)
 *			    
 *	Time Complexity	= O(sqrt(N))
*/	
