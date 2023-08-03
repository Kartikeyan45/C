/*	Program 37 :
 *
 *	Topic : Typedef
*/

#include<stdio.h>

typedef struct Employee{

	int empId;
	char empName[20];
	float empSal;
}Emp = {10, "Kanha", 20.50};

void main(){

	struct Employee obj1 = {14700, "Jeevan", 95.50};

	Emp obj2 = {14700, "Jeevan", 95.50};

}

/*	error : typedef "Emp" is initialized (use __typeof__ instead)
*/	
