/*	Program 25 :
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

	fseek(fp, -7, 2);	//from ending -7 char pasun starting from -1

	char ch;

	while((ch = fgetc(fp)) != EOF){
		
		printf("%c", ch);
	}
}
