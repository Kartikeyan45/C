/*	Program 36 :
 *
 *	Topic : Typedef
*/

#include<stdio.h>

typedef struct Employee{

	int empId;
	char empName[20];
	float empSal;
}Emp;

void main(){

	struct Employee obj1 = {14700, "Jeevan", 95.50};

	Emp obj2 = {14700, "Jeevan", 95.50};

}

//	Here Emp is not an object, it is second name to Employee
