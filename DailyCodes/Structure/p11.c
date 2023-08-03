/*	PRogram 11 :
 *
 *	Structure Initialization / Assigning value to structure variable
*/	

#include<stdio.h>

struct CricPlayer{
	
	char pName[20];
	int jerNo;
	float avg;

};

void main(){
	
	struct CricPlayer obj1 = {"Virat", 18, 50.55f};

	printf("%s\n", obj1.pName);
	printf("%d\n", obj1.jerNo);
	printf("%f\n", obj1.avg);

}

/*	structure cha object la 3 jaga bhetu shaktat
 *
 *		1 - Main Stack frame - main
 *		2 - Data section - global
 *		3 - Heap - malloc
 *
 *
 *	ithe obj1 la main chya stack frame madhe jaga bhetli
*/	
