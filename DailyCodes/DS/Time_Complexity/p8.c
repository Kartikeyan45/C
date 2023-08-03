
//	How many times we have to divide N by 2 to make it 1

	
/*	1] N	2] sqrt(N)	3] N / 2	4] log(N)
 *
 * 	No. of instructions for loop =  log(N)
 *
 *		Here N = 10
 *
 *				i
 *
 *		N		10 
 *
 *		N/2^1		10/2
 *
 *		N/2^2		10/4
 *
 *		N/2^3		10/8
 *
 *		N/2^k		N/N^k
 *
 *
 *		 = 10 /2^k  >  1
 *
 *		 = 10 /2^k = 1
 *
 *		   10 = 2^k
 *
 *		   log_2 10 = log_2 2^k
 *
 *		   k = log_2 10
 *
 *			    
 *	Time Complexity	= O(log N)
*/	
