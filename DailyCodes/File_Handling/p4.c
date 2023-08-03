/*	Program 4 : 
 *
 *	Topic : File Related functions
*/	 	


/*	1 - fopen
 *
 *		Don parameter astat : fopen("Filename", "mode").
*/	

#include<stdio.h>

void main(){
	
	FILE *fp = fopen("Biencaps.txt", "w");

	printf("%p\n", fp);			

	printf("%d\n", fp -> _fileno);		//3

	printf("%d\n", (*fp)._fileno);		//3
}

/*	Jar file write karat asel tar Biencaps.txt text file exist nahi karat asel tar
 *	structure create karel ani pointer "*fp" la address return karel,already 
 *	exist karat asel tar pointer la address return karel tya file cha.
*/	
