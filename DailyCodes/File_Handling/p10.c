/*	Program 10 :	
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("c2w.txt", "r+");

	fprintf(fp, "Exception Handling1\n");
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
