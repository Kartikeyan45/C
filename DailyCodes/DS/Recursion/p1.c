
/*	Program 1:
 *
 *	Q] What is recursion ?
 *	A] Problem Statement la sub-problem madhe divide karne
 *	   ani tya problem che task achieve karne mhnje "Recursion"
 *
 *	eg :- First u should tell Binary Search,
 *	      Second Merge Sort, Quick Sort,
 *	      and Atlast Trees, Graph
 *
 *	"C madhe Stack OverFlow kiva Stack Smashing asa error yet nahi
 *	 karan C language native language ahe"
*/	   

//	Pseudo Code
#include<stdio.h>

void fun(){

	printf("In fun\n");
	fun();
}

void main(){

	fun();
}
