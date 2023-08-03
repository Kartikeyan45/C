/*	Program 3 :
 *
 *	auto can only be initialized in the function
 *	for global errors
 *
 *	auto fakt local variable mahnun chalto. 
*/

#include<stdio.h>

auto int y = 20;

void main(){

	auto int x = 10;

	printf("%d\n", x);

	printf("%p\n", &x);

	printf("%d\n", y);

	printf("%p\n", &y);

}

/*	
 *	error : file-scope declaration of "y" specifies "auto"
 *
 *		auto int y = 20;
 *			   ^
*/			   
