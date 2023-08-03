/*	Program 5 : 
 *
 *	2] fprintf
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("c2w.txt", "w");

	fprintf(fp, "File Handling");	
}

/*	c2w.txt file madhe ja File Handling write kar c2w.txt file madhe karan fp detoy parameter madhe
 *
 *
 *	printf("HEllo") ==  fprintf(stdout , "Hello");
*/	
