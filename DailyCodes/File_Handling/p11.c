/*	Program 11 :	
 *
 *	Append Mode
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("biencaps.txt", "a");

	fprintf(fp, "Product Base\n");
}

/* 	c2w.txt file madhe data overwrite hot ahe changes kelyavar.
 *
 * 	
 * 	"Modes		Descriptor"
 *
 * 	  r		   reading
 * 	  w		   writing
 * 	  r+		   read-write
 * 	  w+		   write-read
 * 	  a+		   write-read
*/
