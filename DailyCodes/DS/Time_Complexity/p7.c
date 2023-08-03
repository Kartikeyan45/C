
//	Calculate No of iterations and Time Complexity
	
	int i = N;

	while(i > 1){
		
		i = i / 2;
	}

	
/*	1] N	2] sqrt(N)	3] N / 2	4] log(N)
 *
 * 	No. of instructions for loop =  log(N)
 *
 *		i
 *
 *		N
 *
 *		N/2^1
 *
 *		N/2^2
 *
 *		N/2^3
 *
 *		N/2^k
 *
 *
 *		 = N/2^k  >  1
 *
 *		 = N/2^k = 1
 *
 *		   N = 2^k
 *
 *		   log N = log 2^k
 *
 *		   k = log_2 N
 *
 *			    
 *	Time Complexity	= O(log N)
*/	
