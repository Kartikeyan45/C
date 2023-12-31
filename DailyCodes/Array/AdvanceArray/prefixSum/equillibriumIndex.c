
/*	PRog : Eqiliibrium Index of the array
 *
 *	You are given an array A of integers of size N.
 *	Your task is to find the equillibrium index of the given array
 *	The equillibrium index of an array is an index such that the sum of elements at lower indexes are equal to the sum of elements at higher indexes.
 *	If there is no elements that re at lower indexes or at higher indexes, then the corresponding sum of elements is considered as 0.
 *
 *	Note : array indexing starts from 0
 *
 *	If there is no equillibrium index then return -1.
 *	If there is more than one equllibrium index then return the minimum index.
 *
 *	Input : A = [-7,1,5,2,-4,3,0]
 *	Ouput : 3
 *	Expal : 3 is an equilibrium index, because ;
 *		A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
 *
 *	Input : A = [1,2,3]
 *	Ouput : -1
 *	Expla : There is no such index.
*/

