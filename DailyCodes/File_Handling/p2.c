/*	Program 2 : 
 *
 *	File chya don type ahet - 1] Text and 2] Binary
 *
 *	Topic : File Related functions
*/	 	


/*	1 - fopen
 *
 *		Don parameter astat : fopen("Filename", "mode").
*/	

#include<stdio.h>

void main(){
	
	FILE *fp = fopen("c2w.txt", "r");

	printf("%p\n", fp);
}

/*	Jar file read karat asla ani c2w.txt text file exist nahi karat asel tar toh address return karel "nil"
 *	ani Jar exist karat asel tar toh file cha structure create karto ani pointer "*fp"
 *	la address return karel tya file cha.
*/	
