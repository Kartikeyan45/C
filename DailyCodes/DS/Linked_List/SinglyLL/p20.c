/*	PRogram 10 : WAP for the LinkedList of Malls conisting its name, number of shops
 *	 	     and revenue.Connect 3 malls in the LinkedList and print their data.
*/
realtime
#include<stdio.h>
#include<stdlib.h>

typedef struct Malls{

	char mName[20];
	int noOfShops;
	float revenue;

	struct Malls *next;
}mall;

mall *head = NULL;

void main(){
	
	int nodes;
	printf("Enter Number of Nodes\n");
	scanf("%d", &nodes);

	for(int i = 0; i < nodes; i++){
	
		addNodes();
	}

	printLL();
}
