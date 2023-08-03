/*	Program 17 :
 *
 *	Topic : fputc, fgetc
 *	
 *	Fakt 10 character print kar
*/

#include<stdio.h>

void main(){

	FILE *fp = fopen("Demo.txt", "r");

	char ch;

	int n = 10;

	int x = 0;

	while((ch = fgetc(fp)) != -1){
	
		if(x == n){

			break;
		}else{
		
			printf("%c", ch);
			x++;
		}
	}
}


/*	while((ch = fgetc(fp) != -1 && n != 0){
 *
 *		printf("%c", ch);
 *		x--;
 *	}
 *	
*/	
