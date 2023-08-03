/*	Program 4 :
 *
 *	Array of Structure
*/

#include<stdio.h>

struct CricketP{

	int jerNo;
	char pName[20];
	float rev;
}obj0 = {7, "MSD", 600.55};

void main(){

	struct Player obj1 = {10, "Messi", 450.45};	
	struct Player obj1 = {4, "Harry", 320.45};
	struct Player obj1 = {18, "Virat", 440.45};
	
	struct CricketP arr[3] = {obj1, obj2, obj3};

	for(int i = 0; i < 3; i++){
	
		printf("%d\n", arr[i].jerNo);

		printf("%s\n", arr[i].pName);

		printf("%f\n", arr[i].rev);

	}
}
