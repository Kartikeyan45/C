/*	Program 23 :
 *
 *	Topic : Nested Structure
*/

#include<stdio.h>
#include<string.h>

struct movie_info{

	char actor[20];
	float rate;
	int imdb;
};

struct movie{

	char name[20];

	struct movie_info obj;
};

void main(){

	struct movie obj1, obj2;

	strcpy(obj1.name, "Kantara");
	strcpy(obj1.obj.actor, "rishab");
	obj1.obj.imdb = 9;
	obj1.obj.rate = 9.7;

	printf("%s\n", obj1.name);
	printf("%s\n", obj1.obj.actor);
	printf("%d\n", obj1.obj.imdb);
	printf("%f\n", obj1.obj.rate);

	strcpy(obj2.name, "hello");
	strcpy(obj2.obj.actor, "abcd");
	obj2.obj.imdb = 10.5f;
	obj2.obj.rate = 9.5;

	printf("%s\n", obj2.name);
	printf("%s\n", obj2.obj.actor);
	printf("%d\n", obj2.obj.imdb);
	printf("%f\n", obj2.obj.rate);

	printf("%s\n", obj1.name);
	printf("%s\n", obj1.obj.actor);
	printf("%d\n", obj1.obj.imdb);
	printf("%f\n", obj1.obj.rate);

	printf("%s\n", obj2.name);
	printf("%s\n", obj2.obj.actor);
	printf("%d\n", obj2.obj.imdb);
	printf("%f\n", obj2.obj.rate);

}
