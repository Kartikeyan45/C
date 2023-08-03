/*	PRogram 12 :
*/	

#include<stdio.h>

struct CricPlayer{
	
	char pName[20];
	int jerNo;
	float avg;
}obj1 = {"MS Dhoni", 7, 47.89};

void main(){
	
	struct CricPlayer obj2 = {"Virat", 18, 50.55f};

	printf("%s\n", obj1.pName);
	printf("%d\n", obj1.jerNo);
	printf("%f\n", obj1.avg);

	printf("%s\n", obj2.pName);
	printf("%d\n", obj2.jerNo);
	printf("%f\n", obj2.avg);
}

/*	structure cha object la 3 jaga bhetu shaktat
 *
 *		1 - Main Stack frame - main
 *		2 - Data section - global
 *		3 - Heap - malloc
 *
 *	ithe obj2 la main chya stack frame madhe jaga bhetli
 *
 *	obj1 global declare kelay tar obj2 la memory data section
 *	madhe bhetli
*/	
