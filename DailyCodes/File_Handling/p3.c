/*	Program 3 : 
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

	printf("%d\n", fp -> _fileno);		//3

	printf("%d\n", (*fp)._fileno);		//3
}

/*	File descriptor cha no. ahe 3, apan file vachayla pahije tar
 *	3 structure bantat process var ani tyala no. 3 allocate hoto
 *	karan 0 1 2 heh stdin stdout ani stderr la bhetatat.
*/
