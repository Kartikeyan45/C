/*	Program 7 :
 *
 *	3] fscanf
 *		It has 3 paramters
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("biencaps.txt", "w");

	char ch;

	fscanf(fp, "%c", &ch);	

	printf("%c\n", ch);	
}
