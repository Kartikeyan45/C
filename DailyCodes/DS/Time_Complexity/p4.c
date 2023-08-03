
//	Calculate No of iterations and Time Complexity
	
	for(int j = 1; j <= M; j++){
			
		printf("%d\n", j);
	}

	
/*	1] log(N)	2] sqrt(N)	3] N / 2	4] (N + 1) / 2		5] N
 *
 *
 *
 *	n = 10, 	i =  1 + 3 + 5 + 7 + 9  / 5,	(n+1)/2 = (10+1)/2 = 5
 *
 *	n = 11, 	i =  1 + 3 + 5 + 6 + 9 + 11 + 13,	(n+1)/2 = (13+1)/2 = 7
 *
 *
 * 	No. of instructions for loop =  (n + 1) / 2
 *
 *
 *	No. of instructions for loop  = (n + 1) / 2
 *
 *	      			      = n / 2 + 1 / 2
 *
 *	      			      = 1 / 2 * N
 *
 *	      			      = N
 *			    
 *	Time Complexity	= O(N)
*/	
