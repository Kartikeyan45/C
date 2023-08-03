/*	PRogram 18 :
 *
 *	Topic : fgets, fputs
*/

#include<stdio.h>

void main(){
	
	FILE *fp = fopen("success.txt", "r");

	char compName[20];

	fgets(compName, 12, fp);

	puts(compName);
}

//	char cha count 0 pasun start hoto
