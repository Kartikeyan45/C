/*	Program 8 :
 *
 *	3] fscanf
 *		It has 3 paramters
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("biencaps.txt", "w");

	char ch;

	fscanf(stdin, "%c", &ch);	//kartik	

	printf("%c\n", ch);		//k
}
