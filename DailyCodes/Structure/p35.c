/*	Program 35 :
 *
 *	Topic : Typedef
 *		
 *		It is used to give allices i.e to give second name to datatype
*/

#include<stdio.h>

struct Employee{

	int empId;
	char empName[20];
	float empSal;
};

void main(){

	Employee obj1 = {14700, "Jeevan", 95.50};
}

/*	error : unknown type name "Emplyee"; use "struct" keyword
 *		to refer to the type.
 *
 *		Employee obj1 = {};
 *		^
 *		struct
*/				
