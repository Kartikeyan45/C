/*	Program 24 :
 *
 *	Topic : Nested Structure
*/

#include<stdio.h>
#include<string.h>

struct movie{
	
	char name[20];

	struct movie_info{
		char actor[20];
		float imdb;
		int count;
	}obj;
};

void main(){

	struct movie obj1;

	strcpy(obj1.name, "Kantara");
	strcpy(obj1.obj.actor, "rishab");
	obj1.obj.imdb = 9.7;
	obj1.obj.count = 10;

	printf("%s\n", obj1.name);
	printf("%s\n", obj1.obj.actor);
	printf("%d\n", obj1.obj.imdb);
	printf("%d\n", obj1.obj.count);
	
	struct movie obj2 = {"Iron man", {"tony shark", 9, 8.5}};

	printf("%s\n", obj2.name);
	printf("%s\n", obj2.obj.actor);
	printf("%d\n", obj2.obj.imdb);
	printf("%d\n", obj2.obj.count);

}
