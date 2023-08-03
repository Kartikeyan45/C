/*	Program 24 :
 *
 *	Topic : fseek 
 *
 *		Random accessing Files
 *
 *		SEEK_SET = 0 (starting pasun)
 *		SEEK_CUR = 1 (current pasun)
 *		SEEK_END = 2 (ending pasun)
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("success.txt", "r");

	fseek(fp, 10, 0);	//10 char pasun from starting

	char ch;

	while((ch = fgetc(fp)) != EOF){
		
		printf("%c", ch);
	}
}
